#pragma once
#include "pch.h"

// TransverseKnitting 对话框

class CTransverseKnittingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CTransverseKnittingDlg)

public:
	CTransverseKnittingDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CTransverseKnittingDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_TRANSVERSEKNITTING };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CBitmapButton m_BitmapButtonTransverseKnittingStyle1;
	CBitmapButton m_BitmapButtonTransverseKnittingStyle2;
	CBitmapButton m_BitmapButtonTransverseKnittingStyle3;
	CBitmapButton m_BitmapButtonTransverseKnittingStyle4;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonTransverseknittingStyle1();
	afx_msg void OnBnClickedButtonTransverseknittingStyle2();
	afx_msg void OnBnClickedButtonTransverseknittingStyle3();
	afx_msg void OnBnClickedButtonTransverseknittingStyle4();

	inline void enableAllWindow() {
		m_BitmapButtonTransverseKnittingStyle1.EnableWindow(true);
		m_BitmapButtonTransverseKnittingStyle2.EnableWindow(true);
		m_BitmapButtonTransverseKnittingStyle3.EnableWindow(true);
		m_BitmapButtonTransverseKnittingStyle4.EnableWindow(true);
	}
};
