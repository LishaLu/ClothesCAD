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

	//ͨ��std::pair<CVertex*, LineStOrEd> ����ȷ��һ��point

	std::vector<std::pair<CVertex*, PointOnLinePosition>> m_verPointPairVec;


};

