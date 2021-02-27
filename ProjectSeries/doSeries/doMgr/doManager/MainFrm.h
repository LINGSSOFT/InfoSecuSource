// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////
#include "./Lib/TrayIcon.h"						// CTrayIcon
#define	 WM_ICON_NOTIFY		WM_USER+10		// User Defined Message CTrayIcon

#if !defined(AFX_MAINFRM_H__2DF91E05_DBE2_43EA_A51B_CEE49A095890__INCLUDED_)
#define AFX_MAINFRM_H__2DF91E05_DBE2_43EA_A51B_CEE49A095890__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMainFrame : public CFrameWnd
{
	
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Attributes
public:
	CTrayIcon m_TrayIcon;					// Member Variable

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void ActivateFrame(int nCmdShow = -1);
	//}}AFX_VIRTUAL

// Implementation
public:
	void WriteWindowPlacement(WINDOWPLACEMENT *pwp);
	BOOL ReadWindowPlacement(WINDOWPLACEMENT *pwp);
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CStatusBar  m_wndStatusBar;
	CToolBar    m_wndToolBar;

// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnClose();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnTrayShow();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
	afx_msg LONG OnTrayNotification(UINT wParam, LONG lParam);					// CTrayIcon Message Handler
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__2DF91E05_DBE2_43EA_A51B_CEE49A095890__INCLUDED_)
