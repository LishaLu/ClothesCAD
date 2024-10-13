// CAsymmetricKnittingDlg.cpp: 实现文件
//
#include "pch.h"
//#include "stdafx.h"
#include "ClothesCAD.h"
#include "CAsymmetricKnittingDlg.h"
#include "afxdialogex.h"


// CAsymmetricKnittingDlg 对话框

IMPLEMENT_DYNAMIC(CAsymmetricKnittingDlg, CDialogEx)

CAsymmetricKnittingDlg::CAsymmetricKnittingDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_ASYMMETRICKNITTING_STYLE1, pParent)
{

}

CAsymmetricKnittingDlg::~CAsymmetricKnittingDlg()
{
}

void CAsymmetricKnittingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_ASYMMETRICKNITTING_STYLE1, m_BitmapButtonAsymmtricKnittingStyle1);
	DDX_Control(pDX, IDC_BUTTON_ASYMMETRICKNITTING_STYLE2, m_BitmapButtonAsymmtricKnittingStyle2);
	DDX_Control(pDX, IDC_BUTTON_ASYMMETRICKNITTING_STYLE3, m_BitmapButtonAsymmtricKnittingStyle3);
	DDX_Control(pDX, IDC_BUTTON_ASYMMETRICKNITTING_STYLE4, m_BitmapButtonAsymmtricKnittingStyle4);
	DDX_Control(pDX, IDC_BUTTON_ASYMMETRICKNITTING_STYLE5, m_BitmapButtonAsymmtricKnittingStyle5);
	DDX_Control(pDX, IDC_BUTTON_ASYMMETRICKNITTING_STYLE6, m_BitmapButtonAsymmtricKnittingStyle6);
	DDX_Control(pDX, IDC_BUTTON_ASYMMETRICKNITTING_STYLE7, m_BitmapButtonAsymmtricKnittingStyle7);
	DDX_Control(pDX, IDC_BUTTON_ASYMMETRICKNITTING_STYLE8, m_BitmapButtonAsymmtricKnittingStyle8);
}


BEGIN_MESSAGE_MAP(CAsymmetricKnittingDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_ASYMMETRICKNITTING_STYLE5, &CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle5)
	ON_BN_CLICKED(IDC_BUTTON_ASYMMETRICKNITTING_STYLE1, &CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle1)
	ON_BN_CLICKED(IDC_BUTTON_ASYMMETRICKNITTING_STYLE2, &CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle2)
	ON_BN_CLICKED(IDC_BUTTON_ASYMMETRICKNITTING_STYLE3, &CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle3)
	ON_BN_CLICKED(IDC_BUTTON_ASYMMETRICKNITTING_STYLE4, &CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle4)
	ON_BN_CLICKED(IDC_BUTTON_ASYMMETRICKNITTING_STYLE6, &CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle6)
	ON_BN_CLICKED(IDC_BUTTON_ASYMMETRICKNITTING_STYLE7, &CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle7)
	ON_BN_CLICKED(IDC_BUTTON_ASYMMETRICKNITTING_STYLE8, &CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle8)
END_MESSAGE_MAP()


// CAsymmetricKnittingDlg 消息处理程序

BOOL CAsymmetricKnittingDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_BitmapButtonAsymmtricKnittingStyle1.LoadBitmaps(IDB_BITMAP_0701g, 0, 0, IDB_BITMAP_0701w);
	//m_BitmapButtonSideKnittingStyle1.LoadBitmaps(IDB_BITMAP_0301g, 0, 0, IDB_BITMAP_0301w);// 正常  按下
	m_BitmapButtonAsymmtricKnittingStyle1.SizeToContent();

	m_BitmapButtonAsymmtricKnittingStyle2.LoadBitmaps(IDB_BITMAP_0702g, 0, 0, IDB_BITMAP_0702w);// 正常  按下
	m_BitmapButtonAsymmtricKnittingStyle2.SizeToContent();

	m_BitmapButtonAsymmtricKnittingStyle3.LoadBitmaps(IDB_BITMAP_0703g, 0, 0, IDB_BITMAP_0703w);// 正常  按下
	m_BitmapButtonAsymmtricKnittingStyle3.SizeToContent();

	m_BitmapButtonAsymmtricKnittingStyle4.LoadBitmaps(IDB_BITMAP_0704g, 0, 0, IDB_BITMAP_0704w);// 正常  按下
	m_BitmapButtonAsymmtricKnittingStyle4.SizeToContent();

	m_BitmapButtonAsymmtricKnittingStyle5.LoadBitmaps(IDB_BITMAP_0705g, 0, 0, IDB_BITMAP_0705w);// 正常  按下
	m_BitmapButtonAsymmtricKnittingStyle5.SizeToContent();

	m_BitmapButtonAsymmtricKnittingStyle6.LoadBitmaps(IDB_BITMAP_0706g, 0, 0, IDB_BITMAP_0706w);// 正常  按下
	m_BitmapButtonAsymmtricKnittingStyle6.SizeToContent();

	m_BitmapButtonAsymmtricKnittingStyle7.LoadBitmaps(IDB_BITMAP_0707g, 0, 0, IDB_BITMAP_0707w);// 正常  按下
	m_BitmapButtonAsymmtricKnittingStyle7.SizeToContent();

	m_BitmapButtonAsymmtricKnittingStyle8.LoadBitmaps(IDB_BITMAP_0708g, 0, 0, IDB_BITMAP_0708w);// 正常  按下
	m_BitmapButtonAsymmtricKnittingStyle8.SizeToContent();


	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}






void CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle1()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonAsymmtricKnittingStyle1.EnableWindow(false);
	
}


void CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle2()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonAsymmtricKnittingStyle2.EnableWindow(false);
}


void CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonAsymmtricKnittingStyle3.EnableWindow(false);
}


void CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle4()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonAsymmtricKnittingStyle4.EnableWindow(false);
}


void CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle5()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonAsymmtricKnittingStyle5.EnableWindow(false);
}


void CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle6()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonAsymmtricKnittingStyle6.EnableWindow(false);
}


void CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle7()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonAsymmtricKnittingStyle7.EnableWindow(false);
}


void CAsymmetricKnittingDlg::OnBnClickedButtonAsymmetricknittingStyle8()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonAsymmtricKnittingStyle8.EnableWindow(false);
}
