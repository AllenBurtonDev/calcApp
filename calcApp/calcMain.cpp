#include "calcMain.h"



calcMain::calcMain() : wxFrame(nullptr, wxID_ANY, "Allen's Calculator App", wxPoint(600, 300), wxSize(330, 500))
{
	m_btn1 = new wxButton(this, wxID_ANY, "Clear", wxPoint(10, 70), wxSize(50, 50));
	m_btn2 = new wxButton(this, wxID_ANY, "%", wxPoint(90, 70), wxSize(50, 50));
	m_btn3 = new wxButton(this, wxID_ANY, "(", wxPoint(170, 70), wxSize(50, 50));
	m_btn4 = new wxButton(this, wxID_ANY, ")", wxPoint(250, 70), wxSize(50, 50));
	m_btn5 = new wxButton(this, wxID_ANY, "7", wxPoint(10, 150), wxSize(50, 50));
	m_btn6 = new wxButton(this, wxID_ANY, "8", wxPoint(90, 150), wxSize(50, 50));
	m_btn7 = new wxButton(this, wxID_ANY, "9", wxPoint(170, 150), wxSize(50, 50));
	m_btn8 = new wxButton(this, wxID_ANY, "/", wxPoint(250, 150), wxSize(50, 50));
	m_btn9 = new wxButton(this, wxID_ANY, "4", wxPoint(10, 230), wxSize(50, 50));
	m_btn10 = new wxButton(this, wxID_ANY, "5", wxPoint(90, 230), wxSize(50, 50));
	m_btn11 = new wxButton(this, wxID_ANY, "6", wxPoint(170, 230), wxSize(50, 50));
	m_btn12 = new wxButton(this, wxID_ANY, "x", wxPoint(250, 230), wxSize(50, 50));
	m_btn13 = new wxButton(this, wxID_ANY, "1", wxPoint(10, 310), wxSize(50, 50));
	m_btn14 = new wxButton(this, wxID_ANY, "2", wxPoint(90, 310), wxSize(50, 50));
	m_btn15 = new wxButton(this, wxID_ANY, "3", wxPoint(170, 310), wxSize(50, 50));
	m_btn16 = new wxButton(this, wxID_ANY, "-", wxPoint(250, 310), wxSize(50, 50));
	m_btn17 = new wxButton(this, wxID_ANY, "0", wxPoint(10, 390), wxSize(50, 50));
	m_btn18 = new wxButton(this, wxID_ANY, ".", wxPoint(90, 390), wxSize(50, 50));
	m_btn19 = new wxButton(this, wxID_ANY, "=", wxPoint(170, 390), wxSize(50, 50));
	m_btn20 = new wxButton(this, wxID_ANY, "+", wxPoint(250, 390), wxSize(50, 50));

	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 10), wxSize(290, 50));
}

calcMain::~calcMain()
{

}