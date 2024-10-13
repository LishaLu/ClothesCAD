#pragma once
#include <vector>
#include "CPoint1.h"

// SaveKeyPointsDlg 对话框

class SaveKeyPointsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(SaveKeyPointsDlg)

public:
	SaveKeyPointsDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~SaveKeyPointsDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	CString m_KeyPointLabels;

public:
	int SaveKeyPointsDlg::SplitCString(const CString& str, const char * separator, int sep_number,
		std::vector<CString> &strArray, std::vector<CPoint1> &cpoint1Array);
	virtual BOOL OnInitDialog();

	void Init(CString keyPoints);
};
