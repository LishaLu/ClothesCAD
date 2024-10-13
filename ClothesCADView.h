
// ClothesCADView.h: CClothesCADView 类的接口
//

#pragma once
#include "CPoint1.h"
#include "CLine.h"
#include "COrientGraph.h"
#include "CVertex.h"
#include "ConstraintRelation.h"
#include "ParaConstraintRelation.h"
#include "TestConstraintRelation.h"
#include "CSettingParaEntityDlg.h"
#include "SaveKeyPointsDlg.h"
#include "TestImagButtonDlg.h"
#include "CSideKnittingDlg.h"
#include "ClothesParameter.h"
#include "CStyleSelectDlg.h"
#include <map>


class CClothesCADView : public CView
{
protected: // 仅从序列化创建
	CClothesCADView() noexcept;
	DECLARE_DYNCREATE(CClothesCADView)

// 特性
public:
	CClothesCADDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

public:
	std::map<CString, CVertex *> cVer_map;

// 实现
public:
	virtual ~CClothesCADView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnSettingParaEntity();
	afx_msg void OnSelectStyle();
	afx_msg void OnClear();
	afx_msg void OnSaveKeyPoint();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()

private:
	CSettingParaEntityDlg *m_paradlg;

public: 
	ClothesParameter m_ClothesParameter;
	CString m_KeyPointLabels;

public:
	int m_mapCount;

};

#ifndef _DEBUG  // ClothesCADView.cpp 中的调试版本
inline CClothesCADDoc* CClothesCADView::GetDocument() const
   { return reinterpret_cast<CClothesCADDoc*>(m_pDocument); }
#endif

