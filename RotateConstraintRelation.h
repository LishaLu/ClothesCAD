#pragma once
#include "ConstraintRelation.h"
#include "CVertex.h"

class RotateConstraintRelation :
	public ConstraintRelation
{
private:
	double m_angle; //ѡ��ĽǶ�
	CVertex * m_VerLine;  //���Ƕ���ת��


public:
	RotateConstraintRelation(CVertex *verLine, double angle, std::vector<CString> labelVec);
	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();

};

