#include "pch.h"
#include "ParaConstraintRelation.h"
#include "CVertex.h"


ParaConstraintRelation::ParaConstraintRelation(CVertex *paraLine, CVertex *crossLine1, CVertex * crossLine2, double d, std::vector<CString> labelVec)
	:m_ParaLine(paraLine), m_CrossLine1(crossLine1), m_CrossLine2(crossLine2), m_distance(d * PIXELPERCM ) {
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}



CFigure * ParaConstraintRelation::getConstraintFigure() {
	CLine *result;
	CLine paraLine = *dynamic_cast<CLine*>(m_ParaLine->getFigure());
	CLine crossLine1 = *dynamic_cast<CLine*>(m_CrossLine1->getFigure());
	CLine crossLine2 = *dynamic_cast<CLine*> (m_CrossLine2->getFigure());

	CLine tempLine = CLine::GetParllLine(paraLine, m_distance);

	CPoint1 point1 = CLine::GetCrossPoint(tempLine, crossLine1);
	CPoint1 point2 = CLine::GetCrossPoint(tempLine, crossLine2);
	if ((point1 != CPoint1(-1, -1)) && (point1 != CPoint1(-1, -1))) {
		result = new CLine(point1, point2, m_labelVec[0], m_labelVec[1]);
	}
	else {
		result = new CLine(CPoint1(0.0, 0.0), CPoint1(0.0, 0.0));
	}

	return result;

}

std::vector <CVertex*> ParaConstraintRelation::getConstraintCVertex() {
	return std::vector <CVertex*> {m_ParaLine, m_CrossLine1, m_CrossLine2};
}