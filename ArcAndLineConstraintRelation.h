#pragma once
#include "ConstraintRelation.h"
#include "CPoint1.h"
#include "CLine.h"
#include "CArc.h"

class ArcAndLineConstraintRelation :
	public ConstraintRelation
{
public:
	ArcAndLineConstraintRelation(CVertex * vertex1, PointOnLinePosition pos1, CVertex * vertex2, PointOnLinePosition pos2, Quadrant quadrant, std::vector<CString> labelVec)
		: m_Vertex1(vertex1), m_pos1(pos1), m_Vertex2(vertex2), m_pos2(pos2), m_quadrant(quadrant){}
	~ArcAndLineConstraintRelation();

	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();

public:
	CVertex * m_Vertex1;
	PointOnLinePosition m_pos1;

	CVertex * m_Vertex2;
	PointOnLinePosition m_pos2;

	Quadrant m_quadrant;
};

