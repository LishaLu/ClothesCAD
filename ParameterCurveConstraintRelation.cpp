#include "pch.h"
#include "ParameterCurveConstraintRelation.h"


ParameterCurveConstraintRelation::ParameterCurveConstraintRelation(std::vector<CPoint1> pointVec):m_pointVec(pointVec)
{
}

CFigure * ParameterCurveConstraintRelation::getConstraintFigure() {

	return new CCurve(m_pointVec);

}

std::vector <CVertex*> ParameterCurveConstraintRelation::getConstraintCVertex() {
	return std::vector<CVertex*>();
}

ParameterCurveConstraintRelation::~ParameterCurveConstraintRelation()
{
}
