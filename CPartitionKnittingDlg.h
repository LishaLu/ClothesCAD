#pragma once
#include "pch.h"

// CPartitionKnittingDlg 对话框

class CPartitionKnittingDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CPartitionKnittingDlg)

public:
	CPartitionKnittingDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CPartitionKnittingDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_PARTITIONKNITTING };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CBitmapButton m_BitmapButtonPartitionKnittingStyle1;
	CBitmapButton m_BitmapButtonPartitionKnittingStyle2;
	CBitmapButton m_BitmapButtonPartitionKnittingStyle3;
	CBitmapButton m_BitmapButtonPartitionKnittingStyle4;
	afx_msg void OnBnClickedButtonPartitionknittingStyle1();
	afx_msg void OnBnClickedButtonPartitionknittingStyle2();
	afx_msg void OnBnClickedButtonPartitionknittingStyle3();
	afx_msg void OnBnClickedButtonPartitionknittingStyle4();
	virtual BOOL OnInitDialog();
};
