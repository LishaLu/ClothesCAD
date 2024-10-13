#pragma once
#include "pch.h"

// TestImagButtonDlg 对话框

class TestImagButtonDlg : public CDialogEx
{
	DECLARE_DYNAMIC(TestImagButtonDlg)

public:
	TestImagButtonDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~TestImagButtonDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CBitmapButton BitmapButton1;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButton1();
	CBitmapButton CBitmapButton2;
};
