// LongitudinalKnitting.cpp: 实现文件
//
#include "pch.h"
//#include "stdafx.h"
#include "ClothesCAD.h"
#include "CLongitudinalKnittingDlg.h"
#include "afxdialogex.h"




// LongitudinalKnitting 对话框

IMPLEMENT_DYNAMIC(CLongitudinalKnittingDlg, CDialogEx)

CLongitudinalKnittingDlg::CLongitudinalKnittingDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ZHONGXIANG, pParent)
{

}

CLongitudinalKnittingDlg::~CLongitudinalKnittingDlg()
{
}

void CLongitudinalKnittingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_LKSTYLE1, m_BitmapButtonLongitudinalKnittingStyle1);
	DDX_Control(pDX, IDC_BUTTON_LKSTYLE2, m_BitmapButtonLongitudinalKnittingStyle2);
	DDX_Control(pDX, IDC_BUTTON_LKSTYLE3, m_BitmapButtonLongitudinalKnittingStyle3);
	DDX_Control(pDX, IDC_BUTTON_LKSTYLE4, m_BitmapButtonLongitudinalKnittingStyle4);
	DDX_Control(pDX, IDC_BUTTON_LKSTYLE5, m_BitmapButtonLongitudinalKnittingStyle5);


}


BEGIN_MESSAGE_MAP(CLongitudinalKnittingDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_LKSTYLE1, &CLongitudinalKnittingDlg::OnBnClickedButtonLkstyle1)
	ON_BN_CLICKED(IDC_BUTTON_LKSTYLE2, &CLongitudinalKnittingDlg::OnBnClickedButtonLkstyle2)
	ON_BN_CLICKED(IDC_BUTTON_LKSTYLE3, &CLongitudinalKnittingDlg::OnBnClickedButtonLkstyle3)
	ON_BN_CLICKED(IDC_BUTTON_LKSTYLE4, &CLongitudinalKnittingDlg::OnBnClickedButtonLkstyle4)
	ON_BN_CLICKED(IDC_BUTTON_LKSTYLE5, &CLongitudinalKnittingDlg::OnBnClickedButtonLkstyle5)
END_MESSAGE_MAP()


// LongitudinalKnitting 消息处理程序

BOOL CLongitudinalKnittingDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_BitmapButtonLongitudinalKnittingStyle1.LoadBitmaps(IDB_BITMAP_0101g, 0, 0, IDB_BITMAP_0101w);// 正常  按下
	m_BitmapButtonLongitudinalKnittingStyle1.SizeToContent();

	m_BitmapButtonLongitudinalKnittingStyle2.LoadBitmaps(IDB_BITMAP_0102g, 0, 0, IDB_BITMAP_0102w);// 正常  按下
	m_BitmapButtonLongitudinalKnittingStyle2.SizeToContent();

	m_BitmapButtonLongitudinalKnittingStyle3.LoadBitmaps(IDB_BITMAP_0103g, 0, 0, IDB_BITMAP_0103w);// 正常  按下
	m_BitmapButtonLongitudinalKnittingStyle3.SizeToContent();

	m_BitmapButtonLongitudinalKnittingStyle4.LoadBitmaps(IDB_BITMAP_0104g, 0, 0, IDB_BITMAP_0104w);// 正常  按下
	m_BitmapButtonLongitudinalKnittingStyle4.SizeToContent();

	m_BitmapButtonLongitudinalKnittingStyle5.LoadBitmaps(IDB_BITMAP_0105g, 0, 0, IDB_BITMAP_0105w);// 正常  按下
	m_BitmapButtonLongitudinalKnittingStyle5.SizeToContent();

	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CLongitudinalKnittingDlg::OnBnClickedButtonLkstyle1()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonLongitudinalKnittingStyle1.EnableWindow(false);
}


void CLongitudinalKnittingDlg::OnBnClickedButtonLkstyle2()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonLongitudinalKnittingStyle2.EnableWindow(false);
}


void CLongitudinalKnittingDlg::OnBnClickedButtonLkstyle3()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonLongitudinalKnittingStyle3.EnableWindow(false);
}


void CLongitudinalKnittingDlg::OnBnClickedButtonLkstyle4()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonLongitudinalKnittingStyle4.EnableWindow(false);
}


void CLongitudinalKnittingDlg::OnBnClickedButtonLkstyle5()
{
	// TODO: 在此添加控件通知处理程序代码
	enableAllWindow();
	m_BitmapButtonLongitudinalKnittingStyle5.EnableWindow(false);
}
