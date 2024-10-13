// SideKnittingDlg.cpp: 实现文件
//
#include "pch.h"
//#include "stdafx.h"
#include "ClothesCAD.h"
#include "CSideKnittingDlg.h"
#include "afxdialogex.h"


// SideKnittingDlg 对话框

IMPLEMENT_DYNAMIC(CSideKnittingDlg, CDialogEx)

CSideKnittingDlg::CSideKnittingDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_SIDEKNITTING, pParent)
{

}

CSideKnittingDlg::~CSideKnittingDlg()
{
}

void CSideKnittingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_SIDEKNITTING_STYLE1, m_BitmapButtonSideKnittingStyle1);
	DDX_Control(pDX, IDC_BUTTON_SIDEKNITTING_STYLE2, m_BitmapButtonSideKnittingStyle2);
	DDX_Control(pDX, IDC_BUTTON_SIDEKNITTING_STYLE3, m_BitmapButtonSideKnittingStyle3);
	DDX_Control(pDX, IDC_BUTTON_SIDEKNITTING_STYLE4, m_BitmapButtonSideKnittingStyle4);
	//DDX_Control(pDX, IDC_BUTTON_SIDEKNITTING_STYLE, m_BitmapButtonSideKnittingStyle);
	//DDX_Control(pDX, IDC_BUTTON_SIDE, m_BitmapButtonSideKnittingStyle);
}


BEGIN_MESSAGE_MAP(CSideKnittingDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_SIDEKNITTING_STYLE1, &CSideKnittingDlg::OnBnClickedButtonSideknittingStyle1)
	ON_BN_CLICKED(IDC_BUTTON_SIDEKNITTING_STYLE2, &CSideKnittingDlg::OnBnClickedButtonSideknittingStyle2)
	ON_BN_CLICKED(IDC_BUTTON_SIDEKNITTING_STYLE3, &CSideKnittingDlg::OnBnClickedButtonSideknittingStyle3)
	ON_BN_CLICKED(IDC_BUTTON_SIDEKNITTING_STYLE4, &CSideKnittingDlg::OnBnClickedButtonSideknittingStyle4)
	//ON_BN_CLICKED(IDC_BUTTON_SIDEKNITTING_STYLE, &SideKnittingDlg::OnBnClickedButtonSideknittingStyle)
	ON_BN_CLICKED(IDC_BUTTON_SIDE, &CSideKnittingDlg::OnBnClickedButtonSide)
END_MESSAGE_MAP()



BOOL CSideKnittingDlg::OnInitDialog()  
{
	CDialogEx::OnInitDialog();
	//m_BitmapButtonSideKnittingStyle1.LoadBitmaps(IDB_BITMAP4, IDB_BITMAP4, IDB_BITMAP4, IDB_BITMAP4);
	m_BitmapButtonSideKnittingStyle1.LoadBitmaps(IDB_BITMAP_0301g, 0, 0, IDB_BITMAP_0301w);// 正常  按下
	m_BitmapButtonSideKnittingStyle1.SizeToContent();

	m_BitmapButtonSideKnittingStyle2.LoadBitmaps(IDB_BITMAP_0302g, 0, 0, IDB_BITMAP_0302w);// 正常  按下
	m_BitmapButtonSideKnittingStyle2.SizeToContent();

	m_BitmapButtonSideKnittingStyle3.LoadBitmaps(IDB_BITMAP_0303g, 0, 0, IDB_BITMAP_0303w);// 正常  按下
	m_BitmapButtonSideKnittingStyle3.SizeToContent();

	m_BitmapButtonSideKnittingStyle4.LoadBitmaps(IDB_BITMAP_0304g, 0, 0, IDB_BITMAP_0304w);// 正常  按下
	m_BitmapButtonSideKnittingStyle4.SizeToContent();

	//m_BitmapButtonSideKnittingStyle.LoadBitmaps(IDB_BITMAP_0305g, 0, 0, IDB_BITMAP_0305w);// 正常  按下
	//m_BitmapButtonSideKnittingStyle.SizeToContent();


	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}




// SideKnittingDlg 消息处理程序


void CSideKnittingDlg::OnBnClickedButtonSideknittingStyle1()
{
	// TODO: 在此添加控件通知处理程序代码


	enableAllWindow();
	m_BitmapButtonSideKnittingStyle1.EnableWindow(false);


}


void CSideKnittingDlg::OnBnClickedButtonSideknittingStyle2()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonSideKnittingStyle2.EnableWindow(false);
}


void CSideKnittingDlg::OnBnClickedButtonSideknittingStyle3()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonSideKnittingStyle3.EnableWindow(false);
}


void CSideKnittingDlg::OnBnClickedButtonSideknittingStyle4()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonSideKnittingStyle4.EnableWindow(false);
}


void CSideKnittingDlg::OnBnClickedButtonSideknittingStyle()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonSideKnittingStyle.EnableWindow(false);
}


void CSideKnittingDlg::OnBnClickedButtonSide()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonSideKnittingStyle.EnableWindow(false);
}
