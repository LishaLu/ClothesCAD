#include "pch.h"
#include "CArc.h"




CArc::~CArc()
{
}

void CArc::draw(CDC* pDC) {

	pDC->Arc(m_rect, m_point1, m_point2);
	

}
void CArc::draw(CDC * pDC, CPen * ptempPen) {

	CPen *pOldPen = pDC->SelectObject(ptempPen);

	//pDC->Rectangle(&m_rect);

	pDC->Arc(m_rect, m_point1, m_point2);
	pDC->SelectObject(pOldPen);


}
