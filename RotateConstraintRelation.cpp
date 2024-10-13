#include "pch.h"
#include "RotateConstraintRelation.h"

RotateConstraintRelation::RotateConstraintRelation(CVertex *verLine, double angle, std::vector<CString> labelVec) :
	m_VerLine(verLine), m_angle(angle) {
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}


CFigure * RotateConstraintRelation::getConstraintFigure() {


	CLine verLine = *dynamic_cast<CLine*>(m_VerLine->getFigure());
	double a = m_angle / 180 * PI;

	double r = sqrt((verLine.m_st.getX() - verLine.m_ed.getX())*(verLine.m_st.getX() - verLine.m_ed.getX()) + (verLine.m_st.getY() - verLine.m_ed.getY())*(verLine.m_st.getY() - verLine.m_ed.getY()));
	CPoint1 endPoint = CPoint1(verLine.m_st.m_x + r * cos(a), verLine.m_st.m_y + r * sin(a));
	
	return new CLine(verLine.GetSt(), endPoint, m_labelVec[0], m_labelVec[1]);

}

std::vector <CVertex*> RotateConstraintRelation::getConstraintCVertex() {
	return std::vector <CVertex*> {m_VerLine};
}