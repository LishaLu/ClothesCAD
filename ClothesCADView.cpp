
// ClothesCADView.cpp: CClothesCADView 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "ClothesCAD.h"
#endif

#include "ClothesCADDoc.h"
#include "ClothesCADView.h"
#include "GlobalVar.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CClothesCADView

IMPLEMENT_DYNCREATE(CClothesCADView, CView)

BEGIN_MESSAGE_MAP(CClothesCADView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CClothesCADView::OnFilePrintPreview)
	ON_COMMAND(ID_EDIT_SETTING_PARA, &CClothesCADView::OnSettingParaEntity)
	ON_COMMAND(ID_SELECT_STYLE, &CClothesCADView::OnSelectStyle)
	ON_COMMAND(ID_CLEAR, &CClothesCADView::OnClear)
	ON_COMMAND(ID_SAVE_KEY_POINTS, &CClothesCADView::OnSaveKeyPoint)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()






// CClothesCADView 构造/析构

CClothesCADView::CClothesCADView() noexcept
{
	m_mapCount = 0;
	// TODO: 在此处添加构造代码

}

CClothesCADView::~CClothesCADView()
{
}

BOOL CClothesCADView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CClothesCADView 绘图

void CClothesCADView::OnDraw(CDC* pDC)
{

	// TODO: 在此处为本机数据添加绘制代码
	CClothesCADDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (m_ClothesParameter.m_bodyLength != 0 && m_ClothesParameter.m_bustGirth != 0) {
		//CSize offset = CSize(20 * (m_mapCount - 1), 20 * (m_mapCount - 1));
		CSize offset = CSize(0,0);

		// 1.纵向编织-V领套衫——1
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_3D_Style1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style1_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style1_back1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		////*
		////TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style1_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		////TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style1_Sleeve_left(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		////*
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style1_Sleeve_right(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style1_Sleeve_left1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		
		// 下面是没有标记的
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_3D1_Style1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style1_front1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style1_back2(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style1_Sleeve_right1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style1_Sleeve_left2(pDC, m_ClothesParameter, offset /*,cVer_map*/);


		// 1. 纵向编织-V领开衫——2
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style2_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style2_Sleeve_left(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style2_Sleeve_right(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style2_front_left(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_2D_Style2_front_right(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_LongitudinalKnitting_3D_Style2(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//  
		 //2. 侧向编织-5个裙子例子
    //      TestConstraintRelation::TestDraw_SideKnitting_3D(pDC, m_ClothesParameter,offset /*,cVer_map*/);
		  //TestConstraintRelation::TestDraw_SideKnitting_2D_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		
		// 下面是正确标记的
		//TestConstraintRelation::TestDraw_SideKnitting_2D_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_SideKnitting_2D_front1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_SideKnitting_3D1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//
			
		// 下面是正确没有标记的  大论文中的例子
		//TestConstraintRelation::TestDraw_SideKnitting_2D_back1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_SideKnitting_2D_front2(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_SideKnitting_3D2(pDC, m_ClothesParameter, offset /*,cVer_map*/);



		// 2 侧向编织-上衣1-小论文中的例子
		TestConstraintRelation::TestDraw_SideKnitting_2D_Style1_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		TestConstraintRelation::TestDraw_SideKnitting_2D_Style1_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		TestConstraintRelation::TestDraw_SideKnitting_3D_Style1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
	


		// 2 侧向编织-上衣2  同示例中一样，但有错
		//TestConstraintRelation::TestDraw_SideKnitting_3D_Style2(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_SideKnitting_2D_Style2_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_SideKnitting_2D_Style2_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		
		// 2 侧向编织-裙子2
		//TestConstraintRelation::TestDraw_SideKnitting_3D_Style3(pDC, m_ClothesParameter, offset /*,cVer_map*/);

		// 3. 横向编织
		//TestConstraintRelation::TestDrawV_TransverseKnitting_3D_Style1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_TransverseKnitting_2D_Style1_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_TransverseKnitting_2D_Style1_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		
		// 4. 展开编织-款式1
		//TestConstraintRelation::TestDraw_UnfoldKnitting_3D_Style(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_UnfoldKnitting_2D1_Style1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_UnfoldKnitting_2D1_Style1_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_UnfoldKnitting_2D1_Style1_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);

		// 4. 展开编织-款式2
		//TestConstraintRelation::TestDraw_UnfoldKnitting_2D2_Style2_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_UnfoldKnitting_2D2_Style2_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		
		// 5. 分割编织——口袋
		//原来的那3个--借助展开编织的
		//TestConstraintRelation::TestDraw_PartitionKnitting_2D_Style1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_PartitionKnitting_2D_Style1_Sleeve_right(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_PartitionKnitting_2D_Style1_Sleeve_left(pDC, m_ClothesParameter, offset /*,cVer_map*/);

		//后中分割--改后的
		//TestConstraintRelation::TestDraw_PartitionKnitting_3D_Style(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_PartitionKnitting_2D_Style_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_PartitionKnitting_2D_Style_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_PartitionKnitting_2D_Style_Sleeve_right(pDC, m_ClothesParameter, offset /*,cVer_map*/);

		//TestConstraintRelation::TestDraw_PartitionKnitting_2D_Style2_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_PartitionKnitting_2D_Style2_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);



		// 6. 翻折编织1
		//TestConstraintRelation::TestDraw_ReversKnitting_3D_Style1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_ReversKnitting_2D_Style1_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_ReversKnitting_2D_Style1_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		// 6. 翻折编织2
		//TestConstraintRelation::TestDraw_ReversKnitting_3D_Style2(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_ReversKnitting_2D_Style2_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_ReversKnitting_2D_Style2_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		// 6. 翻折编织3
		//TestConstraintRelation::TestDraw_ReversKnitting_3D_Style3(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_ReversKnitting_2D_Style3_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_ReversKnitting_2D_Style3_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
	    
		// 7. 不对称编织

  //      TestConstraintRelation::TestDrawV_AsymmetricKnitting_3D_Style1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_AsymmetricKnitting_2D_Style2_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDraw_AsymmetricKnitting_2D_Style2_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);


		// 8 交错编织-款式1
		//TestConstraintRelation::TestDrawV_InterKnitting_3D_Style1(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style1_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style1_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style1_Sleeve_left(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style1_Sleeve_right(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style1_Hat(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style1_Pocket(pDC, m_ClothesParameter, offset /*,cVer_map*/);


		// 8 交错编织-款式2
		//TestConstraintRelation::TestDrawV_InterKnitting_3D_Style2(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style2_front(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style2_back(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style2_Sleeve_left(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style2_Sleeve_right(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style2_Hat(pDC, m_ClothesParameter, offset /*,cVer_map*/);
		//TestConstraintRelation::TestDrawV_InterKnitting_2D_Style2_Pocket(pDC, m_ClothesParameter, offset /*,cVer_map*/);



	}



	//pDC->MoveTo(CPoint(100, 100));
	//pDC->LineTo(CPoint(200, 200));

	
	/*
	TestConstraintRelation::TestDrawPara(pDC);
	TestConstraintRelation::TestDrawVer(pDC);
	TestConstraintRelation::TestDrawRotate(pDC);
	TestConstraintRelation::TestDrawRay(pDC);
	TestConstraintRelation::TestDrawExpand(pDC);
	TestConstraintRelation::TestRatioVer(pDC);
	*/
	
	//TestRatioVer::
	//TestConstraintRelation::TestDraw(pDC);
	
	/*TestConstraintRelation::TestCurve(pDC);*/

	// V领套衫
   // TestConstraintRelation::TestDrawV_Back1(pDC, cVer_map);
	


}


// CClothesCADView 打印

void CClothesCADView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

void CClothesCADView::OnSettingParaEntity()
{
	
	
	CSettingParaEntityDlg paradlg;
//	m_paradlg = &paradlg;
	paradlg.Init(m_ClothesParameter);
	paradlg.DoModal();
	
	
	/*
	TestImagButtonDlg testImagButtonDlg;
	testImagButtonDlg.DoModal();
	
	
	SideKnittingDlg testSideKnittingDlg;
	testSideKnittingDlg.DoModal();
	*/

	/*
	CStyleSelectDlg testCStyleSelectDlg;
	testCStyleSelectDlg.DoModal();
	*/



	


}


void CClothesCADView::OnSelectStyle()
{

	CStyleSelectDlg testCStyleSelectDlg;
	testCStyleSelectDlg.DoModal();

}

void CClothesCADView::OnClear()
{
	m_ClothesParameter.Clear();
	keyPoints.clear();
	this->Invalidate();
}


void CClothesCADView::OnSaveKeyPoint() {
	SaveKeyPointsDlg keyPointDlg;
	keyPointDlg.Init(m_KeyPointLabels);
	keyPointDlg.DoModal();
}

BOOL CClothesCADView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CClothesCADView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CClothesCADView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void CClothesCADView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CClothesCADView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CClothesCADView 诊断

#ifdef _DEBUG
void CClothesCADView::AssertValid() const
{
	CView::AssertValid();
}

void CClothesCADView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CClothesCADDoc* CClothesCADView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CClothesCADDoc)));
	return (CClothesCADDoc*)m_pDocument;
}
#endif //_DEBUG


// CClothesCADView 消息处理程序
