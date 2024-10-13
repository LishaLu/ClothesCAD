#pragma once
#include"pch.h"
#include"CLongitudinalKnittingDlg.h"
#include"CSideKnittingDlg.h"
#include"CTransverseKnittingDlg.h"
#include"CUnfoldKnittingDlg.h"
#include"CPartitionKnittingDlg.h"
#include"CReversKnittingDlg.h"
#include"CAsymmetricKnittingDlg.h"
#include"CInterKnittingDlg.h"

// CStyleSelectDlg 对话框

class CStyleSelectDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CStyleSelectDlg)

public:
	CStyleSelectDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CStyleSelectDlg();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_STYLESELECT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();


public:
	CRect dlgRect;
	CLongitudinalKnittingDlg child_longitudinalKnitting;
	CSideKnittingDlg child_SideKnitting;
	CTransverseKnittingDlg child_TransverseKnitting;
	CUnfoldKnittingDlg child_UnfoldKnittingDlg;
	CPartitionKnittingDlg child_PartitionKnittingDlg;
	CReversKnittingDlg child_ReversKnittingDlg;
	CAsymmetricKnittingDlg child_AsymmetricKnittingDlg;
	CInterKnittingDlg child_InterKnittingDlg;




	CComboBox m_StyleSelect;
	afx_msg void OnStnClickedStaticPic1();
	afx_msg void OnCbnSelchangeComboStyleselect();

	void HideAllWindow() {
		child_longitudinalKnitting.ShowWindow(SW_HIDE);
		child_TransverseKnitting.ShowWindow(SW_HIDE);
		child_SideKnitting.ShowWindow(SW_HIDE);
	}
};

