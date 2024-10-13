#pragma once
#include "ConstraintRelation.h"
#include "CVertex.h"
class LineAndLineConstraintRelation :
	public ConstraintRelation
{
	/*
	此约束是2个线的起点或者终点 约束另一个线的一个点，
	即为line1 的起点或者终点是line3的一个点
	  line2 的起点或者终点是line3的一个点
*/

public:
	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();

	LineAndLineConstraintRelation(CVertex *, PointOnLinePosition, CVertex *, PointOnLinePosition, std::vector<CString> labelVe);

private:
	CVertex * m_FirstVerLine;
	PointOnLinePosition  m_FirstPos;

	CVertex * m_SecondVerLine;
	PointOnLinePosition m_SecondPos;

};