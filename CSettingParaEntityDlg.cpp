// CSettingParaEntityDlg.cpp: 实现文件
//

#include "pch.h"
#include "ClothesCAD.h"
#include "CSettingParaEntityDlg.h"
#include "afxdialogex.h"
#include "ClothesCADDoc.h"
#include "ClothesCADView.h"
#include "GlobalVar.h"
// CSettingParaEntityDlg 对话框

IMPLEMENT_DYNAMIC(CSettingParaEntityDlg, CDialogEx)

CSettingParaEntityDlg::CSettingParaEntityDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_INPUTPARAMETER, pParent)
	, is_erase(FALSE)
	, m_enableWaistGirth(FALSE)
	, m_enableHemGirth(FALSE)
	, m_enableShouldWidth(FALSE)
	, m_enableHipGirth(FALSE)
	, m_enableBackLength(FALSE)
	, m_hip(_T(""))
	, m_enableFrontShoulderAngle(FALSE)
	, m_enableRibLength(FALSE)
	, m_enableRibWidth(FALSE)
{

	
}

CSettingParaEntityDlg::~CSettingParaEntityDlg()
{
     child_longitudinalKnitting.DestroyWindow();
	 child_SideKnitting.DestroyWindow();
	 child_TransverseKnitting.DestroyWindow();
}

void CSettingParaEntityDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_YICHANG, medit_bodyLength);
	DDX_Control(pDX, IDC_EDIT_XIONGWEI, medit_bustGirth);
	DDX_Control(pDX, IDC_EDIT_TUNCHANG, medit_backLength);
	DDX_Control(pDX, IDC_EDIT_SHOULDER, m_shoulderWidth);
	DDX_Control(pDX, IDC_EDIT_YAOWEI, medit_waistGirth);
	DDX_Control(pDX, IDC_EDIT_HIP, m_CEdit_hipGirth);
	DDX_Control(pDX, IDC_EDIT_XIABAI, medit_hemGirth);
	DDX_Control(pDX, IDC_EDIT_RIBLENGTH, medit_ribLength);
	DDX_Control(pDX, IDC_EDIT1_RIBWIDTH, medit_ribWidth);
	DDX_Control(pDX, IDC_EDIT_FRONTSHOULDER, medit_frontShoulderAngle);
	DDX_Control(pDX, IDC_GAOJI, mButton_gaoji);


	//DDX_Text(pDX, IDC_EDIT_HIPGIRTH, m_hip);
	DDX_Text(pDX, IDC_EDIT_YICHANG, m_para.m_bodyLength);
	DDX_Text(pDX, IDC_EDIT_XIONGWEI, m_para.m_bustGirth);
	DDX_Text(pDX, IDC_EDIT_YAOWEI, m_para.m_waistGirth);
	DDX_Text(pDX, IDC_EDIT_TUNCHANG, m_para.m_backLength);
	DDX_Text(pDX, IDC_EDIT_XIABAI, m_para.m_hemGirth);
	DDX_Text(pDX, IDC_EDIT_SHOULDER, m_para.m_shouldWidth);
	DDX_Text(pDX, IDC_EDIT_HIP, m_para.m_hipGirth);
	DDX_Text(pDX, IDC_EDIT_RIBLENGTH, m_para.m_ribLength);
	DDX_Text(pDX, IDC_EDIT1_RIBWIDTH, m_para.m_ribWidth);
	DDX_Text(pDX, IDC_EDIT_FRONTSHOULDER, m_para.m_frontShoulderAngle);

	DDX_Check(pDX, IDC_GAOJI, m_para.m_gaoji);

	DDX_Control(pDX, IDC_RADIO3, m_CButtonNoErase);
	DDX_Check(pDX, IDC_TUANCHANG, m_enableBackLength);
	DDX_Check(pDX, IDC_CHECK3, m_enableShouldWidth);

	DDX_Check(pDX, IDC_CHECK1, m_enableWaistGirth);
	DDX_Check(pDX, IDC_CHECK4, m_enableHipGirth);
	DDX_Check(pDX, IDC_CHECK2, m_enableHemGirth);

	DDX_Check(pDX, IDC_RIBLENGTH, m_enableRibLength);
	DDX_Check(pDX, IDC_CHECK_RIBWIDTH, m_enableRibWidth);
	DDX_Check(pDX, IDC_CHECK7, m_enableFrontShoulderAngle);


	DDX_Control(pDX, IDC_MFCCOLORBUTTON_COL, m_colorControlSelect);
	DDX_Control(pDX, IDC_COMBO1, m_StyleCombo);
	DDX_Text(pDX, IDC_EDIT1_RATIO, m_para.m_ratio);
}


BEGIN_MESSAGE_MAP(CSettingParaEntityDlg, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT_YICHANG, &CSettingParaEntityDlg::OnEnChangeEditYichang)
	ON_BN_CLICKED(IDC_OK, &CSettingParaEntityDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_CANCEL, &CSettingParaEntityDlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_GAOJI, &CSettingParaEntityDlg::OnBnClickedGaoji)
	ON_BN_CLICKED(IDC_RADIO2, &CSettingParaEntityDlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CSettingParaEntityDlg::OnBnClickedRadio3)
	ON_EN_CHANGE(IDC_EDIT_YAOWEI, &CSettingParaEntityDlg::OnEnChangeEditYaowei)
	ON_BN_CLICKED(IDC_CHECK1, &CSettingParaEntityDlg::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_CHECK2, &CSettingParaEntityDlg::OnBnClickedCheck2)
	ON_BN_CLICKED(IDC_CHECK3, &CSettingParaEntityDlg::OnBnClickedCheck3)
	ON_BN_CLICKED(IDC_CHECK4, &CSettingParaEntityDlg::OnBnClickedCheck4)
	ON_BN_CLICKED(IDC_TUANCHANG, &CSettingParaEntityDlg::OnBnClickedTuanchang)
	ON_STN_CLICKED(IDC_STATIC_HIP, &CSettingParaEntityDlg::OnStnClickedStaticHip)
	ON_BN_CLICKED(IDC_CHECK7, &CSettingParaEntityDlg::OnBnClickedCheck7)
	ON_BN_CLICKED(IDC_RIBLENGTH, &CSettingParaEntityDlg::OnBnClickedRiblength)
	ON_EN_CHANGE(IDC_EDIT_SHOULDER, &CSettingParaEntityDlg::OnEnChangeEditShoulder)
	ON_BN_CLICKED(IDC_CHECK_RIBWIDTH, &CSettingParaEntityDlg::OnBnClickedCheckRibwidth)
	//ON_BN_CLICKED(IDC_MFCCOLORBUTTON1, &CSettingParaEntityDlg::OnBnClickedMfccolorbutton1)
	ON_BN_CLICKED(IDC_MFCCOLORBUTTON_COL, &CSettingParaEntityDlg::OnBnClickedMfccolorbuttonCol)
	ON_EN_CHANGE(IDC_EDIT_XIONGWEI, &CSettingParaEntityDlg::OnEnChangeEditXiongwei)
	ON_EN_CHANGE(IDC_EDIT_TUNCHANG, &CSettingParaEntityDlg::OnEnChangeEditTunchang)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CSettingParaEntityDlg::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON3, &CSettingParaEntityDlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// CSettingParaEntityDlg 消息处理程序




void CSettingParaEntityDlg::OnEnChangeEditYichang()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CSettingParaEntityDlg::Init(ClothesParameter para) {
	m_para = para;
}


void CSettingParaEntityDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString bodyLength;
	medit_bodyLength.GetWindowText(bodyLength);

	CString bust;
	medit_bustGirth.GetWindowText(bust);


	UpdateData(true);


	if (FALSE == m_enableWaistGirth) {

		m_para.m_waistGirth = m_para.m_bustGirth;

	}

	if (FALSE == m_enableBackLength) {

		m_para.m_backLength = 39.2;
	}

	if (FALSE == m_enableHemGirth) {

		m_para.m_hemGirth = m_para.m_bustGirth;
	}

	if (FALSE == m_enableHipGirth) {

		if ((m_para.m_bodyLength / m_para.m_bustGirth) > 0.7)
			m_para.m_hipGirth = m_para.m_bustGirth;
		else
			m_para.m_hipGirth = m_para.m_hemGirth;
	}

	

	if (FALSE == m_enableShouldWidth) {

		m_para.m_shouldWidth = 39;
		//m_para.m_shouldWidth = m_para.m_bustGirth / 2 - 4;
	}


	if (FALSE == m_enableRibLength) {

		m_para.m_ribLength = m_para.m_bustGirth;
	}

	if (FALSE == m_enableRibWidth) {

		m_para.m_ribWidth = m_para.m_bustGirth;
	}



	if (FALSE == m_enableFrontShoulderAngle) {

		m_para.m_frontShoulderAngle = 20;
	}




	// TODO: 在此添加控件通知处理程序代码
	CMainFrame *pFrame = (CMainFrame*)AfxGetApp()->m_pMainWnd;
	CMDIChildWnd* pChildFrame = (CMDIChildWnd*)pFrame->GetActiveFrame();
	CClothesCADView * pView = (CClothesCADView*)(pChildFrame->GetActiveView());
	pView->m_ClothesParameter = m_para;

	keyPoints.clear();

	if (is_erase)
		pView->m_mapCount = 0;

	pView->m_mapCount++;

	pView->Invalidate(is_erase);

	



	//pChildFrame->GetActiveView()->SendMessage(WM_SETPARAMETEROK, 0, 0);

	//SendMessage(GetParent()->m_hWnd, WM_SETPARAMETEROK, 0, 0);


	EndDialog(IDC_OK);


}


void CSettingParaEntityDlg::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	EndDialog(IDC_CANCEL);
}


void CSettingParaEntityDlg::OnBnClickedGaoji()
{
	// TODO: 在此添加控件通知处理程序代码
/*
	if (BST_CHECKED == IsDlgButtonChecked(IDC_GAOJI))
	{
		medit_waistGirth.SetReadOnly(true);
		medit_backLength.SetReadOnly(true);
		medit_hemGirth.SetReadOnly(true);

	}
	else if (BST_UNCHECKED == IsDlgButtonChecked(IDC_GAOJI)) {
		medit_waistGirth.SetReadOnly(true);
		medit_backLength.SetReadOnly(true);
		medit_hemGirth.SetReadOnly(true);
	}
*/
}


void CSettingParaEntityDlg::OnBnClickedRadio2()
{
	// TODO: 在此添加控件通知处理程序代码
	is_erase = 1;
	
}


void CSettingParaEntityDlg::OnBnClickedRadio3()
{
	// TODO: 在此添加控件通知处理程序代码
	is_erase = 0;
}


BOOL CSettingParaEntityDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(false);
	m_CButtonNoErase.SetCheck(1);

	//m_colorControlSelect.EnableAutomaticButton(_T("1"), m_para.m_color);
	m_colorControlSelect.SetColor(m_para.m_color);




	//GetDlgItem(IDC_STATIC_PIC)->GetWindowRect(&dlgRect);

	/*
	child_longitudinalKnitting.Create(IDD_ZHONGXIANG, this);
	child_SideKnitting.Create(IDD_DIALOG_SIDEKNITTING, this);
	child_TransverseKnitting.Create(IDD_DIALOG_TRANSVERSEKNITTING, this);
	*/
	/*
	CDialog child_longitudinalKnitting;
	CDialog child_SideKnitting;
	CDialog child_TransverseKnitting;


#include "SideKnittingDlg.h"
#include "TransverseKnittingDlg.h"
#include "LongitudinalKnittingDlg.h"
*/



	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}


void CSettingParaEntityDlg::OnEnChangeEditYaowei()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

void CSettingParaEntityDlg::OnBnClickedCheck1()
{
	// TODO: 在此添加控件通知处理程序代码


	if (BST_CHECKED == IsDlgButtonChecked(IDC_CHECK1))
	{
		medit_waistGirth.SetReadOnly(false);

	}
	else if (BST_UNCHECKED == IsDlgButtonChecked(IDC_CHECK1)) {
		medit_waistGirth.SetReadOnly(true);

	}
}


void CSettingParaEntityDlg::OnBnClickedCheck2()
{
	// TODO: 在此添加控件通知处理程序代码

	if (BST_CHECKED == IsDlgButtonChecked(IDC_CHECK2))
	{
		medit_hemGirth.SetReadOnly(false);

	}
	else if (BST_UNCHECKED == IsDlgButtonChecked(IDC_CHECK2)) {
		medit_hemGirth.SetReadOnly(true);

	}
}


void CSettingParaEntityDlg::OnBnClickedCheck3()
{
	// TODO: 在此添加控件通知处理程序代码
	if (BST_CHECKED == IsDlgButtonChecked(IDC_CHECK3))
	{
		m_shoulderWidth.SetReadOnly(false);

	}
	else if (BST_UNCHECKED == IsDlgButtonChecked(IDC_CHECK3)) {
		m_shoulderWidth.SetReadOnly(true);

	}
}


void CSettingParaEntityDlg::OnBnClickedCheck4()
{
	// TODO: 在此添加控件通知处理程序代码

	if (BST_CHECKED == IsDlgButtonChecked(IDC_CHECK4))
	{
		m_CEdit_hipGirth.SetReadOnly(false);

	}
	else if (BST_UNCHECKED == IsDlgButtonChecked(IDC_CHECK4)) {
		m_CEdit_hipGirth.SetReadOnly(true);

	}


}



void CSettingParaEntityDlg::OnBnClickedTuanchang()
{
	// TODO: 在此添加控件通知处理程序代码

	if (BST_CHECKED == IsDlgButtonChecked(IDC_TUANCHANG))
	{
		medit_backLength.SetReadOnly(false);

	}
	else if (BST_UNCHECKED == IsDlgButtonChecked(IDC_TUANCHANG)) {
		medit_backLength.SetReadOnly(true);

	}
}


void CSettingParaEntityDlg::OnEnChangeEditHipgirth()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CSettingParaEntityDlg::OnStnClickedStaticHip()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CSettingParaEntityDlg::OnBnClickedCheck7()
{
	// TODO: 在此添加控件通知处理程序代码


	if (BST_CHECKED == IsDlgButtonChecked(IDC_CHECK7))
	{
		medit_frontShoulderAngle.SetReadOnly(false);

	}
	else if (BST_UNCHECKED == IsDlgButtonChecked(IDC_CHECK7)) {
		medit_frontShoulderAngle.SetReadOnly(true);

	}

}


void CSettingParaEntityDlg::OnBnClickedRiblength()
{
	// TODO: 在此添加控件通知处理程序代码

	if (BST_CHECKED == IsDlgButtonChecked(IDC_RIBLENGTH))
	{
		medit_ribLength.SetReadOnly(false);

	}
	else if (BST_UNCHECKED == IsDlgButtonChecked(IDC_RIBLENGTH)) {
		medit_ribLength.SetReadOnly(true);

	}


}


void CSettingParaEntityDlg::OnEnChangeEditShoulder()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CSettingParaEntityDlg::OnBnClickedCheckRibwidth()
{
	// TODO: 在此添加控件通知处理程序代码
	if (BST_CHECKED == IsDlgButtonChecked(IDC_CHECK_RIBWIDTH))
	{
		medit_ribWidth.SetReadOnly(false);

	}
	else if (BST_UNCHECKED == IsDlgButtonChecked(IDC_CHECK_RIBWIDTH)) {
		medit_ribWidth.SetReadOnly(true);

	}

}


void CSettingParaEntityDlg::OnBnClickedMfccolorbutton1()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CSettingParaEntityDlg::OnBnClickedMfccolorbuttonCol()
{
	// TODO: 在此添加控件通知处理程序代码
	m_para.m_color = m_colorControlSelect.GetColor();

}


void CSettingParaEntityDlg::OnEnChangeEditXiongwei()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CSettingParaEntityDlg::OnEnChangeEditTunchang()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CSettingParaEntityDlg::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	int index = m_StyleCombo.GetCurSel();
	if (0 == index)
	{
		child_longitudinalKnitting.ShowWindow(SW_HIDE);
		child_TransverseKnitting.ShowWindow(SW_HIDE);
		child_SideKnitting.ShowWindow(SW_HIDE);

	}else if (1 == index){ 


		//child_longitudinalKnitting.ShowWindow(SW_HIDE);

		child_longitudinalKnitting.MoveWindow(dlgRect);
		child_longitudinalKnitting.ShowWindow(SW_SHOW);


	}
	else if (2 == index) {
		child_SideKnitting.MoveWindow(dlgRect);
		child_SideKnitting.ShowWindow(SW_SHOW);
	}
	else if (3 == index) {
		child_TransverseKnitting.MoveWindow(dlgRect);
		child_TransverseKnitting.ShowWindow(SW_SHOW);
	
	}

}


void CSettingParaEntityDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	/*
	CStyleSelectDlg * testCStyleSelectDlg;
	testCStyleSelectDlg = new CStyleSelectDlg();
	testCStyleSelectDlg->Create(IDD_DIALOG_STYLESELECT, this);
	testCStyleSelectDlg->ShowWindow(SW_SHOW);
	*/
	//testCStyleSelectDlg.DoModal();




}
