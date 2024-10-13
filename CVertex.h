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
	//������ʾ����Щʵ���ֱ��Ӱ��
	std::vector <CVertex*> m_ConstraintRelationFrom;

	//������ʾֱ��Ӱ����Щʵ��
	std::vector <CVertex*> m_ConstraintRelationTo;

public:
    CString  m_id;  // ��ʶ������ ab   ����Щ�߶�����һ��map� <id,CVertex*>  ���� ������ ���巽��������   �ӿ� �����巽��

private: 
	CFigure * m_figure;
	ConstraintRelation * m_consRelate;//Լ��   
};

