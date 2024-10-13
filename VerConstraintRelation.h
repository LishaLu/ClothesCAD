#pragma once
#include "ConstraintRelation.h"
#include "CVertex.h"

class VerConstraintRelation :
	public ConstraintRelation
{

public:
	VerConstraintRelation(CVertex *verLine, double distance, double m_height, std::vector<CString> labelVec);
	VerConstraintRelation(CVertex *verLine, CPoint1 otherPoint, std::vector<CString> labelVec);
	//VerConstraintRelation(CVertex *verLine, LineStOrEd pos,  double distance,  double m_height);
	VerConstraintRelation(CVertex *verLine, double distance, CVertex * VerLineHeight, double percent, std::vector<CString> labelVec);

	

public:


	CVertex * m_VerLine;  //����ֱ��
	//���뱻��ֱ�ߵ�������
	LineStOrEd m_pos;
	double m_distance;
	//�����ߵĳ���
	double m_height;

	CVertex *m_VerLineHeight;
	double m_percent;
//	CVertex * m_VerLineheight;  
//	double * m_jifenzhiji;  

	CPoint1 m_otherPoint;



public:
	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();

};

