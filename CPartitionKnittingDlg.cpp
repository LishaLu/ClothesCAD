// CPartitionKnittingDlg.cpp: 实现文件
//
#include "pch.h"
//#include "stdafx.h"
#include "ClothesCAD.h"
#include "CPartitionKnittingDlg.h"
#include "afxdialogex.h"


// CPartitionKnittingDlg 对话框

IMPLEMENT_DYNAMIC(CPartitionKnittingDlg, CDialogEx)

CPartitionKnittingDlg::CPartitionKnittingDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_PARTITIONKNITTING, pParent)
{

}

CPartitionKnittingDlg::~CPartitionKnittingDlg()
{
}

void CPartitionKnittingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_PARTITIONKNITTING_STYLE1, m_BitmapButtonPartitionKnittingStyle1);
	DDX_Control(pDX, IDC_BUTTON_PARTITIONKNITTING_STYLE2, m_BitmapButtonPartitionKnittingStyle2);
	DDX_Control(pDX, IDC_BUTTON_PARTITIONKNITTING_STYLE3, m_BitmapButtonPartitionKnittingStyle3);
	DDX_Control(pDX, IDC_BUTTON_PARTITIONKNITTING_STYLE4, m_BitmapButtonPartitionKnittingStyle4);
}


BEGIN_MESSAGE_MAP(CPartitionKnittingDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_PARTITIONKNITTING_STYLE1, &CPartitionKnittingDlg::OnBnClickedButtonPartitionknittingStyle1)
	ON_BN_CLICKED(IDC_BUTTON_PARTITIONKNITTING_STYLE2, &CPartitionKnittingDlg::OnBnClickedButtonPartitionknittingStyle2)
	ON_BN_CLICKED(IDC_BUTTON_PARTITIONKNITTING_STYLE3, &CPartitionKnittingDlg::OnBnClickedButtonPartitionknittingStyle3)
	ON_BN_CLICKED(IDC_BUTTON_PARTITIONKNITTING_STYLE4, &CPartitionKnittingDlg::OnBnClickedButtonPartitionknittingStyle4)
END_MESSAGE_MAP()


// CPartitionKnittingDlg 消息处理程序
BOOL CPartitionKnittingDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	m_BitmapButtonPartitionKnittingStyle1.LoadBitmaps(IDB_BITMAP_0501g, 0, 0, IDB_BITMAP_0501w);// 正常  按下
	m_BitmapButtonPartitionKnittingStyle1.SizeToContent();

	m_BitmapButtonPartitionKnittingStyle2.LoadBitmaps(IDB_BITMAP_0502g, 0, 0, IDB_BITMAP_0502w);// 正常  按下
	m_BitmapButtonPartitionKnittingStyle2.SizeToContent();

	m_BitmapButtonPartitionKnittingStyle3.LoadBitmaps(IDB_BITMAP_0503g, 0, 0, IDB_BITMAP_0503w);// 正常  按下
	m_BitmapButtonPartitionKnittingStyle3.SizeToContent();

	m_BitmapButtonPartitionKnittingStyle4.LoadBitmaps(IDB_BITMAP_0504g, 0, 0, IDB_BITMAP_0504w);// 正常  按下
	m_BitmapButtonPartitionKnittingStyle4.SizeToContent();


	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}




void CPartitionKnittingDlg::OnBnClickedButtonPartitionknittingStyle1()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonPartitionKnittingStyle1.EnableWindow(false);

}


void CPartitionKnittingDlg::OnBnClickedButtonPartitionknittingStyle2()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonPartitionKnittingStyle2.EnableWindow(false);
}


void CPartitionKnittingDlg::OnBnClickedButtonPartitionknittingStyle3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonPartitionKnittingStyle3.EnableWindow(false);

}


void CPartitionKnittingDlg::OnBnClickedButtonPartitionknittingStyle4()
{
	// TODO: 在此添加控件通知处理程序代码
	m_BitmapButtonPartitionKnittingStyle4.EnableWindow(false);
}
