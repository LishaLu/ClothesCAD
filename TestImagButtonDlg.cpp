// TestImagButtonDlg.cpp: 实现文件
//
#include "pch.h"
//#include "stdafx.h"
#include "ClothesCAD.h"
#include "TestImagButtonDlg.h"
#include "afxdialogex.h"



// TestImagButtonDlg 对话框

IMPLEMENT_DYNAMIC(TestImagButtonDlg, CDialogEx)

TestImagButtonDlg::TestImagButtonDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

TestImagButtonDlg::~TestImagButtonDlg()
{
}

void TestImagButtonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, BitmapButton1);
	DDX_Control(pDX, IDC_BUTTON2, CBitmapButton2);
}


BEGIN_MESSAGE_MAP(TestImagButtonDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &TestImagButtonDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// TestImagButtonDlg 消息处理程序


BOOL TestImagButtonDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	BitmapButton1.LoadBitmaps(IDB_BITMAP_0101g,0,0, IDB_BITMAP_0101w);// 正常  按下
	BitmapButton1.SizeToContent();


	CBitmapButton2.LoadBitmaps(IDB_BITMAP_0102g, 0, 0, IDB_BITMAP_0102w);// 正常  按下
	CBitmapButton2.SizeToContent();
	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void TestImagButtonDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	BitmapButton1.EnableWindow(false);
}
