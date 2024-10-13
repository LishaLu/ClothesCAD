#include "pch.h"
#include "LineAndLineConstraintRelation.h"

LineAndLineConstraintRelation::LineAndLineConstraintRelation(CVertex * firstVerLine, PointOnLinePosition firstPos, CVertex * secondVerLine, PointOnLinePosition secondPos, std::vector<CString> labelVec) :
	 m_FirstVerLine(firstVerLine),m_FirstPos(firstPos), m_SecondVerLine(secondVerLine), m_SecondPos(secondPos) {
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}

CFigure * LineAndLineConstraintRelation::getConstraintFigure() {

	CPoint1 point1(0, 0);
	CPoint1 point2(0, 0);
	CLine firstVerLine = *dynamic_cast<CLine*>(m_FirstVerLine->getFigure());
	CLine secondVerLine = *dynamic_cast<CLine*>(m_SecondVerLine->getFigure());

	point1 = CLine::GetPointOnLineWithConstraint(firstVerLine, m_FirstPos);
	point2 = CLine::GetPointOnLineWithConstraint(secondVerLine, m_SecondPos);

	return new CLine(point1, point2, m_labelVec[0], m_labelVec[1]);
}

std::vector <CVertex*> LineAndLineConstraintRelation::getConstraintCVertex() {
	return std::vector <CVertex*> {m_FirstVerLine, m_SecondVerLine};
}