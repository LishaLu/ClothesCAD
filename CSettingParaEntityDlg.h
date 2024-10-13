#pragma once
#include "ClothesParameter.h"
#include "MainFrm.h"
#include "CSideKnittingDlg.h"
#include "CTransverseKnittingDlg.h"
#include "CLongitudinalKnittingDlg.h"

//#include "ClothesCADView.h"

class CClothesCADView;

// CSettingParaEntityDlg 对话框

class CSettingParaEntityDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSettingParaEntityDlg)

public:
	CSettingParaEntityDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CSettingParaEntityDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INPUTPARAMETER };
#endif

public: 
	void Init(ClothesParameter para);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEditYichang();
	CEdit medit_bodyLength;
	CEdit medit_bustGirth;
	CEdit medit_waistGirth;
	CEdit medit_backLength;
	CEdit medit_hemGirth;
	CButton mButton_gaoji;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedGaoji();
	ClothesParameter m_para;

	BOOL is_erase;
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	CButton m_CButtonNoErase;
	virtual BOOL OnInitDialog();
	afx_msg void OnEnChangeEditYaowei();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnBnClickedCheck5();
	afx_msg void OnBnClickedTuanchang();
	BOOL m_enableWaistGirth;
	BOOL m_enableHemGirth;
	BOOL m_enableShouldWidth;
	BOOL m_enableHipGirth;
	BOOL m_enableBackLength;
	CEdit m_shoulderWidth;
	CEdit m_CEdit_hipGirth;
	afx_msg void OnEnChangeEditHipgirth();
	afx_msg void OnStnClickedStaticHip();
	CString m_hip;
	CEdit medit_frontShoulderAngle;
	BOOL m_enableFrontShoulderAngle;
	afx_msg void OnBnClickedCheck7();
	CEdit medit_ribLength;
	BOOL m_enableRibLength;
	afx_msg void OnBnClickedRiblength();
	afx_msg void OnEnChangeEditShoulder();
	CEdit medit_ribWidth;
	BOOL m_enableRibWidth;
	afx_msg void OnBnClickedCheckRibwidth();
	afx_msg void OnBnClickedMfccolorbutton1();
	CMFCColorButton m_colorControlSelect;
	afx_msg void OnBnClickedMfccolorbuttonCol();
	afx_msg void OnEnChangeEditXiongwei();
	afx_msg void OnEnChangeEditTunchang();
	CComboBox m_StyleCombo;
	afx_msg void OnCbnSelchangeCombo1();

public:
	CRect dlgRect;
	CDialog child_longitudinalKnitting;
	CDialog child_SideKnitting;
	CDialog child_TransverseKnitting;
	afx_msg void OnBnClickedButton3();
};
