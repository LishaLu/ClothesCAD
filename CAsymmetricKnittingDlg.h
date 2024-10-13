#pragma once
#include "pch.h"

// CAsymmetricKnittingDlg 对话框

class CAsymmetricKnittingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CAsymmetricKnittingDlg)

public:
	CAsymmetricKnittingDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CAsymmetricKnittingDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ASYMMETRICKNITTING_STYLE1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CBitmapButton m_BitmapButtonAsymmtricKnittingStyle1;
	CBitmapButton m_BitmapButtonAsymmtricKnittingStyle2;
	CBitmapButton m_BitmapButtonAsymmtricKnittingStyle3;
	CBitmapButton m_BitmapButtonAsymmtricKnittingStyle4;
	CBitmapButton m_BitmapButtonAsymmtricKnittingStyle5;
	CBitmapButton m_BitmapButtonAsymmtricKnittingStyle6;
	CBitmapButton m_BitmapButtonAsymmtricKnittingStyle7;
	CBitmapButton m_BitmapButtonAsymmtricKnittingStyle8;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonAsymmetricknittingStyle5();
	afx_msg void OnBnClickedButtonAsymmetricknittingStyle1();
	afx_msg void OnBnClickedButtonAsymmetricknittingStyle2();
	afx_msg void OnBnClickedButtonAsymmetricknittingStyle3();
	afx_msg void OnBnClickedButtonAsymmetricknittingStyle4();
	afx_msg void OnBnClickedButtonAsymmetricknittingStyle6();
	afx_msg void OnBnClickedButtonAsymmetricknittingStyle7();
	afx_msg void OnBnClickedButtonAsymmetricknittingStyle8();
};
