// Copyright (c) 2009 Satoshi Nakamoto
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __uibase__
#define __uibase__

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/toolbar.h>
#include <wx/statusbr.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/listctrl.h>
#include <wx/notebook.h>
#include <wx/frame.h>
#include <wx/html/htmlwin.h>
#include <wx/dialog.h>
#include <wx/statbmp.h>
#include <wx/combobox.h>
#include <wx/scrolwin.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/treectrl.h>
#include <wx/checkbox.h>

///////////////////////////////////////////////////////////////////////////

#define wxID_MAINFRAME 1000
#define wxID_OPTIONSGENERATEBITCOINS 1001
#define wxID_BUTTONSEND 1002
#define wxID_BUTTONRECEIVE 1003
#define wxID_TEXTCTRLADDRESS 1004
#define wxID_BUTTONCOPY 1005
#define wxID_BUTTONCHANGE 1006
#define wxID_TRANSACTIONFEE 1007
#define wxID_TEXTCTRLPAYTO 1008
#define wxID_BUTTONPASTE 1009
#define wxID_BUTTONADDRESSBOOK 1010
#define wxID_TEXTCTRLAMOUNT 1011
#define wxID_CHOICETRANSFERTYPE 1012
#define wxID_LISTCTRL 1013
#define wxID_BUTTONRENAME 1014
#define wxID_BUTTONNEW 1015
#define wxID_BUTTONEDIT 1016
#define wxID_BUTTONDELETE 1017
#define wxID_DEL0 1018
#define wxID_DEL1 1019
#define wxID_DEL2 1020
#define wxID_DEL3 1021
#define wxID_DEL4 1022
#define wxID_DEL5 1023
#define wxID_DEL6 1024
#define wxID_DEL7 1025
#define wxID_DEL8 1026
#define wxID_DEL9 1027
#define wxID_DEL10 1028
#define wxID_DEL11 1029
#define wxID_DEL12 1030
#define wxID_DEL13 1031
#define wxID_DEL14 1032
#define wxID_DEL15 1033
#define wxID_DEL16 1034
#define wxID_DEL17 1035
#define wxID_DEL18 1036
#define wxID_DEL19 1037
#define wxID_BUTTONPREVIEW 1038
#define wxID_BUTTONSAMPLE 1039
#define wxID_CANCEL2 1040
#define wxID_BUTTONBACK 1041
#define wxID_BUTTONNEXT 1042
#define wxID_SUBMIT 1043
#define wxID_OPENNEWTABLE 1044
#define wxID_DEALHAND 1045
#define wxID_FOLD 1046
#define wxID_CALL 1047
#define wxID_RAISE 1048
#define wxID_LEAVETABLE 1049
#define wxID_DITCHPLAYER 1050
#define wxID_TEXTCTRL 1051

///////////////////////////////////////////////////////////////////////////////
/// Class CMainFrameBase
///////////////////////////////////////////////////////////////////////////////
class CMainFrameBase : public wxFrame
{
private:

protected:
    wxMenuBar* m_menubar;
    wxMenu* m_menuFile;
    wxMenu* m_menuHelp;
    wxToolBar* m_toolBar;
    wxStatusBar* m_statusBar;

    wxStaticText* m_staticText32;
    wxTextCtrl* m_textCtrlAddress;
    wxButton* m_buttonCopy;
    wxButton* m_button91;

    wxPanel* m_panel14;
    wxStaticText* m_staticText41;
    wxStaticText* m_staticTextBalance;

    wxChoice* m_choiceFilter;
    wxNotebook* m_notebook;
    wxPanel* m_panel7;
    wxPanel* m_panel9;
    wxPanel* m_panel8;
    wxPanel* m_panel10;
    wxPanel* m_panel11;

    // Virtual event handlers, overide them in your derived class
    virtual void OnClose(wxCloseEvent& event){ event.Skip(); }
    virtual void OnIdle(wxIdleEvent& event){ event.Skip(); }
    virtual void OnMouseEvents(wxMouseEvent& event){ event.Skip(); }
    virtual void OnPaint(wxPaintEvent& event){ event.Skip(); }
    virtual void OnMenuFileExit(wxCommandEvent& event){ event.Skip(); }
    virtual void OnMenuOptionsGenerate(wxCommandEvent& event){ event.Skip(); }
    virtual void OnMenuOptionsOptions(wxCommandEvent& event){ event.Skip(); }
    virtual void OnMenuHelpAbout(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonSend(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonAddressBook(wxCommandEvent& event){ event.Skip(); }
    virtual void OnKeyDown(wxKeyEvent& event){ event.Skip(); }
    virtual void OnMouseEventsAddress(wxMouseEvent& event){ event.Skip(); }
    virtual void OnSetFocusAddress(wxFocusEvent& event){ event.Skip(); }
    virtual void OnButtonCopy(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonChange(wxCommandEvent& event){ event.Skip(); }
    virtual void OnListColBeginDrag(wxListEvent& event){ event.Skip(); }
    virtual void OnListItemActivatedAllTransactions(wxListEvent& event){ event.Skip(); }
    virtual void OnPaintListCtrl(wxPaintEvent& event){ event.Skip(); }
    virtual void OnListItemActivatedOrdersSent(wxListEvent& event){ event.Skip(); }
    virtual void OnListItemActivatedProductsSent(wxListEvent& event){ event.Skip(); }
    virtual void OnListItemActivatedOrdersReceived(wxListEvent& event){ event.Skip(); }


public:
    wxMenu* m_menuOptions;
    wxListCtrl* m_listCtrl;
    wxListCtrl* m_listCtrlEscrows;
    wxListCtrl* m_listCtrlOrdersSent;
    wxListCtrl* m_listCtrlProductsSent;
    wxListCtrl* m_listCtrlOrdersReceived;
    CMainFrameBase(wxWindow* parent, wxWindowID id = wxID_MAINFRAME, const wxString& title = wxT("Bitcoin"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(705,484), long style = wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL);
    ~CMainFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CTxDetailsDialogBase
///////////////////////////////////////////////////////////////////////////////
class CTxDetailsDialogBase : public wxDialog
{
private:

protected:
    wxHtmlWindow* m_htmlWin;
    wxButton* m_buttonOK;

    // Virtual event handlers, overide them in your derived class
    virtual void OnButtonOK(wxCommandEvent& event){ event.Skip(); }


public:
    CTxDetailsDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Transaction Details"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(620,450), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    ~CTxDetailsDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class COptionsDialogBase
///////////////////////////////////////////////////////////////////////////////
class COptionsDialogBase : public wxDialog
{
private:

protected:

    wxStaticText* m_staticText32;
    wxStaticText* m_staticText31;
    wxTextCtrl* m_textCtrlTransactionFee;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

    // Virtual event handlers, overide them in your derived class
    virtual void OnKillFocusTransactionFee(wxFocusEvent& event){ event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event){ event.Skip(); }


public:
    COptionsDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Options"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,261), long style = wxDEFAULT_DIALOG_STYLE);
    ~COptionsDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CAboutDialogBase
///////////////////////////////////////////////////////////////////////////////
class CAboutDialogBase : public wxDialog
{
private:

protected:


    wxStaticText* m_staticText40;

    wxStaticText* m_staticTextMain;


    wxButton* m_buttonOK;

    // Virtual event handlers, overide them in your derived class
    virtual void OnButtonOK(wxCommandEvent& event){ event.Skip(); }


public:
    wxStaticText* m_staticTextVersion;
    CAboutDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("About Bitcoin"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(507,298), long style = wxDEFAULT_DIALOG_STYLE);
    ~CAboutDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CSendDialogBase
///////////////////////////////////////////////////////////////////////////////
class CSendDialogBase : public wxDialog
{
private:

protected:


    wxStaticText* m_staticText14;

    wxStaticBitmap* m_bitmapCheckMark;
    wxStaticText* m_staticText36;
    wxTextCtrl* m_textCtrlAddress;
    wxButton* m_buttonPaste;
    wxButton* m_buttonAddress;
    wxStaticText* m_staticText19;
    wxTextCtrl* m_textCtrlAmount;
    wxStaticText* m_staticText20;
    wxChoice* m_choiceTransferType;
    wxStaticText* m_staticTextFrom;
    wxTextCtrl* m_textCtrlFrom;
    wxStaticText* m_staticTextMessage;
    wxTextCtrl* m_textCtrlMessage;

    wxButton* m_buttonSend;
    wxButton* m_buttonCancel;

    // Virtual event handlers, overide them in your derived class
    virtual void OnKeyDown(wxKeyEvent& event){ event.Skip(); }
    virtual void OnTextAddress(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonPaste(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonAddressBook(wxCommandEvent& event){ event.Skip(); }
    virtual void OnKillFocusAmount(wxFocusEvent& event){ event.Skip(); }
    virtual void OnButtonSend(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event){ event.Skip(); }


public:
    CSendDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Send Coins"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(675,338), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    ~CSendDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CSendingDialogBase
///////////////////////////////////////////////////////////////////////////////
class CSendingDialogBase : public wxDialog
{
private:

protected:
    wxStaticText* m_staticTextSending;
    wxTextCtrl* m_textCtrlStatus;

    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

    // Virtual event handlers, overide them in your derived class
    virtual void OnClose(wxCloseEvent& event){ event.Skip(); }
    virtual void OnPaint(wxPaintEvent& event){ event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event){ event.Skip(); }


public:
    CSendingDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Sending..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(442,151), long style = wxDEFAULT_DIALOG_STYLE);
    ~CSendingDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CYourAddressDialogBase
///////////////////////////////////////////////////////////////////////////////
class CYourAddressDialogBase : public wxDialog
{
private:

protected:

    wxStaticText* m_staticText45;
    wxListCtrl* m_listCtrl;

    wxButton* m_buttonRename;
    wxButton* m_buttonNew;
    wxButton* m_buttonCopy;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

    // Virtual event handlers, overide them in your derived class
    virtual void OnClose(wxCloseEvent& event){ event.Skip(); }
    virtual void OnListEndLabelEdit(wxListEvent& event){ event.Skip(); }
    virtual void OnListItemActivated(wxListEvent& event){ event.Skip(); }
    virtual void OnListItemSelected(wxListEvent& event){ event.Skip(); }
    virtual void OnButtonRename(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonNew(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCopy(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event){ event.Skip(); }


public:
    CYourAddressDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Your Bitcoin Address"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(610,390), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    ~CYourAddressDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CAddressBookDialogBase
///////////////////////////////////////////////////////////////////////////////
class CAddressBookDialogBase : public wxDialog
{
private:

protected:

    wxStaticText* m_staticText55;
    wxListCtrl* m_listCtrl;

    wxButton* m_buttonEdit;
    wxButton* m_buttonNew;
    wxButton* m_buttonDelete;
    wxButton* m_buttonOK;

    // Virtual event handlers, overide them in your derived class
    virtual void OnClose(wxCloseEvent& event){ event.Skip(); }
    virtual void OnListEndLabelEdit(wxListEvent& event){ event.Skip(); }
    virtual void OnListItemActivated(wxListEvent& event){ event.Skip(); }
    virtual void OnListItemSelected(wxListEvent& event){ event.Skip(); }
    virtual void OnButtonEdit(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonNew(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDelete(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event){ event.Skip(); }


public:
    wxButton* m_buttonCancel;
    CAddressBookDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Address Book"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(610,390), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    ~CAddressBookDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CProductsDialogBase
///////////////////////////////////////////////////////////////////////////////
class CProductsDialogBase : public wxDialog
{
private:

protected:
    wxComboBox* m_comboBoxCategory;
    wxTextCtrl* m_textCtrlSearch;
    wxButton* m_buttonSearch;
    wxListCtrl* m_listCtrl;

    // Virtual event handlers, overide them in your derived class
    virtual void OnCombobox(wxCommandEvent& event){ event.Skip(); }
    virtual void OnKeyDown(wxKeyEvent& event){ event.Skip(); }
    virtual void OnButtonSearch(wxCommandEvent& event){ event.Skip(); }
    virtual void OnListItemActivated(wxListEvent& event){ event.Skip(); }


public:
    CProductsDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Marketplace"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(708,535), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    ~CProductsDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CEditProductDialogBase
///////////////////////////////////////////////////////////////////////////////
class CEditProductDialogBase : public wxFrame
{
private:

protected:
    wxScrolledWindow* m_scrolledWindow;
    wxStaticText* m_staticText106;
    wxComboBox* m_comboBoxCategory;
    wxStaticText* m_staticText108;
    wxTextCtrl* m_textCtrlTitle;
    wxStaticText* m_staticText107;
    wxTextCtrl* m_textCtrlPrice;
    wxStaticText* m_staticText22;
    wxTextCtrl* m_textCtrlDescription;
    wxStaticText* m_staticText23;
    wxTextCtrl* m_textCtrlInstructions;
    wxStaticText* m_staticText24;
    wxStaticText* m_staticText25;

    wxTextCtrl* m_textCtrlLabel0;
    wxTextCtrl* m_textCtrlField0;
    wxButton* m_buttonDel0;
    wxTextCtrl* m_textCtrlLabel1;
    wxTextCtrl* m_textCtrlField1;
    wxButton* m_buttonDel1;
    wxTextCtrl* m_textCtrlLabel2;
    wxTextCtrl* m_textCtrlField2;
    wxButton* m_buttonDel2;
    wxTextCtrl* m_textCtrlLabel3;
    wxTextCtrl* m_textCtrlField3;
    wxButton* m_buttonDel3;
    wxTextCtrl* m_textCtrlLabel4;
    wxTextCtrl* m_textCtrlField4;
    wxButton* m_buttonDel4;
    wxTextCtrl* m_textCtrlLabel5;
    wxTextCtrl* m_textCtrlField5;
    wxButton* m_buttonDel5;
    wxTextCtrl* m_textCtrlLabel6;
    wxTextCtrl* m_textCtrlField6;
    wxButton* m_buttonDel6;
    wxTextCtrl* m_textCtrlLabel7;
    wxTextCtrl* m_textCtrlField7;
    wxButton* m_buttonDel7;
    wxTextCtrl* m_textCtrlLabel8;
    wxTextCtrl* m_textCtrlField8;
    wxButton* m_buttonDel8;
    wxTextCtrl* m_textCtrlLabel9;
    wxTextCtrl* m_textCtrlField9;
    wxButton* m_buttonDel9;
    wxTextCtrl* m_textCtrlLabel10;
    wxTextCtrl* m_textCtrlField10;
    wxButton* m_buttonDel10;
    wxTextCtrl* m_textCtrlLabel11;
    wxTextCtrl* m_textCtrlField11;
    wxButton* m_buttonDel11;
    wxTextCtrl* m_textCtrlLabel12;
    wxTextCtrl* m_textCtrlField12;
    wxButton* m_buttonDel12;
    wxTextCtrl* m_textCtrlLabel13;
    wxTextCtrl* m_textCtrlField13;
    wxButton* m_buttonDel13;
    wxTextCtrl* m_textCtrlLabel14;
    wxTextCtrl* m_textCtrlField14;
    wxButton* m_buttonDel14;
    wxTextCtrl* m_textCtrlLabel15;
    wxTextCtrl* m_textCtrlField15;
    wxButton* m_buttonDel15;
    wxTextCtrl* m_textCtrlLabel16;
    wxTextCtrl* m_textCtrlField16;
    wxButton* m_buttonDel16;
    wxTextCtrl* m_textCtrlLabel17;
    wxTextCtrl* m_textCtrlField17;
    wxButton* m_buttonDel17;
    wxTextCtrl* m_textCtrlLabel18;
    wxTextCtrl* m_textCtrlField18;
    wxButton* m_buttonDel18;
    wxTextCtrl* m_textCtrlLabel19;
    wxTextCtrl* m_textCtrlField19;
    wxButton* m_buttonDel19;
    wxButton* m_buttonAddField;
    wxButton* m_buttonOK;
    wxButton* m_buttonPreview;
    wxButton* m_buttonCancel;

    // Virtual event handlers, overide them in your derived class
    virtual void OnKeyDown(wxKeyEvent& event){ event.Skip(); }
    virtual void OnButtonDel0(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel1(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel2(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel3(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel4(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel5(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel6(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel7(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel8(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel9(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel10(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel11(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel12(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel13(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel14(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel15(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel16(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel17(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel18(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDel19(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonAddField(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonSend(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonPreview(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event){ event.Skip(); }


public:
    wxFlexGridSizer* fgSizer5;
    CEditProductDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Edit Product"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(660,640), long style = wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL);
    ~CEditProductDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CViewProductDialogBase
///////////////////////////////////////////////////////////////////////////////
class CViewProductDialogBase : public wxFrame
{
private:

protected:
    wxHtmlWindow* m_htmlWinReviews;
    wxScrolledWindow* m_scrolledWindow;
    wxRichTextCtrl* m_richTextHeading;
    wxStaticText* m_staticTextInstructions;
    wxButton* m_buttonSubmitForm;
    wxButton* m_buttonCancelForm;
    wxButton* m_buttonBack;
    wxButton* m_buttonNext;
    wxButton* m_buttonCancel;

    // Virtual event handlers, overide them in your derived class
    virtual void OnButtonSubmitForm(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCancelForm(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonBack(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonNext(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event){ event.Skip(); }


public:
    CViewProductDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Order Form"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(630,520), long style = wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL);
    ~CViewProductDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CViewOrderDialogBase
///////////////////////////////////////////////////////////////////////////////
class CViewOrderDialogBase : public wxFrame
{
private:

protected:
    wxHtmlWindow* m_htmlWin;
    wxButton* m_buttonOK;

    // Virtual event handlers, overide them in your derived class
    virtual void OnButtonOK(wxCommandEvent& event){ event.Skip(); }


public:
    CViewOrderDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("View Order"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(630,520), long style = wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL);
    ~CViewOrderDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CEditReviewDialogBase
///////////////////////////////////////////////////////////////////////////////
class CEditReviewDialogBase : public wxFrame
{
private:

protected:

    wxStaticText* m_staticTextSeller;

    wxStaticText* m_staticText110;
    wxChoice* m_choiceStars;
    wxStaticText* m_staticText43;
    wxTextCtrl* m_textCtrlReview;
    wxButton* m_buttonSubmit;
    wxButton* m_buttonCancel;

    // Virtual event handlers, overide them in your derived class
    virtual void OnKeyDown(wxKeyEvent& event){ event.Skip(); }
    virtual void OnButtonSubmit(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event){ event.Skip(); }


public:
    CEditReviewDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Enter Review"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(630,440), long style = wxDEFAULT_FRAME_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL);
    ~CEditReviewDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CPokerLobbyDialogBase
///////////////////////////////////////////////////////////////////////////////
class CPokerLobbyDialogBase : public wxFrame
{
private:

protected:
    wxTreeCtrl* m_treeCtrl;
    wxListCtrl* m_listCtrl;
    wxButton* m_buttonNewTable;

    // Virtual event handlers, overide them in your derived class
    virtual void OnTreeSelChanged(wxTreeEvent& event){ event.Skip(); }
    virtual void OnListItemActivated(wxListEvent& event){ event.Skip(); }
    virtual void OnListItemSelected(wxListEvent& event){ event.Skip(); }
    virtual void OnButtonNewTable(wxCommandEvent& event){ event.Skip(); }


public:
    CPokerLobbyDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Poker Lobby"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(586,457), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL);
    ~CPokerLobbyDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CPokerDialogBase
///////////////////////////////////////////////////////////////////////////////
class CPokerDialogBase : public wxFrame
{
private:

protected:
    wxButton* m_buttonDealHand;
    wxButton* m_buttonFold;
    wxButton* m_buttonCall;
    wxButton* m_buttonRaise;
    wxButton* m_buttonLeaveTable;
    wxTextCtrl* m_textDitchPlayer;

    // Virtual event handlers, overide them in your derived class
    virtual void OnClose(wxCloseEvent& event){ event.Skip(); }
    virtual void OnMouseEvents(wxMouseEvent& event){ event.Skip(); }
    virtual void OnPaint(wxPaintEvent& event){ event.Skip(); }
    virtual void OnSize(wxSizeEvent& event){ event.Skip(); }
    virtual void OnCheckSitOut(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonDealHand(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonFold(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCall(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonRaise(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonLeaveTable(wxCommandEvent& event){ event.Skip(); }
    virtual void OnDitchPlayer(wxCommandEvent& event){ event.Skip(); }
    virtual void OnCheckPreFold(wxCommandEvent& event){ event.Skip(); }
    virtual void OnCheckPreCall(wxCommandEvent& event){ event.Skip(); }
    virtual void OnCheckPreCallAny(wxCommandEvent& event){ event.Skip(); }
    virtual void OnCheckPreRaise(wxCommandEvent& event){ event.Skip(); }
    virtual void OnCheckPreRaiseAny(wxCommandEvent& event){ event.Skip(); }


public:
    wxCheckBox* m_checkSitOut;
    wxCheckBox* m_checkPreFold;
    wxCheckBox* m_checkPreCall;
    wxCheckBox* m_checkPreCallAny;
    wxCheckBox* m_checkPreRaise;
    wxCheckBox* m_checkPreRaiseAny;
    wxStatusBar* m_statusBar;
    CPokerDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Poker"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(806,550), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_NO_TASKBAR|wxFULL_REPAINT_ON_RESIZE|wxTAB_TRAVERSAL);
    ~CPokerDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CGetTextFromUserDialogBase
///////////////////////////////////////////////////////////////////////////////
class CGetTextFromUserDialogBase : public wxDialog
{
private:

protected:

    wxStaticText* m_staticTextMessage1;
    wxTextCtrl* m_textCtrl1;
    wxStaticText* m_staticTextMessage2;
    wxTextCtrl* m_textCtrl2;


    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

    // Virtual event handlers, overide them in your derived class
    virtual void OnClose(wxCloseEvent& event){ event.Skip(); }
    virtual void OnKeyDown(wxKeyEvent& event){ event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event){ event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event){ event.Skip(); }


public:
    CGetTextFromUserDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(403,138), long style = wxDEFAULT_DIALOG_STYLE);
    ~CGetTextFromUserDialogBase();

};

#endif //__uibase__
