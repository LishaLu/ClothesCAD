#pragma once
#include "ConstraintRelation.h"
#include "CPoint1.h"
#include "CVertex.h"

#include "CPoint1.h"
#include "CLine.h"
#include "ConstraintRelation.h"
#include "CVertex.h"
class RatioConstraintRelation :
	public ConstraintRelation
{
public:
	RatioConstraintRelation(CVertex *vertex, double percent, CPoint1 point, std::vector<CString> labelVec) :
		m_vertex(vertex), m_percent(percent), m_knownPoint(point) {
		assert(labelVec.size() == 2);
		m_labelVec = labelVec;
	}

public:
	CFigure * RatioConstraintRelation::getConstraintFigure();
	std::vector <CVertex*> RatioConstraintRelation::getConstraintCVertex();

public:
	~RatioConstraintRelation() {
		if (m_vertex != NULL)
			free(m_vertex);
	}
private:
	CVertex * m_vertex;
	double m_percent;
	CPoint1 m_knownPoint;

};

