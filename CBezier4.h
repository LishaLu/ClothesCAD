
#pragma once
#include "CFigure.h"
#include "CPoint1.h"
#include <vector>
class CBezier4 :
	public CFigure
{

public:
	CBezier4(CPoint1 st, CPoint1 ed, CPoint1 ctrl1, CPoint1 ctrl2, CString stLabel, CString edLabel);
	~CBezier4();

private:

	void draw(CDC* pDC);
	void draw(CDC * pDC, CPen * ptempPen);

	virtual void drawWithLabel(CDC * pDC, CPen * ptempPen, CSize lableOffset = CSize(2, 2));
	void drawLabel(CDC *PDC, CSize lableOffset = CSize(2, 2));


private:
	CPoint1 m_st;
	CPoint1 m_ed;
	CString m_stLabel;
	CString m_edLabel;
	CPoint1 m_ctrl1;
	CPoint1 m_ctrl2;

	static const  CSize labelOffset;
};







