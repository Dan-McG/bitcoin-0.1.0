// Copyright (c) 2009 Satoshi Nakamoto
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "uibase.h"

///////////////////////////////////////////////////////////////////////////

CMainFrameBase::CMainFrameBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
    this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNFACE));

    m_menubar = new wxMenuBar(0);
    m_menubar->SetBackgroundColour(wxColour(240, 240, 240));

    m_menuFile = new wxMenu();
    wxMenuItem* m_menuFileExit;
    m_menuFileExit = new wxMenuItem(m_menuFile, wxID_ANY, wxString(wxT("E&xit")) , wxEmptyString, wxITEM_NORMAL);
    m_menuFile->Append(m_menuFileExit);

    m_menubar->Append(m_menuFile, wxT("&File"));

    m_menuOptions = new wxMenu();
    wxMenuItem* m_menuOptionsGenerateBitcoins;
    m_menuOptionsGenerateBitcoins = new wxMenuItem(m_menuOptions, wxID_OPTIONSGENERATEBITCOINS, wxString(wxT("&Generate Coins")) , wxEmptyString, wxITEM_CHECK);
    m_menuOptions->Append(m_menuOptionsGenerateBitcoins);

    wxMenuItem* m_menuOptionsOptions;
    m_menuOptionsOptions = new wxMenuItem(m_menuOptions, wxID_ANY, wxString(wxT("&Options...")) , wxEmptyString, wxITEM_NORMAL);
    m_menuOptions->Append(m_menuOptionsOptions);

    m_menubar->Append(m_menuOptions, wxT("&Options"));

    m_menuHelp = new wxMenu();
    wxMenuItem* m_menuHelpAbout;
    m_menuHelpAbout = new wxMenuItem(m_menuHelp, wxID_ANY, wxString(wxT("&About...")) , wxEmptyString, wxITEM_NORMAL);
    m_menuHelp->Append(m_menuHelpAbout);

    m_menubar->Append(m_menuHelp, wxT("&Help"));

    this->SetMenuBar(m_menubar);

    m_toolBar = this->CreateToolBar(wxTB_FLAT|wxTB_HORZ_TEXT, wxID_ANY);
    m_toolBar->SetToolBitmapSize(wxSize(20,20));
    m_toolBar->SetToolSeparation(1);
    m_toolBar->SetFont(wxFont(wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString));

    m_toolBar->AddTool(wxID_BUTTONSEND, wxT("&Send Coins"), wxBitmap(wxT("send20"), wxBITMAP_TYPE_RESOURCE), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    m_toolBar->AddTool(wxID_BUTTONRECEIVE, wxT("&Address Book"), wxBitmap(wxT("addressbook20"), wxBITMAP_TYPE_RESOURCE), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
    m_toolBar->Realize();

    m_statusBar = this->CreateStatusBar(1, wxST_SIZEGRIP, wxID_ANY);
    m_statusBar->SetBackgroundColour(wxColour(240, 240, 240));

    wxBoxSizer* bSizer2;
    bSizer2 = new wxBoxSizer(wxVERTICAL);


    bSizer2->Add(0, 2, 0, wxEXPAND, 5);

    wxBoxSizer* bSizer85;
    bSizer85 = new wxBoxSizer(wxHORIZONTAL);

    m_staticText32 = new wxStaticText(this, wxID_ANY, wxT("Your Bitcoin Address:"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText32->Wrap(-1);
    bSizer85->Add(m_staticText32, 0, wxALIGN_CENTER_VERTICAL|wxLEFT, 5);

    m_textCtrlAddress = new wxTextCtrl(this, wxID_TEXTCTRLADDRESS, wxEmptyString, wxDefaultPosition, wxSize(250,-1), wxTE_READONLY);
    m_textCtrlAddress->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));

    bSizer85->Add(m_textCtrlAddress, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_buttonCopy = new wxButton(this, wxID_BUTTONCOPY, wxT("&Copy to Clipboard"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT);
    bSizer85->Add(m_buttonCopy, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5);

    m_button91 = new wxButton(this, wxID_BUTTONCHANGE, wxT("C&hange..."), wxDefaultPosition, wxDefaultSize, 0);
    bSizer85->Add(m_button91, 0, wxRIGHT, 5);


    bSizer85->Add(0, 0, 0, wxEXPAND, 5);

    bSizer2->Add(bSizer85, 0, wxEXPAND|wxRIGHT|wxLEFT, 5);

    wxBoxSizer* bSizer3;
    bSizer3 = new wxBoxSizer(wxHORIZONTAL);

    m_panel14 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxBoxSizer* bSizer66;
    bSizer66 = new wxBoxSizer(wxHORIZONTAL);

    m_staticText41 = new wxStaticText(m_panel14, wxID_ANY, wxT("Balance:"), wxDefaultPosition, wxSize(-1,15), 0);
    m_staticText41->Wrap(-1);
    bSizer66->Add(m_staticText41, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5);

    m_staticTextBalance = new wxStaticText(m_panel14, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(120,15), wxALIGN_RIGHT|wxST_NO_AUTORESIZE);
    m_staticTextBalance->Wrap(-1);
    m_staticTextBalance->SetFont(wxFont(8, 70, 90, 90, false, wxEmptyString));
    m_staticTextBalance->SetBackgroundColour(wxColour(240, 240, 240));

    bSizer66->Add(m_staticTextBalance, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    m_panel14->SetSizer(bSizer66);
    m_panel14->Layout();
    bSizer66->Fit(m_panel14);
    bSizer3->Add(m_panel14, 1, wxEXPAND|wxALIGN_BOTTOM|wxALL, 5);


    bSizer3->Add(0, 0, 0, wxEXPAND, 5);

    wxString m_choiceFilterChoices[] = { wxT(" All"), wxT(" Sent"), wxT(" Received"), wxT(" In Progress") };
    int m_choiceFilterNChoices = sizeof(m_choiceFilterChoices) / sizeof(wxString);
    m_choiceFilter = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(110,-1), m_choiceFilterNChoices, m_choiceFilterChoices, 0);
    m_choiceFilter->SetSelection(0);
    m_choiceFilter->Hide();

    bSizer3->Add(m_choiceFilter, 0, wxALIGN_BOTTOM|wxTOP|wxRIGHT|wxLEFT, 5);

    bSizer2->Add(bSizer3, 0, wxEXPAND, 5);

    m_notebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0);
    m_panel7 = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    wxBoxSizer* bSizer157;
    bSizer157 = new wxBoxSizer(wxVERTICAL);

    m_listCtrl = new wxListCtrl(m_panel7, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_NO_SORT_HEADER|wxLC_REPORT|wxLC_SORT_DESCENDING|wxALWAYS_SHOW_SB);
    bSizer157->Add(m_listCtrl, 1, wxEXPAND|wxALL, 5);

    m_panel7->SetSizer(bSizer157);
    m_panel7->Layout();
    bSizer157->Fit(m_panel7);
    m_notebook->AddPage(m_panel7, wxT("All Transactions"), false);

    bSizer2->Add(m_notebook, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer_TabsForFutureUse;
    bSizer_TabsForFutureUse = new wxBoxSizer(wxVERTICAL);

    m_panel9 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    m_panel9->Hide();

    wxBoxSizer* bSizer159;
    bSizer159 = new wxBoxSizer(wxVERTICAL);

    m_listCtrlEscrows = new wxListCtrl(m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_NO_SORT_HEADER|wxLC_REPORT);
    bSizer159->Add(m_listCtrlEscrows, 1, wxALL|wxEXPAND, 5);

    m_panel9->SetSizer(bSizer159);
    m_panel9->Layout();
    bSizer159->Fit(m_panel9);
    bSizer_TabsForFutureUse->Add(m_panel9, 1, wxEXPAND | wxALL, 5);

    m_panel8 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    m_panel8->Hide();

    wxBoxSizer* bSizer158;
    bSizer158 = new wxBoxSizer(wxVERTICAL);

    m_listCtrlOrdersSent = new wxListCtrl(m_panel8, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_NO_SORT_HEADER|wxLC_REPORT);
    bSizer158->Add(m_listCtrlOrdersSent, 1, wxALL|wxEXPAND, 5);

    m_panel8->SetSizer(bSizer158);
    m_panel8->Layout();
    bSizer158->Fit(m_panel8);
    bSizer_TabsForFutureUse->Add(m_panel8, 1, wxEXPAND | wxALL, 5);

    m_panel10 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    m_panel10->Hide();

    wxBoxSizer* bSizer160;
    bSizer160 = new wxBoxSizer(wxVERTICAL);

    m_listCtrlProductsSent = new wxListCtrl(m_panel10, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_NO_SORT_HEADER|wxLC_REPORT);
    bSizer160->Add(m_listCtrlProductsSent, 1, wxALL|wxEXPAND, 5);

    m_panel10->SetSizer(bSizer160);
    m_panel10->Layout();
    bSizer160->Fit(m_panel10);
    bSizer_TabsForFutureUse->Add(m_panel10, 1, wxEXPAND | wxALL, 5);

    m_panel11 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    m_panel11->Hide();

    wxBoxSizer* bSizer161;
    bSizer161 = new wxBoxSizer(wxVERTICAL);

    m_listCtrlOrdersReceived = new wxListCtrl(m_panel11, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_NO_SORT_HEADER|wxLC_REPORT);
    bSizer161->Add(m_listCtrlOrdersReceived, 1, wxALL|wxEXPAND, 5);

    m_panel11->SetSizer(bSizer161);
    m_panel11->Layout();
    bSizer161->Fit(m_panel11);
    bSizer_TabsForFutureUse->Add(m_panel11, 1, wxEXPAND | wxALL, 5);

    bSizer2->Add(bSizer_TabsForFutureUse, 1, wxEXPAND, 5);

    this->SetSizer(bSizer2);
    this->Layout();

    // Connect Events
    this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CMainFrameBase::OnClose));
    this->Connect(wxEVT_IDLE, wxIdleEventHandler(CMainFrameBase::OnIdle));
    this->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_MIDDLE_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_MIDDLE_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_RIGHT_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_MOTION, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_LEFT_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_MIDDLE_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_RIGHT_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Connect(wxEVT_PAINT, wxPaintEventHandler(CMainFrameBase::OnPaint));
    this->Connect(m_menuFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(CMainFrameBase::OnMenuFileExit));
    this->Connect(m_menuOptionsGenerateBitcoins->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(CMainFrameBase::OnMenuOptionsGenerate));
    this->Connect(m_menuOptionsOptions->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(CMainFrameBase::OnMenuOptionsOptions));
    this->Connect(m_menuHelpAbout->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(CMainFrameBase::OnMenuHelpAbout));
    this->Connect(wxID_BUTTONSEND, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(CMainFrameBase::OnButtonSend));
    this->Connect(wxID_BUTTONRECEIVE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(CMainFrameBase::OnButtonAddressBook));
    m_textCtrlAddress->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CMainFrameBase::OnKeyDown), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_MIDDLE_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_MIDDLE_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_RIGHT_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_MOTION, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_LEFT_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_MIDDLE_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_RIGHT_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_SET_FOCUS, wxFocusEventHandler(CMainFrameBase::OnSetFocusAddress), NULL, this);
    m_buttonCopy->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CMainFrameBase::OnButtonCopy), NULL, this);
    m_button91->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CMainFrameBase::OnButtonChange), NULL, this);
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_COL_BEGIN_DRAG, wxListEventHandler(CMainFrameBase::OnListColBeginDrag), NULL, this);
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CMainFrameBase::OnListItemActivatedAllTransactions), NULL, this);
    m_listCtrl->Connect(wxEVT_PAINT, wxPaintEventHandler(CMainFrameBase::OnPaintListCtrl), NULL, this);
    m_listCtrlOrdersSent->Connect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CMainFrameBase::OnListItemActivatedOrdersSent), NULL, this);
    m_listCtrlProductsSent->Connect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CMainFrameBase::OnListItemActivatedProductsSent), NULL, this);
    m_listCtrlOrdersReceived->Connect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CMainFrameBase::OnListItemActivatedOrdersReceived), NULL, this);
}

CMainFrameBase::~CMainFrameBase()
{
    // Disconnect Events
    this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CMainFrameBase::OnClose));
    this->Disconnect(wxEVT_IDLE, wxIdleEventHandler(CMainFrameBase::OnIdle));
    this->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_MIDDLE_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_MIDDLE_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_RIGHT_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_MOTION, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_LEFT_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_MIDDLE_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_RIGHT_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(CMainFrameBase::OnMouseEvents));
    this->Disconnect(wxEVT_PAINT, wxPaintEventHandler(CMainFrameBase::OnPaint));
    this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(CMainFrameBase::OnMenuFileExit));
    this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(CMainFrameBase::OnMenuOptionsGenerate));
    this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(CMainFrameBase::OnMenuOptionsOptions));
    this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(CMainFrameBase::OnMenuHelpAbout));
    this->Disconnect(wxID_BUTTONSEND, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(CMainFrameBase::OnButtonSend));
    this->Disconnect(wxID_BUTTONRECEIVE, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(CMainFrameBase::OnButtonAddressBook));
    m_textCtrlAddress->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CMainFrameBase::OnKeyDown), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_MIDDLE_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_MIDDLE_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_RIGHT_UP, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_MOTION, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_LEFT_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_MIDDLE_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_RIGHT_DCLICK, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(CMainFrameBase::OnMouseEventsAddress), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_SET_FOCUS, wxFocusEventHandler(CMainFrameBase::OnSetFocusAddress), NULL, this);
    m_buttonCopy->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CMainFrameBase::OnButtonCopy), NULL, this);
    m_button91->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CMainFrameBase::OnButtonChange), NULL, this);
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_COL_BEGIN_DRAG, wxListEventHandler(CMainFrameBase::OnListColBeginDrag), NULL, this);
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CMainFrameBase::OnListItemActivatedAllTransactions), NULL, this);
    m_listCtrl->Disconnect(wxEVT_PAINT, wxPaintEventHandler(CMainFrameBase::OnPaintListCtrl), NULL, this);
    m_listCtrlOrdersSent->Disconnect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CMainFrameBase::OnListItemActivatedOrdersSent), NULL, this);
    m_listCtrlProductsSent->Disconnect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CMainFrameBase::OnListItemActivatedProductsSent), NULL, this);
    m_listCtrlOrdersReceived->Disconnect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CMainFrameBase::OnListItemActivatedOrdersReceived), NULL, this);
}

CTxDetailsDialogBase::CTxDetailsDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer64;
    bSizer64 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer* bSizer66;
    bSizer66 = new wxBoxSizer(wxVERTICAL);

    m_htmlWin = new wxHtmlWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO);
    bSizer66->Add(m_htmlWin, 1, wxALL|wxEXPAND, 5);

    bSizer64->Add(bSizer66, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer65;
    bSizer65 = new wxBoxSizer(wxVERTICAL);

    m_buttonOK = new wxButton(this, wxID_OK, wxT("OK"), wxDefaultPosition, wxSize(85,25), 0);
    bSizer65->Add(m_buttonOK, 0, wxALL, 5);

    bSizer64->Add(bSizer65, 0, wxALIGN_RIGHT, 5);

    this->SetSizer(bSizer64);
    this->Layout();

    // Connect Events
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CTxDetailsDialogBase::OnButtonOK), NULL, this);
}

CTxDetailsDialogBase::~CTxDetailsDialogBase()
{
    // Disconnect Events
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CTxDetailsDialogBase::OnButtonOK), NULL, this);
}

COptionsDialogBase::COptionsDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer55;
    bSizer55 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer* bSizer57;
    bSizer57 = new wxBoxSizer(wxVERTICAL);


    bSizer57->Add(0, 20, 0, wxEXPAND, 5);

    m_staticText32 = new wxStaticText(this, wxID_ANY, wxT("Optional transaction fee you give to the nodes that process your transactions."), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText32->Wrap(-1);
    bSizer57->Add(m_staticText32, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxBoxSizer* bSizer56;
    bSizer56 = new wxBoxSizer(wxHORIZONTAL);

    m_staticText31 = new wxStaticText(this, wxID_ANY, wxT("Transaction fee:"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText31->Wrap(-1);
    bSizer56->Add(m_staticText31, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5);

    m_textCtrlTransactionFee = new wxTextCtrl(this, wxID_TRANSACTIONFEE, wxEmptyString, wxDefaultPosition, wxSize(70,-1), 0);
    bSizer56->Add(m_textCtrlTransactionFee, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    bSizer57->Add(bSizer56, 0, wxEXPAND, 5);

    bSizer55->Add(bSizer57, 1, wxEXPAND|wxLEFT, 5);

    wxBoxSizer* bSizer58;
    bSizer58 = new wxBoxSizer(wxHORIZONTAL);

    m_buttonOK = new wxButton(this, wxID_OK, wxT("OK"), wxDefaultPosition, wxSize(85,25), 0);
    bSizer58->Add(m_buttonOK, 0, wxALL, 5);

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonCancel->SetMinSize(wxSize(85,25));

    bSizer58->Add(m_buttonCancel, 0, wxALL, 5);

    bSizer55->Add(bSizer58, 0, wxALIGN_RIGHT, 5);

    this->SetSizer(bSizer55);
    this->Layout();

    // Connect Events
    m_textCtrlTransactionFee->Connect(wxEVT_KILL_FOCUS, wxFocusEventHandler(COptionsDialogBase::OnKillFocusTransactionFee), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(COptionsDialogBase::OnButtonOK), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(COptionsDialogBase::OnButtonCancel), NULL, this);
}

COptionsDialogBase::~COptionsDialogBase()
{
    // Disconnect Events
    m_textCtrlTransactionFee->Disconnect(wxEVT_KILL_FOCUS, wxFocusEventHandler(COptionsDialogBase::OnKillFocusTransactionFee), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(COptionsDialogBase::OnButtonOK), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(COptionsDialogBase::OnButtonCancel), NULL, this);
}

CAboutDialogBase::CAboutDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer60;
    bSizer60 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer* bSizer62;
    bSizer62 = new wxBoxSizer(wxHORIZONTAL);


    bSizer62->Add(60, 0, 0, wxEXPAND, 5);

    wxBoxSizer* bSizer63;
    bSizer63 = new wxBoxSizer(wxVERTICAL);


    bSizer63->Add(0, 50, 0, wxEXPAND, 5);

    wxBoxSizer* bSizer64;
    bSizer64 = new wxBoxSizer(wxHORIZONTAL);

    m_staticText40 = new wxStaticText(this, wxID_ANY, wxT("Bitcoin "), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText40->Wrap(-1);
    m_staticText40->SetFont(wxFont(10, 74, 90, 92, false, wxT("Tahoma")));

    bSizer64->Add(m_staticText40, 0, wxALIGN_BOTTOM|wxTOP|wxBOTTOM|wxLEFT, 5);

    m_staticTextVersion = new wxStaticText(this, wxID_ANY, wxT("version"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticTextVersion->Wrap(-1);
    m_staticTextVersion->SetFont(wxFont(10, 74, 90, 90, false, wxT("Tahoma")));

    bSizer64->Add(m_staticTextVersion, 0, wxALIGN_BOTTOM|wxTOP|wxBOTTOM|wxRIGHT, 5);

    bSizer63->Add(bSizer64, 0, wxEXPAND, 5);


    bSizer63->Add(0, 4, 0, wxEXPAND, 5);

    m_staticTextMain = new wxStaticText(this, wxID_ANY, wxT("Copyright © 2009 Satoshi Nakamoto.\n\nThis is experimental software.  Do not rely on it for actual financial transactions.\n\nDistributed under the MIT/X11 software license, see the accompanying file license.txt or http://www.opensource.org/licenses/mit-license.php.\n\nThis product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit (http://www.openssl.org/) and cryptographic software written by Eric Young (eay@cryptsoft.com)."), wxDefaultPosition, wxDefaultSize, 0);
    m_staticTextMain->Wrap(400);
    bSizer63->Add(m_staticTextMain, 0, wxALL, 5);


    bSizer63->Add(0, 0, 1, wxEXPAND, 5);

    bSizer62->Add(bSizer63, 1, wxEXPAND, 5);

    bSizer60->Add(bSizer62, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer61;
    bSizer61 = new wxBoxSizer(wxHORIZONTAL);


    bSizer61->Add(0, 0, 1, wxEXPAND, 5);

    m_buttonOK = new wxButton(this, wxID_OK, wxT("OK"), wxDefaultPosition, wxSize(85,25), 0);
    bSizer61->Add(m_buttonOK, 0, wxALL, 5);

    bSizer60->Add(bSizer61, 0, wxALIGN_RIGHT|wxEXPAND, 5);

    this->SetSizer(bSizer60);
    this->Layout();

    // Connect Events
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAboutDialogBase::OnButtonOK), NULL, this);
}

CAboutDialogBase::~CAboutDialogBase()
{
    // Disconnect Events
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAboutDialogBase::OnButtonOK), NULL, this);
}

CSendDialogBase::CSendDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer21;
    bSizer21 = new wxBoxSizer(wxVERTICAL);


    bSizer21->Add(0, 5, 0, wxEXPAND, 5);

    wxFlexGridSizer* fgSizer1;
    fgSizer1 = new wxFlexGridSizer(3, 2, 0, 0);
    fgSizer1->AddGrowableCol(1);
    fgSizer1->SetFlexibleDirection(wxBOTH);
    fgSizer1->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);


    fgSizer1->Add(0, 0, 0, wxEXPAND, 5);

    m_staticText14 = new wxStaticText(this, wxID_ANY, wxT("Enter the recipient's IP address (e.g. 123.45.6.7) for online transfer with comments and confirmation, \nor bitcoin address (e.g. 1NS17iag9jJgTHD1VXjvLCEnZuQ3rJED9L) if recipient is not online."), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText14->Wrap(-1);
    fgSizer1->Add(m_staticText14, 0, wxTOP|wxRIGHT|wxLEFT, 5);

    wxBoxSizer* bSizer47;
    bSizer47 = new wxBoxSizer(wxHORIZONTAL);

    bSizer47->SetMinSize(wxSize(70,-1));

    bSizer47->Add(0, 0, 1, wxEXPAND, 5);

    m_bitmapCheckMark = new wxStaticBitmap(this, wxID_ANY, wxICON(check), wxDefaultPosition, wxSize(16,16), 0);
    bSizer47->Add(m_bitmapCheckMark, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_staticText36 = new wxStaticText(this, wxID_ANY, wxT("Pay &To:"), wxDefaultPosition, wxSize(-1,-1), wxALIGN_RIGHT);
    m_staticText36->Wrap(-1);
    bSizer47->Add(m_staticText36, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5);

    fgSizer1->Add(bSizer47, 1, wxEXPAND|wxLEFT, 5);

    wxBoxSizer* bSizer19;
    bSizer19 = new wxBoxSizer(wxHORIZONTAL);

    m_textCtrlAddress = new wxTextCtrl(this, wxID_TEXTCTRLPAYTO, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    bSizer19->Add(m_textCtrlAddress, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    m_buttonPaste = new wxButton(this, wxID_BUTTONPASTE, wxT("&Paste"), wxDefaultPosition, wxSize(-1,-1), wxBU_EXACTFIT);
    bSizer19->Add(m_buttonPaste, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5);

    m_buttonAddress = new wxButton(this, wxID_BUTTONADDRESSBOOK, wxT(" Address &Book..."), wxDefaultPosition, wxDefaultSize, 0);
    bSizer19->Add(m_buttonAddress, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5);

    fgSizer1->Add(bSizer19, 1, wxEXPAND|wxRIGHT, 5);

    m_staticText19 = new wxStaticText(this, wxID_ANY, wxT("&Amount:"), wxDefaultPosition, wxSize(-1,-1), wxALIGN_RIGHT);
    m_staticText19->Wrap(-1);
    fgSizer1->Add(m_staticText19, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT|wxALIGN_RIGHT, 5);

    m_textCtrlAmount = new wxTextCtrl(this, wxID_TEXTCTRLAMOUNT, wxEmptyString, wxDefaultPosition, wxSize(145,-1), 0);
    m_textCtrlAmount->SetMaxLength(20);
    m_textCtrlAmount->SetFont(wxFont(wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString));

    fgSizer1->Add(m_textCtrlAmount, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    m_staticText20 = new wxStaticText(this, wxID_ANY, wxT("T&ransfer:"), wxDefaultPosition, wxSize(-1,-1), wxALIGN_RIGHT);
    m_staticText20->Wrap(-1);
    fgSizer1->Add(m_staticText20, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxTOP|wxBOTTOM|wxLEFT, 5);

    wxString m_choiceTransferTypeChoices[] = { wxT(" Standard") };
    int m_choiceTransferTypeNChoices = sizeof(m_choiceTransferTypeChoices) / sizeof(wxString);
    m_choiceTransferType = new wxChoice(this, wxID_CHOICETRANSFERTYPE, wxDefaultPosition, wxDefaultSize, m_choiceTransferTypeNChoices, m_choiceTransferTypeChoices, 0);
    m_choiceTransferType->SetSelection(0);
    fgSizer1->Add(m_choiceTransferType, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5);

    bSizer21->Add(fgSizer1, 0, wxEXPAND|wxLEFT, 5);

    wxBoxSizer* bSizer672;
    bSizer672 = new wxBoxSizer(wxHORIZONTAL);

    wxBoxSizer* bSizer681;
    bSizer681 = new wxBoxSizer(wxVERTICAL);

    m_staticTextFrom = new wxStaticText(this, wxID_ANY, wxT("&From:"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticTextFrom->Wrap(-1);
    bSizer681->Add(m_staticTextFrom, 0, wxBOTTOM|wxLEFT, 5);

    m_textCtrlFrom = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    bSizer681->Add(m_textCtrlFrom, 0, wxLEFT|wxEXPAND, 5);

    bSizer672->Add(bSizer681, 1, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5);

    bSizer21->Add(bSizer672, 0, wxEXPAND, 5);

    wxBoxSizer* bSizer67;
    bSizer67 = new wxBoxSizer(wxHORIZONTAL);

    wxBoxSizer* bSizer68;
    bSizer68 = new wxBoxSizer(wxVERTICAL);

    m_staticTextMessage = new wxStaticText(this, wxID_ANY, wxT("&Message:"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticTextMessage->Wrap(-1);
    bSizer68->Add(m_staticTextMessage, 0, wxTOP|wxBOTTOM|wxLEFT, 5);

    m_textCtrlMessage = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);
    bSizer68->Add(m_textCtrlMessage, 1, wxEXPAND|wxLEFT, 5);

    bSizer67->Add(bSizer68, 1, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5);

    bSizer21->Add(bSizer67, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer23;
    bSizer23 = new wxBoxSizer(wxHORIZONTAL);


    bSizer23->Add(0, 0, 1, wxEXPAND, 5);

    m_buttonSend = new wxButton(this, wxID_BUTTONSEND, wxT("&Send"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonSend->SetFont(wxFont(wxNORMAL_FONT->GetPointSize(), 70, 90, 90, false, wxEmptyString));
    m_buttonSend->SetMinSize(wxSize(85,25));

    bSizer23->Add(m_buttonSend, 0, wxALL, 5);

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonCancel->SetMinSize(wxSize(85,25));

    bSizer23->Add(m_buttonCancel, 0, wxALL, 5);

    bSizer21->Add(bSizer23, 0, wxEXPAND, 5);

    this->SetSizer(bSizer21);
    this->Layout();

    // Connect Events
    m_textCtrlAddress->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CSendDialogBase::OnKeyDown), NULL, this);
    m_textCtrlAddress->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(CSendDialogBase::OnTextAddress), NULL, this);
    m_buttonPaste->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendDialogBase::OnButtonPaste), NULL, this);
    m_buttonAddress->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendDialogBase::OnButtonAddressBook), NULL, this);
    m_textCtrlAmount->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CSendDialogBase::OnKeyDown), NULL, this);
    m_textCtrlAmount->Connect(wxEVT_KILL_FOCUS, wxFocusEventHandler(CSendDialogBase::OnKillFocusAmount), NULL, this);
    m_textCtrlFrom->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CSendDialogBase::OnKeyDown), NULL, this);
    m_textCtrlMessage->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CSendDialogBase::OnKeyDown), NULL, this);
    m_buttonSend->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendDialogBase::OnButtonSend), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendDialogBase::OnButtonCancel), NULL, this);
}

CSendDialogBase::~CSendDialogBase()
{
    // Disconnect Events
    m_textCtrlAddress->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CSendDialogBase::OnKeyDown), NULL, this);
    m_textCtrlAddress->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(CSendDialogBase::OnTextAddress), NULL, this);
    m_buttonPaste->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendDialogBase::OnButtonPaste), NULL, this);
    m_buttonAddress->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendDialogBase::OnButtonAddressBook), NULL, this);
    m_textCtrlAmount->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CSendDialogBase::OnKeyDown), NULL, this);
    m_textCtrlAmount->Disconnect(wxEVT_KILL_FOCUS, wxFocusEventHandler(CSendDialogBase::OnKillFocusAmount), NULL, this);
    m_textCtrlFrom->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CSendDialogBase::OnKeyDown), NULL, this);
    m_textCtrlMessage->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CSendDialogBase::OnKeyDown), NULL, this);
    m_buttonSend->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendDialogBase::OnButtonSend), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendDialogBase::OnButtonCancel), NULL, this);
}

CSendingDialogBase::CSendingDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer68;
    bSizer68 = new wxBoxSizer(wxVERTICAL);

    m_staticTextSending = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,14), 0);
    m_staticTextSending->Wrap(-1);
    bSizer68->Add(m_staticTextSending, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 8);

    m_textCtrlStatus = new wxTextCtrl(this, wxID_ANY, wxT("\n\nConnecting..."), wxDefaultPosition, wxDefaultSize, wxTE_CENTRE|wxTE_MULTILINE|wxTE_NO_VSCROLL|wxTE_READONLY|wxNO_BORDER);
    m_textCtrlStatus->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNFACE));

    bSizer68->Add(m_textCtrlStatus, 1, wxEXPAND|wxRIGHT|wxLEFT, 10);

    wxBoxSizer* bSizer69;
    bSizer69 = new wxBoxSizer(wxHORIZONTAL);


    bSizer69->Add(0, 0, 1, wxEXPAND, 5);

    m_buttonOK = new wxButton(this, wxID_ANY, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonOK->Enable(false);
    m_buttonOK->SetMinSize(wxSize(85,25));

    bSizer69->Add(m_buttonOK, 0, wxALL, 5);

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonCancel->SetMinSize(wxSize(85,25));

    bSizer69->Add(m_buttonCancel, 0, wxALL, 5);

    bSizer68->Add(bSizer69, 0, wxEXPAND, 5);

    this->SetSizer(bSizer68);
    this->Layout();

    // Connect Events
    this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CSendingDialogBase::OnClose));
    this->Connect(wxEVT_PAINT, wxPaintEventHandler(CSendingDialogBase::OnPaint));
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendingDialogBase::OnButtonOK), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendingDialogBase::OnButtonCancel), NULL, this);
}

CSendingDialogBase::~CSendingDialogBase()
{
    // Disconnect Events
    this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CSendingDialogBase::OnClose));
    this->Disconnect(wxEVT_PAINT, wxPaintEventHandler(CSendingDialogBase::OnPaint));
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendingDialogBase::OnButtonOK), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CSendingDialogBase::OnButtonCancel), NULL, this);
}

CYourAddressDialogBase::CYourAddressDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer68;
    bSizer68 = new wxBoxSizer(wxVERTICAL);


    bSizer68->Add(0, 5, 0, wxEXPAND, 5);

    m_staticText45 = new wxStaticText(this, wxID_ANY, wxT("These are your Bitcoin addresses for receiving payments.\nYou may want to give a different one to each sender so you can keep track of who is paying you."), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText45->Wrap(600);
    bSizer68->Add(m_staticText45, 0, wxALL, 5);

    m_listCtrl = new wxListCtrl(this, wxID_LISTCTRL, wxDefaultPosition, wxDefaultSize, wxLC_NO_SORT_HEADER|wxLC_REPORT|wxLC_SORT_ASCENDING);
    bSizer68->Add(m_listCtrl, 1, wxALL|wxEXPAND, 5);

    wxBoxSizer* bSizer69;
    bSizer69 = new wxBoxSizer(wxHORIZONTAL);


    bSizer69->Add(0, 0, 1, wxEXPAND, 5);

    m_buttonRename = new wxButton(this, wxID_BUTTONRENAME, wxT("&Rename..."), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonRename->SetMinSize(wxSize(85,25));

    bSizer69->Add(m_buttonRename, 0, wxALL, 5);

    m_buttonNew = new wxButton(this, wxID_BUTTONNEW, wxT("&New Address..."), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonNew->SetMinSize(wxSize(110,25));

    bSizer69->Add(m_buttonNew, 0, wxALL, 5);

    m_buttonCopy = new wxButton(this, wxID_BUTTONCOPY, wxT("&Copy to Clipboard"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonCopy->SetMinSize(wxSize(120,25));

    bSizer69->Add(m_buttonCopy, 0, wxALL, 5);

    m_buttonOK = new wxButton(this, wxID_OK, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonOK->SetMinSize(wxSize(85,25));

    bSizer69->Add(m_buttonOK, 0, wxALL, 5);

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonCancel->SetMinSize(wxSize(85,25));

    bSizer69->Add(m_buttonCancel, 0, wxALL, 5);

    bSizer68->Add(bSizer69, 0, wxEXPAND, 5);

    this->SetSizer(bSizer68);
    this->Layout();

    // Connect Events
    this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CYourAddressDialogBase::OnClose));
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_END_LABEL_EDIT, wxListEventHandler(CYourAddressDialogBase::OnListEndLabelEdit), NULL, this);
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CYourAddressDialogBase::OnListItemActivated), NULL, this);
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(CYourAddressDialogBase::OnListItemSelected), NULL, this);
    m_buttonRename->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CYourAddressDialogBase::OnButtonRename), NULL, this);
    m_buttonNew->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CYourAddressDialogBase::OnButtonNew), NULL, this);
    m_buttonCopy->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CYourAddressDialogBase::OnButtonCopy), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CYourAddressDialogBase::OnButtonOK), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CYourAddressDialogBase::OnButtonCancel), NULL, this);
}

CYourAddressDialogBase::~CYourAddressDialogBase()
{
    // Disconnect Events
    this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CYourAddressDialogBase::OnClose));
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_END_LABEL_EDIT, wxListEventHandler(CYourAddressDialogBase::OnListEndLabelEdit), NULL, this);
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CYourAddressDialogBase::OnListItemActivated), NULL, this);
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(CYourAddressDialogBase::OnListItemSelected), NULL, this);
    m_buttonRename->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CYourAddressDialogBase::OnButtonRename), NULL, this);
    m_buttonNew->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CYourAddressDialogBase::OnButtonNew), NULL, this);
    m_buttonCopy->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CYourAddressDialogBase::OnButtonCopy), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CYourAddressDialogBase::OnButtonOK), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CYourAddressDialogBase::OnButtonCancel), NULL, this);
}

CAddressBookDialogBase::CAddressBookDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer68;
    bSizer68 = new wxBoxSizer(wxVERTICAL);


    bSizer68->Add(0, 5, 0, wxEXPAND, 5);

    m_staticText55 = new wxStaticText(this, wxID_ANY, wxT("Bitcoin Address"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText55->Wrap(-1);
    m_staticText55->Hide();

    bSizer68->Add(m_staticText55, 0, wxTOP|wxRIGHT|wxLEFT, 5);

    m_listCtrl = new wxListCtrl(this, wxID_LISTCTRL, wxDefaultPosition, wxDefaultSize, wxLC_NO_SORT_HEADER|wxLC_REPORT|wxLC_SORT_ASCENDING);
    bSizer68->Add(m_listCtrl, 1, wxALL|wxEXPAND, 5);

    wxBoxSizer* bSizer69;
    bSizer69 = new wxBoxSizer(wxHORIZONTAL);


    bSizer69->Add(0, 0, 1, wxEXPAND, 5);

    m_buttonEdit = new wxButton(this, wxID_BUTTONEDIT, wxT("&Edit..."), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonEdit->SetMinSize(wxSize(85,25));

    bSizer69->Add(m_buttonEdit, 0, wxALL, 5);

    m_buttonNew = new wxButton(this, wxID_BUTTONNEW, wxT("&New Address..."), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonNew->SetMinSize(wxSize(110,25));

    bSizer69->Add(m_buttonNew, 0, wxALL, 5);

    m_buttonDelete = new wxButton(this, wxID_BUTTONDELETE, wxT("&Delete"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonDelete->SetMinSize(wxSize(85,25));

    bSizer69->Add(m_buttonDelete, 0, wxALL, 5);

    m_buttonOK = new wxButton(this, wxID_OK, wxT("OK"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonOK->SetMinSize(wxSize(85,25));

    bSizer69->Add(m_buttonOK, 0, wxALL, 5);

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonCancel->SetMinSize(wxSize(85,25));

    bSizer69->Add(m_buttonCancel, 0, wxALL, 5);

    bSizer68->Add(bSizer69, 0, wxEXPAND, 5);

    this->SetSizer(bSizer68);
    this->Layout();

    // Connect Events
    this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CAddressBookDialogBase::OnClose));
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_END_LABEL_EDIT, wxListEventHandler(CAddressBookDialogBase::OnListEndLabelEdit), NULL, this);
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CAddressBookDialogBase::OnListItemActivated), NULL, this);
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(CAddressBookDialogBase::OnListItemSelected), NULL, this);
    m_buttonEdit->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAddressBookDialogBase::OnButtonEdit), NULL, this);
    m_buttonNew->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAddressBookDialogBase::OnButtonNew), NULL, this);
    m_buttonDelete->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAddressBookDialogBase::OnButtonDelete), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAddressBookDialogBase::OnButtonOK), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAddressBookDialogBase::OnButtonCancel), NULL, this);
}

CAddressBookDialogBase::~CAddressBookDialogBase()
{
    // Disconnect Events
    this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CAddressBookDialogBase::OnClose));
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_END_LABEL_EDIT, wxListEventHandler(CAddressBookDialogBase::OnListEndLabelEdit), NULL, this);
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CAddressBookDialogBase::OnListItemActivated), NULL, this);
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(CAddressBookDialogBase::OnListItemSelected), NULL, this);
    m_buttonEdit->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAddressBookDialogBase::OnButtonEdit), NULL, this);
    m_buttonNew->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAddressBookDialogBase::OnButtonNew), NULL, this);
    m_buttonDelete->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAddressBookDialogBase::OnButtonDelete), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAddressBookDialogBase::OnButtonOK), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CAddressBookDialogBase::OnButtonCancel), NULL, this);
}

CProductsDialogBase::CProductsDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer22;
    bSizer22 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer* bSizer23;
    bSizer23 = new wxBoxSizer(wxHORIZONTAL);

    m_comboBoxCategory = new wxComboBox(this, wxID_ANY, wxT("(Any Category)"), wxDefaultPosition, wxSize(150,-1), 0, NULL, 0);
    m_comboBoxCategory->Append(wxT("(Any Category)"));
    bSizer23->Add(m_comboBoxCategory, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlSearch = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    bSizer23->Add(m_textCtrlSearch, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonSearch = new wxButton(this, wxID_ANY, wxT("&Search"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer23->Add(m_buttonSearch, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    bSizer22->Add(bSizer23, 0, wxEXPAND|wxTOP|wxBOTTOM|wxRIGHT, 5);

    m_listCtrl = new wxListCtrl(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_NO_SORT_HEADER|wxLC_REPORT);
    bSizer22->Add(m_listCtrl, 1, wxALL|wxEXPAND, 5);

    this->SetSizer(bSizer22);
    this->Layout();

    // Connect Events
    m_comboBoxCategory->Connect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(CProductsDialogBase::OnCombobox), NULL, this);
    m_textCtrlSearch->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CProductsDialogBase::OnKeyDown), NULL, this);
    m_buttonSearch->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CProductsDialogBase::OnButtonSearch), NULL, this);
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CProductsDialogBase::OnListItemActivated), NULL, this);
}

CProductsDialogBase::~CProductsDialogBase()
{
    // Disconnect Events
    m_comboBoxCategory->Disconnect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(CProductsDialogBase::OnCombobox), NULL, this);
    m_textCtrlSearch->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CProductsDialogBase::OnKeyDown), NULL, this);
    m_buttonSearch->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CProductsDialogBase::OnButtonSearch), NULL, this);
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CProductsDialogBase::OnListItemActivated), NULL, this);
}

CEditProductDialogBase::CEditProductDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
    this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));

    wxBoxSizer* bSizer20;
    bSizer20 = new wxBoxSizer(wxVERTICAL);

    m_scrolledWindow = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTAB_TRAVERSAL|wxVSCROLL);
    m_scrolledWindow->SetScrollRate(5, 5);
    m_scrolledWindow->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));

    wxBoxSizer* bSizer21;
    bSizer21 = new wxBoxSizer(wxVERTICAL);

    wxFlexGridSizer* fgSizer8;
    fgSizer8 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer8->AddGrowableCol(1);
    fgSizer8->SetFlexibleDirection(wxBOTH);
    fgSizer8->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

    m_staticText106 = new wxStaticText(m_scrolledWindow, wxID_ANY, wxT("Category"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT);
    m_staticText106->Wrap(-1);
    fgSizer8->Add(m_staticText106, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxTOP|wxBOTTOM|wxLEFT, 5);

    m_comboBoxCategory = new wxComboBox(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
    m_comboBoxCategory->SetMinSize(wxSize(180,-1));

    fgSizer8->Add(m_comboBoxCategory, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_staticText108 = new wxStaticText(m_scrolledWindow, wxID_ANY, wxT("Title"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT);
    m_staticText108->Wrap(-1);
    fgSizer8->Add(m_staticText108, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxTOP|wxBOTTOM|wxLEFT, 5);

    m_textCtrlTitle = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    fgSizer8->Add(m_textCtrlTitle, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5);

    m_staticText107 = new wxStaticText(m_scrolledWindow, wxID_ANY, wxT("Price"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT);
    m_staticText107->Wrap(-1);
    fgSizer8->Add(m_staticText107, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxTOP|wxBOTTOM|wxLEFT, 5);

    m_textCtrlPrice = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlPrice->SetMinSize(wxSize(105,-1));

    fgSizer8->Add(m_textCtrlPrice, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    bSizer21->Add(fgSizer8, 0, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5);

    m_staticText22 = new wxStaticText(m_scrolledWindow, wxID_ANY, wxT("Page 1: Description"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText22->Wrap(-1);
    bSizer21->Add(m_staticText22, 0, wxTOP|wxRIGHT|wxLEFT, 5);

    m_textCtrlDescription = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);
    m_textCtrlDescription->SetMinSize(wxSize(-1,170));

    bSizer21->Add(m_textCtrlDescription, 0, wxALL|wxEXPAND, 5);

    m_staticText23 = new wxStaticText(m_scrolledWindow, wxID_ANY, wxT("Page 2: Order Form"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText23->Wrap(-1);
    bSizer21->Add(m_staticText23, 0, wxTOP|wxRIGHT|wxLEFT, 5);

    m_textCtrlInstructions = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);
    m_textCtrlInstructions->SetMinSize(wxSize(-1,120));

    bSizer21->Add(m_textCtrlInstructions, 0, wxEXPAND|wxALL, 5);

    fgSizer5 = new wxFlexGridSizer(0, 3, 0, 0);
    fgSizer5->AddGrowableCol(1);
    fgSizer5->SetFlexibleDirection(wxBOTH);
    fgSizer5->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

    m_staticText24 = new wxStaticText(m_scrolledWindow, wxID_ANY, wxT("Label"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText24->Wrap(-1);
    fgSizer5->Add(m_staticText24, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxRIGHT|wxLEFT, 5);

    m_staticText25 = new wxStaticText(m_scrolledWindow, wxID_ANY, wxT("Comma separated list of choices, or leave blank for text field"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText25->Wrap(-1);
    fgSizer5->Add(m_staticText25, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxRIGHT|wxLEFT, 5);


    fgSizer5->Add(0, 0, 1, wxEXPAND, 5);

    m_textCtrlLabel0 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel0->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel0, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField0 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField0, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel0 = new wxButton(m_scrolledWindow, wxID_DEL0, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel0, 0, wxRIGHT|wxLEFT|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlLabel1 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel1->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField1 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField1, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel1 = new wxButton(m_scrolledWindow, wxID_DEL1, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel1, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel2 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel2->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField2 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField2, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel2 = new wxButton(m_scrolledWindow, wxID_DEL2, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel2, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel3 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel3->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField3 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField3, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel3 = new wxButton(m_scrolledWindow, wxID_DEL3, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel3, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel4 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel4->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField4 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField4, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel4 = new wxButton(m_scrolledWindow, wxID_DEL4, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel4, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel5 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel5->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField5 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField5, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel5 = new wxButton(m_scrolledWindow, wxID_DEL5, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel5, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel6 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel6->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField6 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField6, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel6 = new wxButton(m_scrolledWindow, wxID_DEL6, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel6, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel7 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel7->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField7 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField7, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel7 = new wxButton(m_scrolledWindow, wxID_DEL7, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel7, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel8 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel8->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField8 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField8, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel8 = new wxButton(m_scrolledWindow, wxID_DEL8, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel8, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel9 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel9->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField9 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField9, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel9 = new wxButton(m_scrolledWindow, wxID_DEL9, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel9, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel10 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel10->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField10 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField10, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel10 = new wxButton(m_scrolledWindow, wxID_DEL10, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel10, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel11 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel11->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField11 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField11, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel11 = new wxButton(m_scrolledWindow, wxID_DEL11, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel11, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel12 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel12->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField12 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField12, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel12 = new wxButton(m_scrolledWindow, wxID_DEL12, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel12, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel13 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel13->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField13 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField13, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel13 = new wxButton(m_scrolledWindow, wxID_DEL13, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel13, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel14 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel14->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField14 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField14, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel14 = new wxButton(m_scrolledWindow, wxID_DEL14, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel14, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel15 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel15->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField15 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField15, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel15 = new wxButton(m_scrolledWindow, wxID_DEL15, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel15, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel16 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel16->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField16 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField16, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel16 = new wxButton(m_scrolledWindow, wxID_DEL16, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel16, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel17 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel17->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel17, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField17 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField17, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel17 = new wxButton(m_scrolledWindow, wxID_DEL17, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel17, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel18 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel18->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel18, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField18 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField18, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel18 = new wxButton(m_scrolledWindow, wxID_DEL18, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel18, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    m_textCtrlLabel19 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_textCtrlLabel19->SetMinSize(wxSize(150,-1));

    fgSizer5->Add(m_textCtrlLabel19, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);

    m_textCtrlField19 = new wxTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,-1), 0);
    fgSizer5->Add(m_textCtrlField19, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);

    m_buttonDel19 = new wxButton(m_scrolledWindow, wxID_DEL19, wxT("Delete"), wxDefaultPosition, wxSize(60,20), 0);
    fgSizer5->Add(m_buttonDel19, 0, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5);

    bSizer21->Add(fgSizer5, 0, wxEXPAND, 5);

    wxBoxSizer* bSizer25;
    bSizer25 = new wxBoxSizer(wxHORIZONTAL);

    m_buttonAddField = new wxButton(m_scrolledWindow, wxID_ANY, wxT("&Add Field"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer25->Add(m_buttonAddField, 0, wxALL, 5);

    bSizer21->Add(bSizer25, 0, wxALIGN_CENTER_HORIZONTAL, 5);

    m_scrolledWindow->SetSizer(bSizer21);
    m_scrolledWindow->Layout();
    bSizer21->Fit(m_scrolledWindow);
    bSizer20->Add(m_scrolledWindow, 1, wxEXPAND|wxALL, 5);

    wxBoxSizer* bSizer26;
    bSizer26 = new wxBoxSizer(wxHORIZONTAL);

    m_buttonOK = new wxButton(this, wxID_BUTTONSEND, wxT("&Send"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonOK->SetMinSize(wxSize(85,25));

    bSizer26->Add(m_buttonOK, 0, wxALL, 5);

    m_buttonPreview = new wxButton(this, wxID_BUTTONPREVIEW, wxT("&Preview"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonPreview->SetMinSize(wxSize(85,25));

    bSizer26->Add(m_buttonPreview, 0, wxALL, 5);

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonCancel->SetMinSize(wxSize(85,25));

    bSizer26->Add(m_buttonCancel, 0, wxALL, 5);

    bSizer20->Add(bSizer26, 0, wxALIGN_RIGHT, 5);

    this->SetSizer(bSizer20);
    this->Layout();

    // Connect Events
    m_textCtrlTitle->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlPrice->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlDescription->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlInstructions->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlLabel0->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField0->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel0->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel0), NULL, this);
    m_textCtrlLabel1->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField1->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel1->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel1), NULL, this);
    m_textCtrlLabel2->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField2->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel2->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel2), NULL, this);
    m_textCtrlLabel3->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField3->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel3->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel3), NULL, this);
    m_textCtrlLabel4->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField4->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel4->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel4), NULL, this);
    m_textCtrlLabel5->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField5->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel5->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel5), NULL, this);
    m_textCtrlLabel6->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField6->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel6->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel6), NULL, this);
    m_textCtrlLabel7->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField7->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel7->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel7), NULL, this);
    m_textCtrlLabel8->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField8->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel8->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel8), NULL, this);
    m_textCtrlLabel9->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField9->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel9->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel9), NULL, this);
    m_textCtrlLabel10->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField10->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel10->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel10), NULL, this);
    m_textCtrlLabel11->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField11->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel11->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel11), NULL, this);
    m_textCtrlLabel12->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField12->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel12->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel12), NULL, this);
    m_textCtrlLabel13->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField13->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel13->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel13), NULL, this);
    m_textCtrlLabel14->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField14->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel14->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel14), NULL, this);
    m_textCtrlLabel15->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField15->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel15->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel15), NULL, this);
    m_textCtrlLabel16->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField16->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel16->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel16), NULL, this);
    m_textCtrlLabel17->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField17->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel17->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel17), NULL, this);
    m_textCtrlLabel18->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField18->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel18->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel18), NULL, this);
    m_textCtrlLabel19->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField19->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel19->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel19), NULL, this);
    m_buttonAddField->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonAddField), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonSend), NULL, this);
    m_buttonPreview->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonPreview), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonCancel), NULL, this);
}

CEditProductDialogBase::~CEditProductDialogBase()
{
    // Disconnect Events
    m_textCtrlTitle->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlPrice->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlDescription->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlInstructions->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlLabel0->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField0->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel0->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel0), NULL, this);
    m_textCtrlLabel1->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField1->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel1->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel1), NULL, this);
    m_textCtrlLabel2->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField2->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel2->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel2), NULL, this);
    m_textCtrlLabel3->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField3->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel3->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel3), NULL, this);
    m_textCtrlLabel4->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField4->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel4->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel4), NULL, this);
    m_textCtrlLabel5->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField5->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel5->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel5), NULL, this);
    m_textCtrlLabel6->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField6->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel6->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel6), NULL, this);
    m_textCtrlLabel7->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField7->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel7->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel7), NULL, this);
    m_textCtrlLabel8->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField8->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel8->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel8), NULL, this);
    m_textCtrlLabel9->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField9->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel9->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel9), NULL, this);
    m_textCtrlLabel10->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField10->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel10->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel10), NULL, this);
    m_textCtrlLabel11->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField11->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel11->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel11), NULL, this);
    m_textCtrlLabel12->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField12->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel12->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel12), NULL, this);
    m_textCtrlLabel13->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField13->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel13->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel13), NULL, this);
    m_textCtrlLabel14->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField14->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel14->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel14), NULL, this);
    m_textCtrlLabel15->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField15->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel15->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel15), NULL, this);
    m_textCtrlLabel16->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField16->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel16->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel16), NULL, this);
    m_textCtrlLabel17->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField17->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel17->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel17), NULL, this);
    m_textCtrlLabel18->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField18->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel18->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel18), NULL, this);
    m_textCtrlLabel19->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_textCtrlField19->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditProductDialogBase::OnKeyDown), NULL, this);
    m_buttonDel19->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonDel19), NULL, this);
    m_buttonAddField->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonAddField), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonSend), NULL, this);
    m_buttonPreview->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonPreview), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditProductDialogBase::OnButtonCancel), NULL, this);
}

CViewProductDialogBase::CViewProductDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
    this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));

    wxBoxSizer* bSizer20;
    bSizer20 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer* bSizer116;
    bSizer116 = new wxBoxSizer(wxHORIZONTAL);

    m_htmlWinReviews = new wxHtmlWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO);
    m_htmlWinReviews->Hide();

    bSizer116->Add(m_htmlWinReviews, 1, wxALL|wxEXPAND, 5);

    m_scrolledWindow = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxTAB_TRAVERSAL|wxVSCROLL);
    m_scrolledWindow->SetScrollRate(5, 5);
    m_scrolledWindow->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));

    wxBoxSizer* bSizer21;
    bSizer21 = new wxBoxSizer(wxVERTICAL);

    m_richTextHeading = new wxRichTextCtrl(m_scrolledWindow, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1,50), wxTE_READONLY|wxNO_BORDER);
    bSizer21->Add(m_richTextHeading, 0, wxEXPAND, 5);

    m_staticTextInstructions = new wxStaticText(m_scrolledWindow, wxID_ANY, wxT("Order Form instructions here\nmultiple lines\n1\n2\n3\n4\n5\n6"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticTextInstructions->Wrap(-1);
    bSizer21->Add(m_staticTextInstructions, 0, wxALL|wxEXPAND, 5);

    wxBoxSizer* bSizer25;
    bSizer25 = new wxBoxSizer(wxHORIZONTAL);

    m_buttonSubmitForm = new wxButton(m_scrolledWindow, wxID_BUTTONSAMPLE, wxT("&Submit"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer25->Add(m_buttonSubmitForm, 0, wxALL, 5);

    m_buttonCancelForm = new wxButton(m_scrolledWindow, wxID_CANCEL2, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer25->Add(m_buttonCancelForm, 0, wxALL, 5);

    bSizer21->Add(bSizer25, 0, wxALIGN_CENTER_HORIZONTAL, 5);

    m_scrolledWindow->SetSizer(bSizer21);
    m_scrolledWindow->Layout();
    bSizer21->Fit(m_scrolledWindow);
    bSizer116->Add(m_scrolledWindow, 1, wxEXPAND|wxALL, 5);

    bSizer20->Add(bSizer116, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer26;
    bSizer26 = new wxBoxSizer(wxHORIZONTAL);

    m_buttonBack = new wxButton(this, wxID_BUTTONBACK, wxT("< &Back  "), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonBack->Enable(false);
    m_buttonBack->SetMinSize(wxSize(85,25));

    bSizer26->Add(m_buttonBack, 0, wxALL, 5);

    m_buttonNext = new wxButton(this, wxID_BUTTONNEXT, wxT("  &Next >"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonNext->SetMinSize(wxSize(85,25));

    bSizer26->Add(m_buttonNext, 0, wxALL, 5);

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonCancel->SetMinSize(wxSize(85,25));

    bSizer26->Add(m_buttonCancel, 0, wxALL, 5);

    bSizer20->Add(bSizer26, 0, wxALIGN_RIGHT, 5);

    this->SetSizer(bSizer20);
    this->Layout();

    // Connect Events
    m_buttonSubmitForm->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewProductDialogBase::OnButtonSubmitForm), NULL, this);
    m_buttonCancelForm->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewProductDialogBase::OnButtonCancelForm), NULL, this);
    m_buttonBack->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewProductDialogBase::OnButtonBack), NULL, this);
    m_buttonNext->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewProductDialogBase::OnButtonNext), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewProductDialogBase::OnButtonCancel), NULL, this);
}

CViewProductDialogBase::~CViewProductDialogBase()
{
    // Disconnect Events
    m_buttonSubmitForm->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewProductDialogBase::OnButtonSubmitForm), NULL, this);
    m_buttonCancelForm->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewProductDialogBase::OnButtonCancelForm), NULL, this);
    m_buttonBack->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewProductDialogBase::OnButtonBack), NULL, this);
    m_buttonNext->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewProductDialogBase::OnButtonNext), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewProductDialogBase::OnButtonCancel), NULL, this);
}

CViewOrderDialogBase::CViewOrderDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
    this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));

    wxBoxSizer* bSizer20;
    bSizer20 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer* bSizer116;
    bSizer116 = new wxBoxSizer(wxHORIZONTAL);

    m_htmlWin = new wxHtmlWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO);
    bSizer116->Add(m_htmlWin, 1, wxALL|wxEXPAND, 5);

    bSizer20->Add(bSizer116, 1, wxEXPAND, 5);

    wxBoxSizer* bSizer26;
    bSizer26 = new wxBoxSizer(wxHORIZONTAL);

    m_buttonOK = new wxButton(this, wxID_OK, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonOK->SetMinSize(wxSize(85,25));

    bSizer26->Add(m_buttonOK, 0, wxALL, 5);

    bSizer20->Add(bSizer26, 0, wxALIGN_RIGHT, 5);

    this->SetSizer(bSizer20);
    this->Layout();

    // Connect Events
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewOrderDialogBase::OnButtonOK), NULL, this);
}

CViewOrderDialogBase::~CViewOrderDialogBase()
{
    // Disconnect Events
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CViewOrderDialogBase::OnButtonOK), NULL, this);
}

CEditReviewDialogBase::CEditReviewDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
    this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));

    wxBoxSizer* bSizer112;
    bSizer112 = new wxBoxSizer(wxVERTICAL);


    bSizer112->Add(0, 3, 0, 0, 5);

    m_staticTextSeller = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_staticTextSeller->Wrap(-1);
    bSizer112->Add(m_staticTextSeller, 0, wxALL|wxEXPAND, 5);


    bSizer112->Add(0, 3, 0, 0, 5);

    m_staticText110 = new wxStaticText(this, wxID_ANY, wxT("Rating"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText110->Wrap(-1);
    bSizer112->Add(m_staticText110, 0, wxTOP|wxRIGHT|wxLEFT, 5);

    wxString m_choiceStarsChoices[] = { wxT(" 1 star"), wxT(" 2 stars"), wxT(" 3 stars"), wxT(" 4 stars"), wxT(" 5 stars") };
    int m_choiceStarsNChoices = sizeof(m_choiceStarsChoices) / sizeof(wxString);
    m_choiceStars = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStarsNChoices, m_choiceStarsChoices, 0);
    m_choiceStars->SetSelection(0);
    bSizer112->Add(m_choiceStars, 0, wxALL, 5);

    m_staticText43 = new wxStaticText(this, wxID_ANY, wxT("Review"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText43->Wrap(-1);
    bSizer112->Add(m_staticText43, 0, wxTOP|wxRIGHT|wxLEFT, 5);

    m_textCtrlReview = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);
    bSizer112->Add(m_textCtrlReview, 1, wxALL|wxEXPAND, 5);

    wxBoxSizer* bSizer113;
    bSizer113 = new wxBoxSizer(wxHORIZONTAL);

    m_buttonSubmit = new wxButton(this, wxID_SUBMIT, wxT("&Submit"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonSubmit->SetMinSize(wxSize(85,25));

    bSizer113->Add(m_buttonSubmit, 0, wxALL, 5);

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonCancel->SetMinSize(wxSize(85,25));

    bSizer113->Add(m_buttonCancel, 0, wxALL, 5);

    bSizer112->Add(bSizer113, 0, wxALIGN_RIGHT, 5);

    this->SetSizer(bSizer112);
    this->Layout();

    // Connect Events
    m_textCtrlReview->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditReviewDialogBase::OnKeyDown), NULL, this);
    m_buttonSubmit->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditReviewDialogBase::OnButtonSubmit), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditReviewDialogBase::OnButtonCancel), NULL, this);
}

CEditReviewDialogBase::~CEditReviewDialogBase()
{
    // Disconnect Events
    m_textCtrlReview->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CEditReviewDialogBase::OnKeyDown), NULL, this);
    m_buttonSubmit->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditReviewDialogBase::OnButtonSubmit), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CEditReviewDialogBase::OnButtonCancel), NULL, this);
}

CPokerLobbyDialogBase::CPokerLobbyDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
    this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNFACE));

    wxBoxSizer* bSizer156;
    bSizer156 = new wxBoxSizer(wxHORIZONTAL);

    m_treeCtrl = new wxTreeCtrl(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_HAS_BUTTONS|wxTR_HIDE_ROOT|wxTR_LINES_AT_ROOT);
    m_treeCtrl->SetMinSize(wxSize(130,-1));

    bSizer156->Add(m_treeCtrl, 0, wxEXPAND|wxTOP|wxBOTTOM|wxLEFT, 5);

    wxBoxSizer* bSizer172;
    bSizer172 = new wxBoxSizer(wxVERTICAL);

    m_listCtrl = new wxListCtrl(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_NO_SORT_HEADER|wxLC_REPORT);
    bSizer172->Add(m_listCtrl, 1, wxEXPAND|wxALL, 5);

    m_buttonNewTable = new wxButton(this, wxID_OPENNEWTABLE, wxT("&Open New Table"), wxDefaultPosition, wxDefaultSize, 0);
    bSizer172->Add(m_buttonNewTable, 0, wxALL, 5);

    bSizer156->Add(bSizer172, 1, wxEXPAND, 5);

    this->SetSizer(bSizer156);
    this->Layout();

    // Connect Events
    m_treeCtrl->Connect(wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler(CPokerLobbyDialogBase::OnTreeSelChanged), NULL, this);
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CPokerLobbyDialogBase::OnListItemActivated), NULL, this);
    m_listCtrl->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(CPokerLobbyDialogBase::OnListItemSelected), NULL, this);
    m_buttonNewTable->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerLobbyDialogBase::OnButtonNewTable), NULL, this);
}

CPokerLobbyDialogBase::~CPokerLobbyDialogBase()
{
    // Disconnect Events
    m_treeCtrl->Disconnect(wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler(CPokerLobbyDialogBase::OnTreeSelChanged), NULL, this);
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_ITEM_ACTIVATED, wxListEventHandler(CPokerLobbyDialogBase::OnListItemActivated), NULL, this);
    m_listCtrl->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(CPokerLobbyDialogBase::OnListItemSelected), NULL, this);
    m_buttonNewTable->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerLobbyDialogBase::OnButtonNewTable), NULL, this);
}

CPokerDialogBase::CPokerDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer174;
    bSizer174 = new wxBoxSizer(wxVERTICAL);

    m_checkSitOut = new wxCheckBox(this, wxID_ANY, wxT("Deal Me Out"), wxDefaultPosition, wxDefaultSize, 0);

    bSizer174->Add(m_checkSitOut, 0, wxALL, 5);

    m_buttonDealHand = new wxButton(this, wxID_DEALHAND, wxT("&Deal Hand"), wxDefaultPosition, wxSize(150,25), 0);
    bSizer174->Add(m_buttonDealHand, 0, wxALL, 5);

    m_buttonFold = new wxButton(this, wxID_FOLD, wxT("&Fold"), wxDefaultPosition, wxSize(80,25), 0);
    bSizer174->Add(m_buttonFold, 0, wxALL, 5);

    m_buttonCall = new wxButton(this, wxID_CALL, wxT("&Call"), wxDefaultPosition, wxSize(80,25), 0);
    bSizer174->Add(m_buttonCall, 0, wxALL, 5);

    m_buttonRaise = new wxButton(this, wxID_RAISE, wxT("&Raise"), wxDefaultPosition, wxSize(80,25), 0);
    bSizer174->Add(m_buttonRaise, 0, wxALL, 5);

    m_buttonLeaveTable = new wxButton(this, wxID_LEAVETABLE, wxT("&Leave Table"), wxDefaultPosition, wxSize(90,25), 0);
    bSizer174->Add(m_buttonLeaveTable, 0, wxALL, 5);

    m_textDitchPlayer = new wxTextCtrl(this, wxID_DITCHPLAYER, wxEmptyString, wxDefaultPosition, wxSize(45,-1), wxTE_PROCESS_ENTER);
    bSizer174->Add(m_textDitchPlayer, 0, wxALL, 5);

    m_checkPreFold = new wxCheckBox(this, wxID_ANY, wxT("FOLD"), wxDefaultPosition, wxSize(100,-1), 0);

    bSizer174->Add(m_checkPreFold, 0, wxALL, 5);

    m_checkPreCall = new wxCheckBox(this, wxID_ANY, wxT("CALL"), wxDefaultPosition, wxSize(100,-1), 0);

    bSizer174->Add(m_checkPreCall, 0, wxALL, 5);

    m_checkPreCallAny = new wxCheckBox(this, wxID_ANY, wxT("CALL ANY"), wxDefaultPosition, wxSize(100,-1), 0);

    bSizer174->Add(m_checkPreCallAny, 0, wxALL, 5);

    m_checkPreRaise = new wxCheckBox(this, wxID_ANY, wxT("RAISE"), wxDefaultPosition, wxSize(100,-1), 0);

    bSizer174->Add(m_checkPreRaise, 0, wxALL, 5);

    m_checkPreRaiseAny = new wxCheckBox(this, wxID_ANY, wxT("RAISE ANY"), wxDefaultPosition, wxSize(100,-1), 0);

    bSizer174->Add(m_checkPreRaiseAny, 0, wxALL, 5);

    this->SetSizer(bSizer174);
    this->Layout();
    m_statusBar = this->CreateStatusBar(1, wxST_SIZEGRIP, wxID_ANY);

    // Connect Events
    this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CPokerDialogBase::OnClose));
    this->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_MIDDLE_DOWN, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_MIDDLE_UP, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_RIGHT_UP, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_MOTION, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_LEFT_DCLICK, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_MIDDLE_DCLICK, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_RIGHT_DCLICK, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Connect(wxEVT_PAINT, wxPaintEventHandler(CPokerDialogBase::OnPaint));
    this->Connect(wxEVT_SIZE, wxSizeEventHandler(CPokerDialogBase::OnSize));
    m_checkSitOut->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckSitOut), NULL, this);
    m_buttonDealHand->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnButtonDealHand), NULL, this);
    m_buttonFold->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnButtonFold), NULL, this);
    m_buttonCall->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnButtonCall), NULL, this);
    m_buttonRaise->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnButtonRaise), NULL, this);
    m_buttonLeaveTable->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnButtonLeaveTable), NULL, this);
    m_textDitchPlayer->Connect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(CPokerDialogBase::OnDitchPlayer), NULL, this);
    m_checkPreFold->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckPreFold), NULL, this);
    m_checkPreCall->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckPreCall), NULL, this);
    m_checkPreCallAny->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckPreCallAny), NULL, this);
    m_checkPreRaise->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckPreRaise), NULL, this);
    m_checkPreRaiseAny->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckPreRaiseAny), NULL, this);
}

CPokerDialogBase::~CPokerDialogBase()
{
    // Disconnect Events
    this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CPokerDialogBase::OnClose));
    this->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_MIDDLE_DOWN, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_MIDDLE_UP, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_RIGHT_UP, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_MOTION, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_LEFT_DCLICK, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_MIDDLE_DCLICK, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_RIGHT_DCLICK, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_LEAVE_WINDOW, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_ENTER_WINDOW, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(CPokerDialogBase::OnMouseEvents));
    this->Disconnect(wxEVT_PAINT, wxPaintEventHandler(CPokerDialogBase::OnPaint));
    this->Disconnect(wxEVT_SIZE, wxSizeEventHandler(CPokerDialogBase::OnSize));
    m_checkSitOut->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckSitOut), NULL, this);
    m_buttonDealHand->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnButtonDealHand), NULL, this);
    m_buttonFold->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnButtonFold), NULL, this);
    m_buttonCall->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnButtonCall), NULL, this);
    m_buttonRaise->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnButtonRaise), NULL, this);
    m_buttonLeaveTable->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnButtonLeaveTable), NULL, this);
    m_textDitchPlayer->Disconnect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(CPokerDialogBase::OnDitchPlayer), NULL, this);
    m_checkPreFold->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckPreFold), NULL, this);
    m_checkPreCall->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckPreCall), NULL, this);
    m_checkPreCallAny->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckPreCallAny), NULL, this);
    m_checkPreRaise->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckPreRaise), NULL, this);
    m_checkPreRaiseAny->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(CPokerDialogBase::OnCheckPreRaiseAny), NULL, this);
}

CGetTextFromUserDialogBase::CGetTextFromUserDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer* bSizer79;
    bSizer79 = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer* bSizer81;
    bSizer81 = new wxBoxSizer(wxVERTICAL);


    bSizer81->Add(0, 0, 1, wxEXPAND, 5);

    m_staticTextMessage1 = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_staticTextMessage1->Wrap(-1);
    bSizer81->Add(m_staticTextMessage1, 0, wxTOP|wxRIGHT|wxLEFT, 5);

    m_textCtrl1 = new wxTextCtrl(this, wxID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER);
    bSizer81->Add(m_textCtrl1, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5);

    m_staticTextMessage2 = new wxStaticText(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    m_staticTextMessage2->Wrap(-1);
    m_staticTextMessage2->Hide();

    bSizer81->Add(m_staticTextMessage2, 0, wxTOP|wxRIGHT|wxLEFT, 5);

    m_textCtrl2 = new wxTextCtrl(this, wxID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER);
    m_textCtrl2->Hide();

    bSizer81->Add(m_textCtrl2, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5);


    bSizer81->Add(0, 0, 1, wxEXPAND, 5);

    bSizer79->Add(bSizer81, 1, wxEXPAND|wxALL, 10);

    wxBoxSizer* bSizer80;
    bSizer80 = new wxBoxSizer(wxHORIZONTAL);


    bSizer80->Add(0, 0, 1, wxEXPAND, 5);

    m_buttonOK = new wxButton(this, wxID_OK, wxT("OK"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonOK->SetMinSize(wxSize(85,25));

    bSizer80->Add(m_buttonOK, 0, wxALL, 5);

    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
    m_buttonCancel->SetMinSize(wxSize(85,25));

    bSizer80->Add(m_buttonCancel, 0, wxALL, 5);

    bSizer79->Add(bSizer80, 0, wxEXPAND, 5);

    this->SetSizer(bSizer79);
    this->Layout();

    // Connect Events
    this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CGetTextFromUserDialogBase::OnClose));
    m_textCtrl1->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CGetTextFromUserDialogBase::OnKeyDown), NULL, this);
    m_textCtrl2->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(CGetTextFromUserDialogBase::OnKeyDown), NULL, this);
    m_buttonOK->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CGetTextFromUserDialogBase::OnButtonOK), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CGetTextFromUserDialogBase::OnButtonCancel), NULL, this);
}

CGetTextFromUserDialogBase::~CGetTextFromUserDialogBase()
{
    // Disconnect Events
    this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(CGetTextFromUserDialogBase::OnClose));
    m_textCtrl1->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CGetTextFromUserDialogBase::OnKeyDown), NULL, this);
    m_textCtrl2->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(CGetTextFromUserDialogBase::OnKeyDown), NULL, this);
    m_buttonOK->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CGetTextFromUserDialogBase::OnButtonOK), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CGetTextFromUserDialogBase::OnButtonCancel), NULL, this);
}
