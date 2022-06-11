#pragma once

#include "wx/wx.h"
#include "calcMain.h"

class calcApp : public wxApp
{
public:
	calcApp();
	~calcApp();

private:
	calcMain* m_frame1 = nullptr;

public:
	virtual bool OnInit();
};

