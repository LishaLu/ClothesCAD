#pragma once
#include "ConstraintRelation.h"
#include "CVertex.h"
class LineAndPointConstraintRelation :
	public ConstraintRelation
{
	/*
		��Լ����һ���ߵ��������յ� Լ����һ���ߵ�һ���㣬
		��Ϊline1 ���������յ���line2��һ���㣬 line2����һ������m_point
	
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

