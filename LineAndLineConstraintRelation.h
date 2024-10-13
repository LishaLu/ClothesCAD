#pragma once
#include "ConstraintRelation.h"
#include "CVertex.h"
class LineAndLineConstraintRelation :
	public ConstraintRelation
{
	/*
	��Լ����2���ߵ��������յ� Լ����һ���ߵ�һ���㣬
	��Ϊline1 ���������յ���line3��һ����
	  line2 ���������յ���line3��һ����
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