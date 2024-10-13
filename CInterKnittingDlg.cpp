// CInterKnittingDlg.cpp: 实现文件
//
#include "pch.h"
//#include "stdafx.h"
#include "ClothesCAD.h"
#include "CInterKnittingDlg.h"
#include "afxdialogex.h"


// CInterKnittingDlg 对话框

IMPLEMENT_DYNAMIC(CInterKnittingDlg, CDialogEx)

CInterKnittingDlg::CInterKnittingDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_INTERKNITTING_STYLE1, pParent)
{

}

CInterKnittingDlg::~CInterKnittingDlg()
{
}

void CInterKnittingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_INTERKNITTING_STYLE1, m_BitmapButtonInterKnittingStyle1);
	DDX_Control(pDX, IDC_BUTTON_INTERKNITTING_STYLE2, m_BitmapButtonInterKnittingStyle2);
	DDX_Control(pDX, IDC_BUTTON_INTERKNITTING_STYLE3, m_BitmapButtonInterKnittingStyle3);
}


BEGIN_MESSAGE_MAP(CInterKnittingDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_INTERKNITTING_STYLE1, &CInterKnittingDlg::OnBnClickedButtonInterknittingStyle1)
	ON_BN_CLICKED(IDC_BUTTON_INTERKNITTING_STYLE2, &CInterKnittingDlg::OnBnClickedButtonInterknittingStyle2)
	ON_BN_CLICKED(IDC_BUTTON_INTERKNITTING_STYLE3, &CInterKnittingDlg::OnBnClickedButtonInterknittingStyle3)
END_MESSAGE_MAP()


// CInterKnittingDlg 消息处理程序
BOOL CInterKnittingDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_BitmapButtonInterKnittingStyle1.LoadBitmaps(IDB_BITMAP_0801g, 0, 0, IDB_BITMAP_0801w);// 正常  按下
	m_BitmapButtonInterKnittingStyle1.SizeToContent();

	m_BitmapButtonInterKnittingStyle2.LoadBitmaps(IDB_BITMAP_0802g, 0, 0, IDB_BITMAP_0802w);// 正常  按下
	m_BitmapButtonInterKnittingStyle2.SizeToContent();

	m_BitmapButtonInterKnittingStyle3.LoadBitmaps(IDB_BITMAP_0803g, 0, 0, IDB_BITMAP_0803w);// 正常  按下
	m_BitmapButtonInterKnittingStyle3.SizeToContent();

	


	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}




void CInterKnittingDlg::OnBnClickedButtonInterknittingStyle1()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonInterKnittingStyle1.EnableWindow(false);
}


void CInterKnittingDlg::OnBnClickedButtonInterknittingStyle2()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonInterKnittingStyle2.EnableWindow(false);
}


void CInterKnittingDlg::OnBnClickedButtonInterknittingStyle3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonInterKnittingStyle3.EnableWindow(false);
}
