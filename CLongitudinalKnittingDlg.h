#pragma once
#include "pch.h"


// LongitudinalKnitting 对话框

class CLongitudinalKnittingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CLongitudinalKnittingDlg)

public:
	CLongitudinalKnittingDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CLongitudinalKnittingDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ZHONGXIANG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CBitmapButton m_BitmapButtonLongitudinalKnittingStyle1;
	CBitmapButton m_BitmapButtonLongitudinalKnittingStyle2;
	CBitmapButton m_BitmapButtonLongitudinalKnittingStyle3;
	CBitmapButton m_BitmapButtonLongitudinalKnittingStyle4;
	CBitmapButton m_BitmapButtonLongitudinalKnittingStyle5;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonLkstyle1();
	afx_msg void OnBnClickedButtonLkstyle2();
	afx_msg void OnBnClickedButtonLkstyle3();
	afx_msg void OnBnClickedButtonLkstyle4();
	afx_msg void OnBnClickedButtonLkstyle5();

	inline void enableAllWindow() {
		m_BitmapButtonLongitudinalKnittingStyle1.EnableWindow(true);
		m_BitmapButtonLongitudinalKnittingStyle2.EnableWindow(true);
		m_BitmapButtonLongitudinalKnittingStyle3.EnableWindow(true);
		m_BitmapButtonLongitudinalKnittingStyle4.EnableWindow(true);
		m_BitmapButtonLongitudinalKnittingStyle5.EnableWindow(true);
	}
};
