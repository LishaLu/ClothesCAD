// CReversKnittingDlg.cpp: 实现文件
//
#include "pch.h"
//#include "stdafx.h"
#include "ClothesCAD.h"
#include "CReversKnittingDlg.h"
#include "afxdialogex.h"


// CReversKnittingDlg 对话框

IMPLEMENT_DYNAMIC(CReversKnittingDlg, CDialogEx)

CReversKnittingDlg::CReversKnittingDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_REVERSKNITTING_STYLE1, pParent)
{

}

CReversKnittingDlg::~CReversKnittingDlg()
{
}

void CReversKnittingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_BUTTON_REVERSKNITTING_STYLE1, m_BitmapButtonReversKnittingStyle1);
	DDX_Control(pDX, IDC_BUTTON_REVERSKNITTING_STYLE2, m_BitmapButtonReversKnittingStyle2);
	DDX_Control(pDX, IDC_BUTTON_REVERSKNITTING_STYLE3, m_BitmapButtonReversKnittingStyle3);
	DDX_Control(pDX, IDC_BUTTON_REVERSKNITTING_STYLE4, m_BitmapButtonReversKnittingStyle4);
}


BEGIN_MESSAGE_MAP(CReversKnittingDlg, CDialogEx)
	
	ON_BN_CLICKED(IDC_BUTTON_REVERSKNITTING_STYLE1, &CReversKnittingDlg::OnBnClickedButtonReversknittingStyle1)
	ON_BN_CLICKED(IDC_BUTTON_REVERSKNITTING_STYLE2, &CReversKnittingDlg::OnBnClickedButtonReversknittingStyle2)
	ON_BN_CLICKED(IDC_BUTTON_REVERSKNITTING_STYLE3, &CReversKnittingDlg::OnBnClickedButtonReversknittingStyle3)
	ON_BN_CLICKED(IDC_BUTTON_REVERSKNITTING_STYLE4, &CReversKnittingDlg::OnBnClickedButtonReversknittingStyle4)
END_MESSAGE_MAP()


// CReversKnittingDlg 消息处理程序

BOOL CReversKnittingDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_BitmapButtonReversKnittingStyle1.LoadBitmaps(IDB_BITMAP_0601g, 0, 0, IDB_BITMAP_0601w);// 正常  按下
	m_BitmapButtonReversKnittingStyle1.SizeToContent();

	m_BitmapButtonReversKnittingStyle2.LoadBitmaps(IDB_BITMAP_0602g, 0, 0, IDB_BITMAP_0602w);// 正常  按下
	m_BitmapButtonReversKnittingStyle2.SizeToContent();

	m_BitmapButtonReversKnittingStyle3.LoadBitmaps(IDB_BITMAP_0603g, 0, 0, IDB_BITMAP_0603w);// 正常  按下
	m_BitmapButtonReversKnittingStyle3.SizeToContent();

	m_BitmapButtonReversKnittingStyle4.LoadBitmaps(IDB_BITMAP_0604g, 0, 0, IDB_BITMAP_0604w);// 正常  按下
	m_BitmapButtonReversKnittingStyle4.SizeToContent();


	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CReversKnittingDlg::OnBnClickedButtonReversknittingStyle1()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonReversKnittingStyle1.EnableWindow(false);
}


void CReversKnittingDlg::OnBnClickedButtonReversknittingStyle2()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonReversKnittingStyle2.EnableWindow(false);
}


void CReversKnittingDlg::OnBnClickedButtonReversknittingStyle3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonReversKnittingStyle3.EnableWindow(false);
}


void CReversKnittingDlg::OnBnClickedButtonReversknittingStyle4()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonReversKnittingStyle4.EnableWindow(false);
}
