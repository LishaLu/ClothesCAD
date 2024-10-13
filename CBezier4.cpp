#include "pch.h"
#include "CBezier4.h"


CBezier4::CBezier4(CPoint1 st, CPoint1 ctrl1, CPoint1 ctrl2, CPoint1 ed, CString stLabel, CString edLabel)
	:m_st(st), m_ed(ed), m_ctrl1(ctrl1), m_ctrl2(ctrl2), m_stLabel(stLabel), m_edLabel(edLabel) {}
CBezier4::~CBezier4() {}
void CBezier4::draw(CDC* pDC) {

	CPoint pointArr[4];
	pointArr[0] = m_st;
	pointArr[1] = m_ctrl1; 
	pointArr[2] = m_ctrl2;
	pointArr[3] = m_ed;
	pDC->PolyBezier(pointArr, 4);
}


void  CBezier4::draw(CDC* pDC, CPen *pPen) {
	CPen *pOldPen = pDC->SelectObject(pPen);

	CPoint pointArr[4];
	pointArr[0] = m_st;
	pointArr[1] = m_ctrl1;
	pointArr[2] = m_ctrl2;
	pointArr[3] = m_ed;
	pDC->PolyBezier(pointArr, 4);

	pDC->SelectObject(pOldPen);
}

void  CBezier4::drawLabel(CDC* pDC, CSize lableOffset) {
	CFont font;
	font.CreatePointFont(70, _T("Times New Roman"));

	CFont * pOldFont = pDC->SelectObject(&font);
	pDC->TextOutW(m_st.getX() + labelOffset.cx, m_st.getY() + labelOffset.cy, m_stLabel);
	pDC->TextOutW(m_ed.getX() + labelOffset.cx, m_ed.getY() + labelOffset.cy, m_edLabel);
	pDC->SelectObject(pOldFont);
}
void  CBezier4::drawWithLabel(CDC* pDC, CPen *pPen, CSize lableOffset) {
	drawLabel(pDC, lableOffset);
	draw(pDC, pPen);
}


const CSize CBezier4::labelOffset = CSize(2, 2);