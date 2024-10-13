#pragma once
#include "ConstraintRelation.h"
#include "CFigure.h"
#include "CLine.h"

class CVertex;
class ParaConstraintRelation :
	public ConstraintRelation
{
public: 
	ParaConstraintRelation(CVertex *paraLine, CVertex *crossLine1, CVertex * crossLine2, double d, std::vector<CString> labelVe);

public:

	CVertex * m_ParaLine;  //��ƽ����
	CVertex * m_CrossLine1; //�ཻ��1
	CVertex * m_CrossLine2; //�ཻ��2
	double m_distance;

public:
	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();

	

/*

	enum Relate {//��

		Paral_KnowLineP, Paral_ConLenLine1, Paral_ConLenLine2,   // 1��ƽ���ߣ�3���ڵ㣨3���ߣ�--   ���� ��֪��  Լ�������ߣ�

		Verti_KnowLineV,                             // 2����ֱ��  ��һ���ڵ㣩 

		Rotat_KnowLineRSt, Rotat_KnowLineREd, Rotat_CrossPointR, // 3 ��ת�ߣ��������ڵ�

		LinePoint_KnowLineTSt, LinePoint_KnowLineTEd, LinePoint_KnowPointT,  // 4 �ߵ�  �����ڵ㣺 ��֪һ���� + һ����

		Expan_KnowLineESt, Expan_KnowLineEEd, Expan_ExpanPointE, // 5 �ӳ���

		Ray_KnowLineRSt, Ray_KnowLineREd, Ray_RayPointR,   // 6 ����

		PointIsSt, PointIsEd,
		KnowLineStartStT, KnowLineEndStT, KnowPointStT,
		KnowLineStartEdT, KnowLineEndEdT, KnowPointEdT,    //�������ߵ�ʱ����������ڵ� ��һ���ߣ�һ���㣩

		Curve_CurveOrgPoint,
	};

*/



};

