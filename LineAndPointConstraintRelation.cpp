#include "pch.h"
#include "LineAndPointConstraintRelation.h"


LineAndPointConstraintRelation::LineAndPointConstraintRelation(CVertex * verLine, PointOnLinePosition pos, CPoint1 point, std::vector<CString> labelVec) :
	m_VerLine(verLine), m_pos(pos), m_point(point) {
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;

}

CFigure * LineAndPointConstraintRelation::getConstraintFigure() {

	CLine verLine = *dynamic_cast<CLine*>(m_VerLine->getFigure());
	CPoint1 temp_point = CLine::GetPointOnLineWithConstraint(verLine, m_pos);
	return new CLine(temp_point, m_point,m_labelVec[0], m_labelVec[1]);

}

std::vector <CVertex*> LineAndPointConstraintRelation::getConstraintCVertex() {
		return std::vector <CVertex*> {m_VerLine};
}
