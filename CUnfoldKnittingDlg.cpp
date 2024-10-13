// CUnfoldKnittingDlg.cpp: 实现文件
//
#include "pch.h"
//#include "stdafx.h"
#include "ClothesCAD.h"
#include "CUnfoldKnittingDlg.h"
#include "afxdialogex.h"


// CUnfoldKnittingDlg 对话框

IMPLEMENT_DYNAMIC(CUnfoldKnittingDlg, CDialogEx)

CUnfoldKnittingDlg::CUnfoldKnittingDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_UNFOLDKNITTING, pParent)
{

}

CUnfoldKnittingDlg::~CUnfoldKnittingDlg()
{
}

void CUnfoldKnittingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_UNFOLDKINTTING_STYLE1, m_BitmapButtonUnfoldKnittingStyle1);
	DDX_Control(pDX, IDC_BUTTON_UNFOLDKINTTING_STYLE2, m_BitmapButtonUnfoldKnittingStyle2);
	DDX_Control(pDX, IDC_BUTTON_UNFOLDKINTTING_STYLE3, m_BitmapButtonUnfoldKnittingStyle3);
	DDX_Control(pDX, IDC_BUTTON_UNFOLDKINTTING_STYLE4, m_BitmapButtonUnfoldKnittingStyle4);
	DDX_Control(pDX, IDC_BUTTON__UNFOLDKINTTING_STYLE5, m_BitmapButtonUnfoldKnittingStyle5);
	DDX_Control(pDX, IDC_BUTTON_UNFOLDKINTTING_STYLE6, m_BitmapButtonUnfoldKnittingStyle6);
	DDX_Control(pDX, IDC_BUTTON_UNFOLDKINTTING_STYLE7, m_BitmapButtonUnfoldKnittingStyle7);
	DDX_Control(pDX, IDC_BUTTON_UNFOLDKINTTING_STYLE8, m_BitmapButtonUnfoldKnittingStyle8);
}


BEGIN_MESSAGE_MAP(CUnfoldKnittingDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_UNFOLDKINTTING_STYLE1, &CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle1)
	ON_BN_CLICKED(IDC_BUTTON_UNFOLDKINTTING_STYLE2, &CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle2)
	ON_BN_CLICKED(IDC_BUTTON_UNFOLDKINTTING_STYLE3, &CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle3)
	ON_BN_CLICKED(IDC_BUTTON_UNFOLDKINTTING_STYLE4, &CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle4)
	ON_BN_CLICKED(IDC_BUTTON__UNFOLDKINTTING_STYLE5, &CUnfoldKnittingDlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON_UNFOLDKINTTING_STYLE6, &CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle6)
	ON_BN_CLICKED(IDC_BUTTON_UNFOLDKINTTING_STYLE7, &CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle7)
	ON_BN_CLICKED(IDC_BUTTON_UNFOLDKINTTING_STYLE8, &CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle8)
END_MESSAGE_MAP()


// CUnfoldKnittingDlg 消息处理程序

BOOL CUnfoldKnittingDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_BitmapButtonUnfoldKnittingStyle1.LoadBitmaps(IDB_BITMAP_0401g, 0, 0, IDB_BITMAP_0401w);
	//m_BitmapButtonSideKnittingStyle1.LoadBitmaps(IDB_BITMAP_0301g, 0, 0, IDB_BITMAP_0301w);// 正常  按下
	m_BitmapButtonUnfoldKnittingStyle1.SizeToContent();

	m_BitmapButtonUnfoldKnittingStyle2.LoadBitmaps(IDB_BITMAP_0402g, 0, 0, IDB_BITMAP_0402w);// 正常  按下
	m_BitmapButtonUnfoldKnittingStyle2.SizeToContent();

	m_BitmapButtonUnfoldKnittingStyle3.LoadBitmaps(IDB_BITMAP_0403g, 0, 0, IDB_BITMAP_0403w);// 正常  按下
	m_BitmapButtonUnfoldKnittingStyle3.SizeToContent();

	m_BitmapButtonUnfoldKnittingStyle4.LoadBitmaps(IDB_BITMAP_0404g, 0, 0, IDB_BITMAP_0404w);// 正常  按下
	m_BitmapButtonUnfoldKnittingStyle4.SizeToContent();

	m_BitmapButtonUnfoldKnittingStyle5.LoadBitmaps(IDB_BITMAP_0405g, 0, 0, IDB_BITMAP_0405w);// 正常  按下
	m_BitmapButtonUnfoldKnittingStyle5.SizeToContent();

	m_BitmapButtonUnfoldKnittingStyle6.LoadBitmaps(IDB_BITMAP_0406g, 0, 0, IDB_BITMAP_0406w);// 正常  按下
	m_BitmapButtonUnfoldKnittingStyle6.SizeToContent();

	m_BitmapButtonUnfoldKnittingStyle7.LoadBitmaps(IDB_BITMAP_0407g, 0, 0, IDB_BITMAP_0407w);// 正常  按下
	m_BitmapButtonUnfoldKnittingStyle7.SizeToContent();

	m_BitmapButtonUnfoldKnittingStyle8.LoadBitmaps(IDB_BITMAP_0408g, 0, 0, IDB_BITMAP_0408w);// 正常  按下
	m_BitmapButtonUnfoldKnittingStyle8.SizeToContent();


	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle1()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonUnfoldKnittingStyle1.EnableWindow(false);
}


void CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle2()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonUnfoldKnittingStyle2.EnableWindow(false);
}


void CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonUnfoldKnittingStyle3.EnableWindow(false);
}


void CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle4()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonUnfoldKnittingStyle4.EnableWindow(false);
}


void CUnfoldKnittingDlg::OnBnClickedButton() // 为啥？
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonUnfoldKnittingStyle5.EnableWindow(false);
}


void CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle6()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonUnfoldKnittingStyle6.EnableWindow(false);
}


void CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle7()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonUnfoldKnittingStyle7.EnableWindow(false);
}


void CUnfoldKnittingDlg::OnBnClickedButtonUnfoldkinttingStyle8()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonUnfoldKnittingStyle8.EnableWindow(false);
}
