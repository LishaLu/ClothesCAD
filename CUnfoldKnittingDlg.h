#pragma once
#include "pch.h"

// CUnfoldKnittingDlg 对话框

class CUnfoldKnittingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CUnfoldKnittingDlg)

public:
	CUnfoldKnittingDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CUnfoldKnittingDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_UNFOLDKNITTING };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CBitmapButton m_BitmapButtonUnfoldKnittingStyle1;
	CBitmapButton m_BitmapButtonUnfoldKnittingStyle2;
	CBitmapButton m_BitmapButtonUnfoldKnittingStyle3;
	CBitmapButton m_BitmapButtonUnfoldKnittingStyle4;
	CBitmapButton m_BitmapButtonUnfoldKnittingStyle5;
	CBitmapButton m_BitmapButtonUnfoldKnittingStyle6;
	CBitmapButton m_BitmapButtonUnfoldKnittingStyle7;
	CBitmapButton m_BitmapButtonUnfoldKnittingStyle8;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonUnfoldkinttingStyle1();
	afx_msg void OnBnClickedButtonUnfoldkinttingStyle2();
	afx_msg void OnBnClickedButtonUnfoldkinttingStyle3();
	afx_msg void OnBnClickedButtonUnfoldkinttingStyle4();
	afx_msg void OnBnClickedButton();
	afx_msg void OnBnClickedButtonUnfoldkinttingStyle6();
	afx_msg void OnBnClickedButtonUnfoldkinttingStyle7();
	afx_msg void OnBnClickedButtonUnfoldkinttingStyle8();
};
