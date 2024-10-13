#pragma once
#include "pch.h"


// CReversKnittingDlg 对话框

class CReversKnittingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CReversKnittingDlg)

public:
	CReversKnittingDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CReversKnittingDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_REVERSKNITTING_STYLE1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:

	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonReversknittingStyle1();
	afx_msg void OnBnClickedButtonReversknittingStyle2();
	afx_msg void OnBnClickedButtonReversknittingStyle3();
	afx_msg void OnBnClickedButtonReversknittingStyle4();
	CBitmapButton m_BitmapButtonReversKnittingStyle1;
	CBitmapButton m_BitmapButtonReversKnittingStyle2;
	CBitmapButton m_BitmapButtonReversKnittingStyle3;
	CBitmapButton m_BitmapButtonReversKnittingStyle4;
};
