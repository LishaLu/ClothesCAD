#pragma once
#include "ConstraintRelation.h"
#include "CPoint1.h"
#include "CBezier4.h"
#include "CLine.h"
#include "CVertex.h"
#include "EnumClass.h"

class LineAndBezierConstraintRelation :
	public ConstraintRelation
{

public:
	LineAndBezierConstraintRelation(std::pair<CVertex*, PointOnLinePosition> point1, std::pair<CVertex*, PointOnLinePosition> point2, CPoint1 ctrl1, CPoint1 ctrl2, std::vector<CString> labelVec);

	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();


private:

	//通过std::pair<CVertex*, LineStOrEd> 可以确定一个point

	std::pair<CVertex*, PointOnLinePosition> m_point1;
	std::pair<CVertex*, PointOnLinePosition> m_point2;
	CPoint1 m_ctrl1;
	CPoint1 m_ctrl2;


};
