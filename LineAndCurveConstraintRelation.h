#pragma once
#include "ConstraintRelation.h"
#include "CPoint1.h"
#include "CLine.h"
#include "CVertex.h"
#include "CCurve.h"

class LineAndCurveConstraintRelation :
	public ConstraintRelation
{


public:
	LineAndCurveConstraintRelation(std::vector<std::pair<CVertex*, PointOnLinePosition>> pointVec);

	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();


private:

	//通过std::pair<CVertex*, LineStOrEd> 可以确定一个point

	std::vector<std::pair<CVertex*, PointOnLinePosition>> m_verPointPairVec;


};

