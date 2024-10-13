#pragma once
#include "ConstraintRelation.h"
#include "CVertex.h"
class LineAndPointConstraintRelation :
	public ConstraintRelation
{
	/*
		此约束是一个线的起点或者终点 约束另一个线的一个点，
		即为line1 的起点或者终点是line2的一个点， line2的另一个点是m_point
	
	*/
public:
	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();
	LineAndPointConstraintRelation(CVertex * verLine, PointOnLinePosition pos, CPoint1 point, std::vector<CString> labelVe);

private:
	CVertex * m_VerLine;
	PointOnLinePosition m_pos;
	CPoint1  m_point;

};

