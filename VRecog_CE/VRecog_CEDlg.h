// VRecog_CEDlg.h : header file
//

#pragma once
#include "afxwin.h"

// CVRecog_CEDlg dialog
class CVRecog_CEDlg : public CDialog
{
// Construction
public:
	CVRecog_CEDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_VRECOG_CE_DIALOG };


	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
#if defined(_DEVICE_RESOLUTION_AWARE) && !defined(WIN32_PLATFORM_WFSP)
	afx_msg void OnSize(UINT /*nType*/, int /*cx*/, int /*cy*/);
#endif
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	CEdit m_Edit1;
	void SetOutput(LPWSTR);
};

extern CVRecog_CEDlg *cDlg;