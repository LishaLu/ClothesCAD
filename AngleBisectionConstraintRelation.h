#pragma once
#include "ConstraintRelation.h"
#include "CVertex.h"

class AngleBisectionConstraintRelation :
	public ConstraintRelation
{
public:
	AngleBisectionConstraintRelation(CVertex *VerLine1, CVertex *VerLine2, double len , std::vector<CString> labelVec);
	~AngleBisectionConstraintRelation();

public:
	CVertex *m_VerLine1;
	CVertex *m_VerLine2;
	double m_len;

public:
	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();

};

