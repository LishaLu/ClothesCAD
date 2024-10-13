#include "pch.h"
#include "LineAndCurveConstraintRelation.h"



LineAndCurveConstraintRelation::LineAndCurveConstraintRelation(std::vector<std::pair<CVertex*, PointOnLinePosition>> verPointPairVec) :
	m_verPointPairVec(verPointPairVec) {}


CFigure * LineAndCurveConstraintRelation::getConstraintFigure() {

	std::vector <CPoint1> pointVec;

	for (std::pair<CVertex*, PointOnLinePosition> & tmp : m_verPointPairVec) {

		CVertex* v = tmp.first;
		CLine verLine = *dynamic_cast<CLine*>((tmp.first)->getFigure());
		pointVec.push_back(CLine::GetPointOnLineWithConstraint(verLine, tmp.second));
	}
	return new CCurve(pointVec);

}

std::vector <CVertex*> LineAndCurveConstraintRelation::getConstraintCVertex() {
	std::vector <CVertex*> result;
	for (auto & tmp : m_verPointPairVec) {
		result.push_back(tmp.first);
	}
	return result;
}



