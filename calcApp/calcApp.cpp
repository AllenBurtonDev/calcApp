#include "calcApp.h"

wxIMPLEMENT_APP(calcApp);


calcApp::calcApp()
{

}

calcApp::~calcApp()
{

}

bool calcApp::OnInit()
{
	m_frame1 = new calcMain();
	m_frame1->Show();

	return true;
}