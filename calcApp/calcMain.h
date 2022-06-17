#pragma once
#include "wx/wx.h"

class calcMain : public wxFrame
{
public:
	calcMain();
	~calcMain();

public:
	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxButton* m_btn3 = nullptr;
	wxButton* m_btn4 = nullptr;
	wxButton* m_btn5 = nullptr;
	wxButton* m_btn6 = nullptr;
	wxButton* m_btn7 = nullptr;
	wxButton* m_btn8 = nullptr;
	wxButton* m_btn9 = nullptr;
	wxButton* m_btn10 = nullptr;
	wxButton* m_btn11 = nullptr;
	wxButton* m_btn12 = nullptr;
	wxButton* m_btn13 = nullptr;
	wxButton* m_btn14 = nullptr;
	wxButton* m_btn15 = nullptr;
	wxButton* m_btn16 = nullptr;
	wxButton* m_btn17 = nullptr;
	wxButton* m_btn18 = nullptr;
	wxButton* m_btn19 = nullptr;
	wxButton* m_btn20 = nullptr;

	wxTextCtrl* m_txt1 = nullptr;

	void OnButton1Clicked(wxCommandEvent& evt);
	void OnButton2Clicked(wxCommandEvent& evt);
	void OnButton3Clicked(wxCommandEvent& evt);
	void OnButton4Clicked(wxCommandEvent& evt);
	void OnButton5Clicked(wxCommandEvent& evt);
	void OnButton6Clicked(wxCommandEvent& evt);
	void OnButton7Clicked(wxCommandEvent& evt);
	void OnButton8Clicked(wxCommandEvent& evt);
	void OnButton9Clicked(wxCommandEvent& evt);
	void OnButton10Clicked(wxCommandEvent& evt);
	void OnButton11Clicked(wxCommandEvent& evt);
	void OnButton12Clicked(wxCommandEvent& evt);
	void OnButton13Clicked(wxCommandEvent& evt);
	void OnButton14Clicked(wxCommandEvent& evt);
	void OnButton15Clicked(wxCommandEvent& evt);
	void OnButton16Clicked(wxCommandEvent& evt);
	void OnButton17Clicked(wxCommandEvent& evt);
	void OnButton18Clicked(wxCommandEvent& evt);
	void OnButton19Clicked(wxCommandEvent& evt);
	void OnButton20Clicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

