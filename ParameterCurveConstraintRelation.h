#pragma once
#include "ConstraintRelation.h"
#include "CPoint1.h"
#include "CCurve.h"
#include "CVertex.h"

class ParameterCurveConstraintRelation :
	public ConstraintRelation
{
public:
	ParameterCurveConstraintRelation(std::vector<CPoint1> pointVec);
	~ParameterCurveConstraintRelation();


	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();


private:


	std::vector<CPoint1> m_pointVec;

};

