// TransverseKnitting.cpp: 实现文件
//
#include "pch.h"
//#include "stdafx.h"
#include "ClothesCAD.h"
#include "CTransverseKnittingDlg.h"
#include "afxdialogex.h"


// TransverseKnitting 对话框

IMPLEMENT_DYNAMIC(CTransverseKnittingDlg, CDialogEx)

CTransverseKnittingDlg::CTransverseKnittingDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_TRANSVERSEKNITTING, pParent)
{

}

CTransverseKnittingDlg::~CTransverseKnittingDlg()
{
}

void CTransverseKnittingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_TRANSVERSEKNITTING_STYLE1, m_BitmapButtonTransverseKnittingStyle1);
	DDX_Control(pDX, IDC_BUTTON_TRANSVERSEKNITTING_STYLE2, m_BitmapButtonTransverseKnittingStyle2);
	DDX_Control(pDX, IDC_BUTTON_TRANSVERSEKNITTING_STYLE3, m_BitmapButtonTransverseKnittingStyle3);
	DDX_Control(pDX, IDC_BUTTON_TRANSVERSEKNITTING_STYLE4, m_BitmapButtonTransverseKnittingStyle4);
}


BEGIN_MESSAGE_MAP(CTransverseKnittingDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_TRANSVERSEKNITTING_STYLE1, &CTransverseKnittingDlg::OnBnClickedButtonTransverseknittingStyle1)
	ON_BN_CLICKED(IDC_BUTTON_TRANSVERSEKNITTING_STYLE2, &CTransverseKnittingDlg::OnBnClickedButtonTransverseknittingStyle2)
	ON_BN_CLICKED(IDC_BUTTON_TRANSVERSEKNITTING_STYLE3, &CTransverseKnittingDlg::OnBnClickedButtonTransverseknittingStyle3)
	ON_BN_CLICKED(IDC_BUTTON_TRANSVERSEKNITTING_STYLE4, &CTransverseKnittingDlg::OnBnClickedButtonTransverseknittingStyle4)
END_MESSAGE_MAP()


BOOL CTransverseKnittingDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_BitmapButtonTransverseKnittingStyle1.LoadBitmaps(IDB_BITMAP_0201g, 0, 0, IDB_BITMAP_0201w);// 正常  按下
	m_BitmapButtonTransverseKnittingStyle1.SizeToContent();

	m_BitmapButtonTransverseKnittingStyle2.LoadBitmaps(IDB_BITMAP_0202g, 0, 0, IDB_BITMAP_0202w);// 正常  按下
	m_BitmapButtonTransverseKnittingStyle2.SizeToContent();

	m_BitmapButtonTransverseKnittingStyle3.LoadBitmaps(IDB_BITMAP_0203g, 0, 0, IDB_BITMAP_0203w);// 正常  按下
	m_BitmapButtonTransverseKnittingStyle3.SizeToContent();

	m_BitmapButtonTransverseKnittingStyle4.LoadBitmaps(IDB_BITMAP_0204g, 0, 0, IDB_BITMAP_0204w);// 正常  按下
	m_BitmapButtonTransverseKnittingStyle4.SizeToContent();

	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}



// TransverseKnitting 消息处理程序


void CTransverseKnittingDlg::OnBnClickedButtonTransverseknittingStyle1()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonTransverseKnittingStyle1.EnableWindow(false);
}


void CTransverseKnittingDlg::OnBnClickedButtonTransverseknittingStyle2()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonTransverseKnittingStyle2.EnableWindow(false);
}


void CTransverseKnittingDlg::OnBnClickedButtonTransverseknittingStyle3()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonTransverseKnittingStyle3.EnableWindow(false);
}


void CTransverseKnittingDlg::OnBnClickedButtonTransverseknittingStyle4()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonTransverseKnittingStyle4.EnableWindow(false);
}
