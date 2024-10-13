// CStyleSelectDlg.cpp: 实现文件
//
#include "pch.h"
//#include "stdafx.h"
#include "ClothesCAD.h"
#include "CStyleSelectDlg.h"
#include "afxdialogex.h"
#include "ClothesCADDoc.h"
#include "ClothesCADView.h"
#include "GlobalVar.h"
// CSettingParaEntityDl


// CStyleSelectDlg 对话框

IMPLEMENT_DYNAMIC(CStyleSelectDlg, CDialogEx)

CStyleSelectDlg::CStyleSelectDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_STYLESELECT, pParent)
{

}

CStyleSelectDlg::~CStyleSelectDlg()
{
}

void CStyleSelectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_COMBO_STYLESELECT, m_StyleSelect);
}


BEGIN_MESSAGE_MAP(CStyleSelectDlg, CDialogEx)
	ON_STN_CLICKED(IDC_STATIC_PIC1, &CStyleSelectDlg::OnStnClickedStaticPic1)
	ON_CBN_SELCHANGE(IDC_COMBO_STYLESELECT, &CStyleSelectDlg::OnCbnSelchangeComboStyleselect)
END_MESSAGE_MAP()


// CStyleSelectDlg 消息处理程序


//BOOL CStyleSelectDlg::OnInitDialog()
//{
//	CDialogEx::OnInitDialog();
//
//	// TODO:  在此添加额外的初始化
//	UpdateData(false);
//	m_CButtonNoErase1.SetCheck(1);
//
//	//m_colorControlSelect.EnableAutomaticButton(_T("1"), m_para.m_color);
//	//m_colorControlSelect1.SetColor(m_para.m_color);
//
//	m_StyleCombo1.AddString(_T("纵向编织"));
//	m_StyleCombo1.AddString(_T("侧向编织"));
//	m_StyleCombo1.AddString(_T("横向编织"));
//	m_StyleCombo1.AddString(_T("展开编织"));
//	m_StyleCombo1.AddString(_T("分割编织"));
//	m_StyleCombo1.AddString(_T("翻折编织"));
//	m_StyleCombo1.AddString(_T("不对称编织"));
//	m_StyleCombo1.AddString(_T("交错编织"));
//
//
//
//
//	GetDlgItem(IDC_STATIC_PIC)->GetWindowRect(&dlgRect1);
//
//	//child_longitudinalKnitting1.Create(IDD_ZHONGXIANG, this);
//	//child_SideKnitting1.Create(IDD_DIALOG_SIDEKNITTING, this);
//	//child_TransverseKnitting1.Create(IDD_DIALOG_TRANSVERSEKNITTING, this);
//
//	/*
//	CDialog child_longitudinalKnitting;
//	CDialog child_SideKnitting;
//	CDialog child_TransverseKnitting;
//
//
//#include "SideKnittingDlg.h"
//#include "TransverseKnittingDlg.h"
//#include "LongitudinalKnittingDlg.h"
//*/
//
//
//
//	return TRUE;  // return TRUE unless you set the focus to a control
//				  // 异常: OCX 属性页应返回 FALSE
//}

BOOL CStyleSelectDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UpdateData(false);

	m_StyleSelect.InsertString(0, _T("纵向编织"));  // LongitudinalKnitting
	m_StyleSelect.InsertString(1, _T("侧向编织"));  // SideKnitting
	m_StyleSelect.InsertString(2, _T("横向编织"));  // TransverseKnitting
	/*
	m_StyleSelect.AddString(_T("展开编织"));  // UnfoldKnitting
	m_StyleSelect.AddString(_T("分割编织"));  // PartitionKnitting
	m_StyleSelect.AddString(_T("翻折编织"));  // ReversKnitting
	m_StyleSelect.AddString(_T("不对称编织"));// AsymmetricKnitting
	m_StyleSelect.AddString(_T("交错编织"));  // InterKnitting
	*/


	GetDlgItem(IDC_STATIC_PIC1)->GetWindowRect(&dlgRect);

	child_longitudinalKnitting.Create(IDD_ZHONGXIANG, this);
	child_SideKnitting.Create(IDD_DIALOG_SIDEKNITTING, this);
	child_TransverseKnitting.Create(IDD_DIALOG_TRANSVERSEKNITTING, this);
	


	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CStyleSelectDlg::OnStnClickedStaticPic1()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CStyleSelectDlg::OnCbnSelchangeComboStyleselect()
{
	// TODO: 在此添加控件通知处理程序代码

		// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	int index = m_StyleSelect.GetCurSel();
	if (0 == index)
	{
		//纵
		HideAllWindow();
		child_longitudinalKnitting.MoveWindow(dlgRect);
		child_longitudinalKnitting.ShowWindow(SW_SHOW);


	}
	else if (1 == index) {
		//侧
		HideAllWindow();
		child_SideKnitting.MoveWindow(dlgRect);
		child_SideKnitting.ShowWindow(SW_SHOW);


		//child_longitudinalKnitting.ShowWindow(SW_HIDE);
		/*
		child_longitudinalKnitting.MoveWindow(dlgRect);
		child_longitudinalKnitting.ShowWindow(SW_SHOW);

		*/

	}
	else if (2 == index) {
		//横
		HideAllWindow();
		child_TransverseKnitting.MoveWindow(dlgRect);
		child_TransverseKnitting.ShowWindow(SW_SHOW);

	}


}
