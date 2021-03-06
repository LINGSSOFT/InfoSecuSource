// DoManager.h : main header file for the DOMANAGER application
//

#if !defined(AFX_DOMANAGER_H__9CE63C30_6AE0_4101_9E61_4903229B5279__INCLUDED_)
#define AFX_DOMANAGER_H__9CE63C30_6AE0_4101_9E61_4903229B5279__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CDoManagerApp:
// See DoManager.cpp for the implementation of this class
//

class CDoManagerApp : public CWinApp
{
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	CDoManagerApp();
	int m_bCheck;				// Always Top Menu
	int m_bAuto;				// Auto Start

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDoManagerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CDoManagerApp)
	afx_msg void OnAppAbout();
	afx_msg void OnViewTop();
	afx_msg void OnUpdateViewTop(CCmdUI* pCmdUI);
	afx_msg void OnAppAuto();
	afx_msg void OnUpdateAppAuto(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DOMANAGER_H__9CE63C30_6AE0_4101_9E61_4903229B5279__INCLUDED_)
