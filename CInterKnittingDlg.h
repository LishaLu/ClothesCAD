#pragma once
#include "pch.h"

// CInterKnittingDlg 对话框

class CInterKnittingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CInterKnittingDlg)

public:
	CInterKnittingDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CInterKnittingDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_INTERKNITTING_STYLE1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CBitmapButton m_BitmapButtonInterKnittingStyle1;
	CBitmapButton m_BitmapButtonInterKnittingStyle2;
	CBitmapButton m_BitmapButtonInterKnittingStyle3;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonInterknittingStyle1();
	afx_msg void OnBnClickedButtonInterknittingStyle2();
	afx_msg void OnBnClickedButtonInterknittingStyle3();
};
