#pragma once
#include "CFigure.h"
#include "CPoint1.h"
#include "CVertex.h"
class CArc :
	public CFigure
{
public:
	CArc(CRect rect, CPoint1 point1, CPoint1 point2) :m_rect(rect), m_point1(point1), m_point2(point2) {}
	~CArc();

public:
	virtual void draw(CDC* pDC);
	virtual void draw(CDC * pDC, CPen * ptempPen);

public :
	CRect m_rect;
	CPoint1 m_point1;
	CPoint1 m_point2;
};

