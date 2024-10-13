#pragma once
#include "ConstraintRelation.h"
#include "CVertex.h"

class RotateConstraintRelation :
	public ConstraintRelation
{
private:
	double m_angle; //选择的角度
	CVertex * m_VerLine;  //被角度旋转线


public:
	RotateConstraintRelation(CVertex *verLine, double angle, std::vector<CString> labelVec);
	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();

};

