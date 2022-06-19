#include "calcMain.h"

wxBEGIN_EVENT_TABLE(calcMain, wxFrame)
	EVT_BUTTON(10001, OnClearClicked)
	EVT_BUTTON(10002, OnModClicked)
	EVT_BUTTON(10003, OnBinClicked)
	EVT_BUTTON(10004, OnHexClicked)
	EVT_BUTTON(10005, On7Clicked)
	EVT_BUTTON(10006, On8Clicked)
	EVT_BUTTON(10007, On9Clicked)
	EVT_BUTTON(10008, OnDivClicked)
	EVT_BUTTON(10009, On4Clicked)
	EVT_BUTTON(10010, On5Clicked)
	EVT_BUTTON(10011, On6Clicked)
	EVT_BUTTON(10012, OnMultClicked)
	EVT_BUTTON(10013, On1Clicked)
	EVT_BUTTON(10014, On2Clicked)
	EVT_BUTTON(10015, On3Clicked)
	EVT_BUTTON(10016, OnMinusClicked)
	EVT_BUTTON(10017, On0Clicked)
	EVT_BUTTON(10018, OnDeciClicked)
	EVT_BUTTON(10019, OnEqualClicked)
	EVT_BUTTON(10020, OnPlusClicked)
wxEND_EVENT_TABLE()

calcMain::calcMain() : wxFrame(nullptr, wxID_ANY, "Allen's Calculator App", wxPoint(600, 300), wxSize(330, 500))
{
	m_btn1 = new wxButton(this, 10001, "C", wxPoint(10, 70), wxSize(50, 50));
	m_btn2 = new wxButton(this, 10002, "MOD", wxPoint(90, 70), wxSize(50, 50));
	m_btn3 = new wxButton(this, 10003, "BIN", wxPoint(170, 70), wxSize(50, 50));
	m_btn4 = new wxButton(this, 10004, "HEX", wxPoint(250, 70), wxSize(50, 50));
	m_btn5 = new wxButton(this, 10005, " 7 ", wxPoint(10, 150), wxSize(50, 50));
	m_btn6 = new wxButton(this, 10006, " 8 ", wxPoint(90, 150), wxSize(50, 50));
	m_btn7 = new wxButton(this, 10007, " 9 ", wxPoint(170, 150), wxSize(50, 50));
	m_btn8 = new wxButton(this, 10008, " / ", wxPoint(250, 150), wxSize(50, 50));
	m_btn9 = new wxButton(this, 10009, " 4 ", wxPoint(10, 230), wxSize(50, 50));
	m_btn10 = new wxButton(this, 10010, " 5 ", wxPoint(90, 230), wxSize(50, 50));
	m_btn11 = new wxButton(this, 10011, " 6 ", wxPoint(170, 230), wxSize(50, 50));
	m_btn12 = new wxButton(this, 10012, " * ", wxPoint(250, 230), wxSize(50, 50));
	m_btn13 = new wxButton(this, 10013, " 1 ", wxPoint(10, 310), wxSize(50, 50));
	m_btn14 = new wxButton(this, 10014, " 2 ", wxPoint(90, 310), wxSize(50, 50));
	m_btn15 = new wxButton(this, 10015, " 3 ", wxPoint(170, 310), wxSize(50, 50));
	m_btn16 = new wxButton(this, 10016, " - ", wxPoint(250, 310), wxSize(50, 50));
	m_btn17 = new wxButton(this, 10017, " 0 ", wxPoint(10, 390), wxSize(50, 50));
	m_btn18 = new wxButton(this, 10018, ".", wxPoint(90, 390), wxSize(50, 50));
	m_btn19 = new wxButton(this, 10019, "=", wxPoint(170, 390), wxSize(50, 50));
	m_btn20 = new wxButton(this, 10020, " + ", wxPoint(250, 390), wxSize(50, 50));

	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(290, 50));
}


calcMain::~calcMain()
{

}

void calcMain::OnClearClicked(wxCommandEvent& evt)
{
	m_txt1->Clear();
}
void calcMain::OnModClicked(wxCommandEvent& evt)
{

}
void calcMain::OnBinClicked(wxCommandEvent& evt)
{

}
void calcMain::OnHexClicked(wxCommandEvent& evt)
{
	
}
void calcMain::On7Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn5->GetLabel());
}
void calcMain::On8Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn6->GetLabel());
}
void calcMain::On9Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn7->GetLabel());
}
void calcMain::OnDivClicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn8->GetLabel());
}
void calcMain::On4Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn9->GetLabel());
}
void calcMain::On5Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn10->GetLabel());
}
void calcMain::On6Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn11->GetLabel());
}
void calcMain::OnMultClicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn12->GetLabel());
}
void calcMain::On1Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn13->GetLabel());
}
void calcMain::On2Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn14->GetLabel());
}
void calcMain::On3Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn15->GetLabel());
}
void calcMain::OnMinusClicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn16->GetLabel());
}
void calcMain::On0Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn17->GetLabel());
}
void calcMain::OnDeciClicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn18->GetLabel());
}
void calcMain::OnEqualClicked(wxCommandEvent& evt)
{

}
void calcMain::OnPlusClicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn20->GetLabel());
}