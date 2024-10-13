// SaveKeyPointsDlg.cpp: 实现文件
//

#include "pch.h"
#include "ClothesCAD.h"
#include "SaveKeyPointsDlg.h"
#include "afxdialogex.h"
#include "GlobalVar.h"
#include <string>
#include <fstream>  
#include <vector>
#include "ClothesCADDoc.h"
#include "ClothesCADView.h"


// SaveKeyPointsDlg 对话框

IMPLEMENT_DYNAMIC(SaveKeyPointsDlg, CDialogEx)

SaveKeyPointsDlg::SaveKeyPointsDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SAVEKEYPOINTS, pParent)
	, m_KeyPointLabels(_T(""))
{

}

SaveKeyPointsDlg::~SaveKeyPointsDlg()
{
}

void SaveKeyPointsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_KeyPointLabels);
}


BEGIN_MESSAGE_MAP(SaveKeyPointsDlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &SaveKeyPointsDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &SaveKeyPointsDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &SaveKeyPointsDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// SaveKeyPointsDlg 消息处理程序


void SaveKeyPointsDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

void SaveKeyPointsDlg::Init(CString keyPoints) {

	m_KeyPointLabels = keyPoints;
	
}

void SaveKeyPointsDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	std::vector<CString> labelVec;
	std::vector<CPoint1> CPoint1Vec;
	char separator[2] = {'\r\n', ' '};
	

	// TODO: 在此添加控件通知处理程序代码
	CMainFrame *pFrame = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	CMDIChildWnd* pChildFrame = (CMDIChildWnd*)pFrame->GetActiveFrame();
	CClothesCADView * pView = (CClothesCADView*)(pChildFrame->GetActiveView());
	pView->m_KeyPointLabels = this->m_KeyPointLabels;

	SplitCString(m_KeyPointLabels, separator, 2, labelVec, CPoint1Vec);

	CSize offsetXY = CSize(10, 10);
	CString szFilters = _T("Key Points(*.kp)");
	CFileDialog FileDlg(FALSE, _T("kp"), _T("untitle"));
	FileDlg.m_ofn.lpstrTitle = _T("保存关键点");
	FileDlg.m_ofn.lpstrFilter = szFilters;

	if (IDOK == FileDlg.DoModal())
	{
		std::ofstream file(CT2A(LPCTSTR(FileDlg.GetPathName().GetString())), std::ios::out | std::ios::trunc);
		file << CPoint1Vec.size() << std::endl;
		for (const auto &point : CPoint1Vec)
			file <<int(int(point.getX()+0.5)/5) + offsetXY.cx << " " << int(int(point.getY()+0.5)/5) + offsetXY.cy << std::endl;
		file.close();

		//saveSemaCanvas(FileDlg.GetPathName(), tempSaveSema);

	}

	CDialogEx::OnOK();
}


void SaveKeyPointsDlg::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}




int SaveKeyPointsDlg::SplitCString(const CString& str, const char * separator, int sep_number,
	std::vector<CString> &strArray, std::vector<CPoint1> &cpoint1Array )
{
	strArray.clear();
	int index = -1;
	const int MAX_COUNT = 1000; //最大分割长度
	int smallIndex = MAX_COUNT;
	CString szLeft;
	CString szRight = str;

	for (int i = 0; i < sep_number; i++)
	{
		index = szRight.Find(separator[i]);
		if (index >= 0 && index < smallIndex)
		{
			smallIndex = index; //遍历获得所有的分割符的最小Index
		}

		if (i == sep_number - 1 && smallIndex != MAX_COUNT) //遍历全部分割符之后
		{
			szLeft = szRight.Left(smallIndex);
			szLeft.Trim(); //去除空格
			if (!szLeft.IsEmpty())
			{
				strArray.push_back(szLeft);
				if (keyPoints.find(szLeft) != keyPoints.end())
					cpoint1Array.push_back(keyPoints[szLeft] - KOmaps[szLeft]);

			}

			szRight = szRight.Right(szRight.GetLength() - smallIndex - 1);
			szRight.Trim();
			if (szRight.GetLength() > 0)
			{
				i = -1;
				smallIndex = MAX_COUNT;
			}
			else break;
		}
		else if (i == sep_number - 1)
		{
			szRight.Trim();
			if (!szRight.IsEmpty()) { 
				strArray.push_back(szRight);
				if (keyPoints.find(szRight) != keyPoints.end())
					cpoint1Array.push_back(keyPoints[szRight] - KOmaps[szRight]);
			}
		}
	}

	return strArray.size();
}

BOOL SaveKeyPointsDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	UpdateData(false);

	// TODO:  在此添加额外的初始化

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
