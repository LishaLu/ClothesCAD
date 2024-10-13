#include "pch.h"
#include "LineAndBezierConstraintRelation.h"

LineAndBezierConstraintRelation::LineAndBezierConstraintRelation(std::pair<CVertex*, PointOnLinePosition> point1,
	std::pair<CVertex*, PointOnLinePosition> point2, CPoint1 ctrl1, CPoint1 ctrl2, std::vector<CString> labelVec) :
	m_point1(point1), m_point2(point2), m_ctrl1(ctrl1), m_ctrl2(ctrl2) {
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}

CFigure * LineAndBezierConstraintRelation::getConstraintFigure() {


	CLine line1 = *dynamic_cast<CLine*>((m_point1.first)->getFigure());
	CPoint1 point1 = CLine::GetPointOnLineWithConstraint(line1, m_point1.second);

	CLine line2 = *dynamic_cast<CLine*>((m_point2.first)->getFigure());
	CPoint1 point2 = CLine::GetPointOnLineWithConstraint(line2, m_point2.second);

	return new CBezier4(point1, m_ctrl1, m_ctrl2, point2, m_labelVec[0], m_labelVec[1]);


}

std::vector <CVertex*> LineAndBezierConstraintRelation::getConstraintCVertex() {

	return std::vector <CVertex*>{m_point1.first, m_point2.first};
}

