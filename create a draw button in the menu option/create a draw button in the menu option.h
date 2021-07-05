
// create a draw button in the menu option.h : main header file for the create a draw button in the menu option application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CcreateadrawbuttoninthemenuoptionApp:
// See create a draw button in the menu option.cpp for the implementation of this class
//

class CcreateadrawbuttoninthemenuoptionApp : public CWinAppEx
{
public:
	CcreateadrawbuttoninthemenuoptionApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CcreateadrawbuttoninthemenuoptionApp theApp;
