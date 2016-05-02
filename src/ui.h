// Copyright (c) 2009 Satoshi Nakamoto
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.




DECLARE_EVENT_TYPE(wxEVT_CROSSTHREADCALL, -1)
DECLARE_EVENT_TYPE(wxEVT_REPLY1, -1)
DECLARE_EVENT_TYPE(wxEVT_REPLY2, -1)
DECLARE_EVENT_TYPE(wxEVT_REPLY3, -1)
DECLARE_EVENT_TYPE(wxEVT_TABLEADDED, -1)
DECLARE_EVENT_TYPE(wxEVT_TABLEUPDATED, -1)
DECLARE_EVENT_TYPE(wxEVT_TABLEDELETED, -1)

enum
{
    UICALL_ADDORDER = 1,
    UICALL_UPDATEORDER,
};



extern void HandleCtrlA(wxKeyEvent& event);
extern string DateTimeStr(int64 nTime);
extern string FormatTxStatus(const CWalletTx& wtx);
extern void CrossThreadCall(int nID, void* pdata);
extern void MainFrameRepaint();






class CMainFrame : public CMainFrameBase
{
protected:
    // Event handlers
    void OnClose(wxCloseEvent& event);
    void OnMouseEvents(wxMouseEvent& event);
    void OnKeyDown(wxKeyEvent& event) { HandleCtrlA(event); }
    void OnIdle(wxIdleEvent& event);
    void OnPaint(wxPaintEvent& event);
    void OnPaintListCtrl(wxPaintEvent& event);
    void OnMenuFileExit(wxCommandEvent& event);
    void OnMenuOptionsGenerate(wxCommandEvent& event);
    void OnMenuOptionsOptions(wxCommandEvent& event);
    void OnMenuHelpAbout(wxCommandEvent& event);
    void OnButtonSend(wxCommandEvent& event);
    void OnButtonAddressBook(wxCommandEvent& event);
    void OnSetFocusAddress(wxFocusEvent& event);
    void OnMouseEventsAddress(wxMouseEvent& event);
    void OnButtonCopy(wxCommandEvent& event);
    void OnButtonChange(wxCommandEvent& event);
    void OnListColBeginDrag(wxListEvent& event);
    void OnListItemActivatedAllTransactions(wxListEvent& event);
    void OnListItemActivatedProductsSent(wxListEvent& event);
    void OnListItemActivatedOrdersSent(wxListEvent& event);
    void OnListItemActivatedOrdersReceived(wxListEvent& event);
	
public:
    /** Constructor */
    CMainFrame(wxWindow* parent);
    ~CMainFrame();

    // Custom
    bool fRefreshListCtrl;
    bool fRefreshListCtrlRunning;
    bool fOnSetFocusAddress;
    CBlockIndex* pindexBestLast;
    set<uint256> setUnmaturedDisplayed;

    void OnCrossThreadCall(wxCommandEvent& event);
    void InsertLine(bool fNew, int nIndex, uint256 hashKey, string strSort, const wxString& str1, const wxString& str2, const wxString& str3, const wxString& str4, const wxString& str5);
    void InsertTransaction(const CWalletTx& wtx, bool fNew, int nIndex=-1);
    void RefreshListCtrl();
    void RefreshStatus();
};




class CTxDetailsDialog : public CTxDetailsDialogBase
{
protected:
    // Event handlers
    void OnButtonOK(wxCommandEvent& event);

public:
    /** Constructor */
    CTxDetailsDialog(wxWindow* parent, CWalletTx wtx);

    // State
    CWalletTx wtx;
};



class COptionsDialog : public COptionsDialogBase
{
protected:
    // Event handlers
    void OnKillFocusTransactionFee(wxFocusEvent& event);
    void OnButtonOK(wxCommandEvent& event);
    void OnButtonCancel(wxCommandEvent& event);

public:
    /** Constructor */
    COptionsDialog(wxWindow* parent);
};



class CAboutDialog : public CAboutDialogBase
{
protected:
    // Event handlers
    void OnButtonOK(wxCommandEvent& event);

public:
    /** Constructor */
    CAboutDialog(wxWindow* parent);
};



class CSendDialog : public CSendDialogBase
{
protected:
    // Event handlers
    void OnKeyDown(wxKeyEvent& event) { HandleCtrlA(event); }
    void OnTextAddress(wxCommandEvent& event);
    void OnKillFocusAmount(wxFocusEvent& event);
    void OnButtonAddressBook(wxCommandEvent& event);
    void OnButtonPaste(wxCommandEvent& event);
    void OnButtonSend(wxCommandEvent& event);
    void OnButtonCancel(wxCommandEvent& event);
	
public:
    /** Constructor */
    CSendDialog(wxWindow* parent, const wxString& strAddress="");
};



class CSendingDialog : public CSendingDialogBase
{
public:
    // Event handlers
    void OnClose(wxCloseEvent& event);
    void OnButtonOK(wxCommandEvent& event);
    void OnButtonCancel(wxCommandEvent& event);
    void OnPaint(wxPaintEvent& event);
	
public:
    /** Constructor */
    CSendingDialog(wxWindow* parent, const CAddress& addrIn, int64 nPriceIn, const CWalletTx& wtxIn);
    ~CSendingDialog();

    // State
    CAddress addr;
    int64 nPrice;
    CWalletTx wtx;
    wxDateTime start;
    string strStatus;
    bool fCanCancel;
    bool fAbort;
    bool fSuccess;
    bool fUIDone;
    bool fWorkDone;

    void Close();
    void Repaint();
    bool Status();
    bool Status(const string& str);
    bool Error(const string& str);
    void StartTransfer();
    void OnReply2(CDataStream& vRecv);
    void OnReply3(CDataStream& vRecv);
};

void SendingDialogStartTransfer(void* parg);
void SendingDialogOnReply2(void* parg, CDataStream& vRecv);
void SendingDialogOnReply3(void* parg, CDataStream& vRecv);



class CYourAddressDialog : public CYourAddressDialogBase
{
protected:
    // Event handlers
    void OnListEndLabelEdit(wxListEvent& event);
    void OnListItemSelected(wxListEvent& event);
    void OnListItemActivated(wxListEvent& event);
    void OnButtonRename(wxCommandEvent& event);
    void OnButtonNew(wxCommandEvent& event);
    void OnButtonCopy(wxCommandEvent& event);
    void OnButtonOK(wxCommandEvent& event);
    void OnButtonCancel(wxCommandEvent& event);
    void OnClose(wxCloseEvent& event);

public:
    /** Constructor */
    CYourAddressDialog(wxWindow* parent);
    CYourAddressDialog(wxWindow* parent, const string& strInitSelected);

    // Custom
    wxString GetAddress();
};



class CAddressBookDialog : public CAddressBookDialogBase
{
protected:
    // Event handlers
    void OnListEndLabelEdit(wxListEvent& event);
    void OnListItemSelected(wxListEvent& event);
    void OnListItemActivated(wxListEvent& event);
    void OnButtonEdit(wxCommandEvent& event);
    void OnButtonDelete(wxCommandEvent& event);
    void OnButtonNew(wxCommandEvent& event);
    void OnButtonCopy(wxCommandEvent& event);
    void OnButtonOK(wxCommandEvent& event);
    void OnButtonCancel(wxCommandEvent& event);
    void OnClose(wxCloseEvent& event);

public:
    /** Constructor */
    CAddressBookDialog(wxWindow* parent, const wxString& strInitSelected, bool fSendingIn);

    // Custom
    bool fSending;
    wxString GetAddress();
};



class CProductsDialog : public CProductsDialogBase
{
protected:
    // Event handlers
    void OnKeyDown(wxKeyEvent& event) { HandleCtrlA(event); }
    void OnCombobox(wxCommandEvent& event);
    void OnButtonSearch(wxCommandEvent& event);
    void OnListItemActivated(wxListEvent& event);

public:
    /** Constructor */
    CProductsDialog(wxWindow* parent);

    // Custom
    vector<CProduct> m_vProduct;
};



class CEditProductDialog : public CEditProductDialogBase
{
protected:
    // Event handlers
    void OnKeyDown(wxKeyEvent& event) { HandleCtrlA(event); }
    void OnButtonDel0(wxCommandEvent& event);
    void OnButtonDel1(wxCommandEvent& event);
    void OnButtonDel2(wxCommandEvent& event);
    void OnButtonDel3(wxCommandEvent& event);
    void OnButtonDel4(wxCommandEvent& event);
    void OnButtonDel5(wxCommandEvent& event);
    void OnButtonDel6(wxCommandEvent& event);
    void OnButtonDel7(wxCommandEvent& event);
    void OnButtonDel8(wxCommandEvent& event);
    void OnButtonDel9(wxCommandEvent& event);
    void OnButtonDel10(wxCommandEvent& event);
    void OnButtonDel11(wxCommandEvent& event);
    void OnButtonDel12(wxCommandEvent& event);
    void OnButtonDel13(wxCommandEvent& event);
    void OnButtonDel14(wxCommandEvent& event);
    void OnButtonDel15(wxCommandEvent& event);
    void OnButtonDel16(wxCommandEvent& event);
    void OnButtonDel17(wxCommandEvent& event);
    void OnButtonDel18(wxCommandEvent& event);
    void OnButtonDel19(wxCommandEvent& event);
    void OnButtonAddField(wxCommandEvent& event);
    void OnButtonSend(wxCommandEvent& event);
    void OnButtonPreview(wxCommandEvent& event);
    void OnButtonCancel(wxCommandEvent& event);

public:
    /** Constructor */
    CEditProductDialog(wxWindow* parent);

    // Custom
    enum { FIELDS_MAX = 20 };
    wxTextCtrl* m_textCtrlLabel[FIELDS_MAX];
    wxTextCtrl* m_textCtrlField[FIELDS_MAX];
    wxButton*   m_buttonDel[FIELDS_MAX];

    void LayoutAll();
    void ShowLine(int i, bool fShow=true);
    void OnButtonDel(wxCommandEvent& event, int n);
    void SetProduct(const CProduct& productIn);
    void GetProduct(CProduct& product);

};



class CViewProductDialog : public CViewProductDialogBase
{
protected:
    // Event handlers
    void OnButtonSubmitForm(wxCommandEvent& event);
    void OnButtonCancelForm(wxCommandEvent& event);
    void OnButtonBack(wxCommandEvent& event);
    void OnButtonNext(wxCommandEvent& event);
    void OnButtonCancel(wxCommandEvent& event);

public:
    /** Constructor */
    CViewProductDialog(wxWindow* parent, const CProduct& productIn);
    ~CViewProductDialog();

    // Custom
    CProduct product;
    enum { FIELDS_MAX = 20 };
    wxStaticText* m_staticTextLabel[FIELDS_MAX];
    wxTextCtrl*   m_textCtrlField[FIELDS_MAX];
    wxChoice*     m_choiceField[FIELDS_MAX];

    void GetOrder(CWalletTx& order);
    void UpdateProductDisplay(bool fDetails);
    void OnReply1(wxCommandEvent& event);
};



class CViewOrderDialog : public CViewOrderDialogBase
{
protected:
    // Event handlers
    void OnButtonOK(wxCommandEvent& event);

public:
    /** Constructor */
    CViewOrderDialog(wxWindow* parent, CWalletTx order, bool fReceived);

    // Custom
    bool fReceived;
};



class CEditReviewDialog : public CEditReviewDialogBase
{
protected:
    // Event handlers
    void OnKeyDown(wxKeyEvent& event) { HandleCtrlA(event); }
    void OnButtonSubmit(wxCommandEvent& event);
    void OnButtonCancel(wxCommandEvent& event);

public:
    /** Constructor */
    CEditReviewDialog(wxWindow* parent);

    // Custom
    void GetReview(CReview& review);
};



class CGetTextFromUserDialog : public CGetTextFromUserDialogBase
{
protected:
    // Event handlers
    void OnButtonOK(wxCommandEvent& event)     { EndModal(true); }
    void OnButtonCancel(wxCommandEvent& event) { EndModal(false); }
    void OnClose(wxCloseEvent& event)          { EndModal(false); }

    void OnKeyDown(wxKeyEvent& event)
    {
        if (event.GetKeyCode() == '\r' || event.GetKeyCode() == WXK_NUMPAD_ENTER)
            EndModal(true);
        else
            HandleCtrlA(event);
    }

public:
    /** Constructor */
    CGetTextFromUserDialog(wxWindow* parent,
                           const string& strCaption,
                           const string& strMessage1,
                           const string& strValue1="",
                           const string& strMessage2="",
                           const string& strValue2="") : CGetTextFromUserDialogBase(parent, wxID_ANY, strCaption)
    {
        m_staticTextMessage1->SetLabel(strMessage1);
        m_textCtrl1->SetValue(strValue1);
        if (!strMessage2.empty())
        {
            m_staticTextMessage2->Show(true);
            m_staticTextMessage2->SetLabel(strMessage2);
            m_textCtrl2->Show(true);
            m_textCtrl2->SetValue(strValue2);
            SetSize(wxDefaultCoord, 180);
        }
    }

    // Custom
    string GetValue()  { return (string)m_textCtrl1->GetValue(); }
    string GetValue1() { return (string)m_textCtrl1->GetValue(); }
    string GetValue2() { return (string)m_textCtrl2->GetValue(); }
};





