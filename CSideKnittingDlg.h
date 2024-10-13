#pragma once
#include "pch.h"

// SideKnittingDlg 对话框

class CSideKnittingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSideKnittingDlg)

public:
	CSideKnittingDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSideKnittingDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SIDEKNITTING };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CBitmapButton m_BitmapButtonSideKnittingStyle1;
	CBitmapButton m_BitmapButtonSideKnittingStyle2;
	CBitmapButton m_BitmapButtonSideKnittingStyle3;
	CBitmapButton m_BitmapButtonSideKnittingStyle4;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonSideknittingStyle1();
	afx_msg void OnBnClickedButtonSideknittingStyle2();
	afx_msg void OnBnClickedButtonSideknittingStyle3();
	afx_msg void OnBnClickedButtonSideknittingStyle4();
	afx_msg void OnBnClickedButtonSideknittingStyle();
	CBitmapButton m_BitmapButtonSideKnittingStyle;

	inline void enableAllWindow() {
		m_BitmapButtonSideKnittingStyle1.EnableWindow(true);
		m_BitmapButtonSideKnittingStyle2.EnableWindow(true);
		m_BitmapButtonSideKnittingStyle3.EnableWindow(true);
		m_BitmapButtonSideKnittingStyle4.EnableWindow(true);
	}


	
	afx_msg void OnBnClickedButtonSide();
};
