#pragma once
#include "ConstraintRelation.h"
#include "CVertex.h"
class ExpandConstraintRelation :
	public ConstraintRelation
{
	

public:
	ExpandConstraintRelation(CVertex *expandLine, double len, std::vector<CString> labelVec);
	//ExpandConstraintRelation(CVertex *vertex, LineStOrEd pos, CVertex *crossVerLine);
	


	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();


private:
	CVertex * m_expandLine;  //被延长线， 可以向前延长也可以向后延长
	double m_len;           //len为+， 则为向后延长， len 为-， 则为向前延长


};

