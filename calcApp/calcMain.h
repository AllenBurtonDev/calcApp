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

	void OnClearClicked(wxCommandEvent& evt);
	void OnModClicked(wxCommandEvent& evt);
	void OnBinClicked(wxCommandEvent& evt);
	void OnHexClicked(wxCommandEvent& evt);
	void On7Clicked(wxCommandEvent& evt);
	void On8Clicked(wxCommandEvent& evt);
	void On9Clicked(wxCommandEvent& evt);
	void OnDivClicked(wxCommandEvent& evt);
	void On4Clicked(wxCommandEvent& evt);
	void On5Clicked(wxCommandEvent& evt);
	void On6Clicked(wxCommandEvent& evt);
	void OnMultClicked(wxCommandEvent& evt);
	void On1Clicked(wxCommandEvent& evt);
	void On2Clicked(wxCommandEvent& evt);
	void On3Clicked(wxCommandEvent& evt);
	void OnMinusClicked(wxCommandEvent& evt);
	void On0Clicked(wxCommandEvent& evt);
	void OnDeciClicked(wxCommandEvent& evt);
	void OnEqualClicked(wxCommandEvent& evt);
	void OnPlusClicked(wxCommandEvent& evt);


	wxDECLARE_EVENT_TABLE();
};

