#pragma once
#include "CFigure.h"
#include "ConstraintRelation.h"
#include "CLine.h"
#include "CCurve.h"
#include <vector>

class CVertex
{


public:
	CVertex();
	CVertex(CLine line);
	CVertex(CCurve curve);
	CVertex(ConstraintRelation * consRelate, CString id = CString(""));
	CVertex::~CVertex();



public:
	CFigure * getFigure() { return m_figure; };
	void  calculateFigure();
	void draw(CDC *pDC);
	void draw(CDC *pDC, CPen *pPen);
	void drawWithLabel(CDC *pDC, CPen *pPen, CSize lableOffset = CSize(2, 2));

public:
	//用来表示受哪些实体的直接影响
	std::vector <CVertex*> m_ConstraintRelationFrom;

	//用来表示直接影响哪些实体
	std::vector <CVertex*> m_ConstraintRelationTo;

public:
    CString  m_id;  // 标识这条线 ab   把这些线都放在一个map里。 <id,CVertex*>  基类 抽象类 定义方法和属性   接口 ：定义方法

private: 
	CFigure * m_figure;
	ConstraintRelation * m_consRelate;//约束   
};

