///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ui.h"

///////////////////////////////////////////////////////////////////////////

AppFrameBase::AppFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_menubar1 = new wxMenuBar( 0 );
	m_menu_file = new wxMenu();
	wxMenuItem* m_open;
	m_open = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Open") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu_file->Append( m_open );

	wxMenuItem* m_exit;
	m_exit = new wxMenuItem( m_menu_file, wxID_ANY, wxString( _("Exit") ) , wxEmptyString, wxITEM_NORMAL );
	#ifdef __WXMSW__
	m_exit->SetBitmaps( wxBitmap( wxT("bitmap1.bmp"), wxBITMAP_TYPE_ANY ) );
	#elif (defined( __WXGTK__ ) || defined( __WXOSX__ ))
	m_exit->SetBitmap( wxBitmap( wxT("bitmap1.bmp"), wxBITMAP_TYPE_ANY ) );
	#endif
	m_menu_file->Append( m_exit );

	m_menubar1->Append( m_menu_file, _("File") );

	m_menu_help = new wxMenu();
	m_menubar1->Append( m_menu_help, _("MyMenu") );

	this->SetMenuBar( m_menubar1 );

	m_statusBar1 = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );
	m_menu1 = new wxMenu();
	this->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( AppFrameBase::AppFrameBaseOnContextMenu ), NULL, this );


	this->Centre( wxBOTH );

	// Connect Events
	m_menu_file->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( AppFrameBase::OnExit ), this, m_exit->GetId());
}

AppFrameBase::~AppFrameBase()
{
	delete m_menu1;
}
