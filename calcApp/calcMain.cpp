#include "calcMain.h"

wxBEGIN_EVENT_TABLE(calcMain, wxFrame)
	EVT_BUTTON(10001, OnButton1Clicked)
	EVT_BUTTON(10002, OnButton2Clicked)
	EVT_BUTTON(10003, OnButton3Clicked)
	EVT_BUTTON(10004, OnButton4Clicked)
	EVT_BUTTON(10005, OnButton5Clicked)
	EVT_BUTTON(10006, OnButton6Clicked)
	EVT_BUTTON(10007, OnButton7Clicked)
	EVT_BUTTON(10008, OnButton8Clicked)
	EVT_BUTTON(10009, OnButton9Clicked)
	EVT_BUTTON(10010, OnButton10Clicked)
	EVT_BUTTON(10011, OnButton11Clicked)
	EVT_BUTTON(10012, OnButton12Clicked)
	EVT_BUTTON(10013, OnButton13Clicked)
	EVT_BUTTON(10014, OnButton14Clicked)
	EVT_BUTTON(10015, OnButton15Clicked)
	EVT_BUTTON(10016, OnButton16Clicked)
	EVT_BUTTON(10017, OnButton17Clicked)
	EVT_BUTTON(10018, OnButton18Clicked)
	EVT_BUTTON(10019, OnButton19Clicked)
	EVT_BUTTON(10020, OnButton20Clicked)
wxEND_EVENT_TABLE()


calcMain::calcMain() : wxFrame(nullptr, wxID_ANY, "Allen's Calculator App", wxPoint(600, 300), wxSize(330, 500))
{
	m_btn1 = new wxButton(this, 10001, " C ", wxPoint(10, 70), wxSize(50, 50));
	m_btn2 = new wxButton(this, 10002, " MOD ", wxPoint(90, 70), wxSize(50, 50));
	m_btn3 = new wxButton(this, 10003, " BIN ", wxPoint(170, 70), wxSize(50, 50));
	m_btn4 = new wxButton(this, 10004, " HEX ", wxPoint(250, 70), wxSize(50, 50));
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
	m_btn18 = new wxButton(this, 10018, " . ", wxPoint(90, 390), wxSize(50, 50));
	m_btn19 = new wxButton(this, 10019, " = ", wxPoint(170, 390), wxSize(50, 50));
	m_btn20 = new wxButton(this, 10020, " + ", wxPoint(250, 390), wxSize(50, 50));

	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(290, 50));
}

calcMain::~calcMain()
{
	
}

void calcMain::OnButton1Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn1->GetLabel());
	evt.Skip();
}

void calcMain::OnButton2Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn2->GetLabel());
	evt.Skip();
}

void calcMain::OnButton3Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn3->GetLabel());
	evt.Skip();
}

void calcMain::OnButton4Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn4->GetLabel());
	evt.Skip();
}

void calcMain::OnButton5Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn5->GetLabel());
	evt.Skip();
}

void calcMain::OnButton6Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn6->GetLabel());
	evt.Skip();
}

void calcMain::OnButton7Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn7->GetLabel());
	evt.Skip();
}

void calcMain::OnButton8Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn8->GetLabel());
	evt.Skip();
}

void calcMain::OnButton9Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn9->GetLabel());
	evt.Skip();
}

void calcMain::OnButton10Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn10->GetLabel());
	evt.Skip();
}

void calcMain::OnButton11Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn11->GetLabel());
	evt.Skip();
}

void calcMain::OnButton12Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn12->GetLabel());
	evt.Skip();
}

void calcMain::OnButton13Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn13->GetLabel());
	evt.Skip();
}

void calcMain::OnButton14Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn14->GetLabel());
	evt.Skip();
}

void calcMain::OnButton15Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn15->GetLabel());
	evt.Skip();
}

void calcMain::OnButton16Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn16->GetLabel());
	evt.Skip();
}

void calcMain::OnButton17Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn17->GetLabel());
	evt.Skip();
}

void calcMain::OnButton18Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn18->GetLabel());
	evt.Skip();
}

void calcMain::OnButton19Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn19->GetLabel());
	evt.Skip();
}

void calcMain::OnButton20Clicked(wxCommandEvent& evt)
{
	m_txt1->AppendText(m_btn20->GetLabel());
	evt.Skip();
}