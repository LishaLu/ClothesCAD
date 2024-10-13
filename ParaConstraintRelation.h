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

	CVertex * m_ParaLine;  //被平行线
	CVertex * m_CrossLine1; //相交线1
	CVertex * m_CrossLine2; //相交线2
	double m_distance;

public:
	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();

	

/*

	enum Relate {//边

		Paral_KnowLineP, Paral_ConLenLine1, Paral_ConLenLine2,   // 1（平行线：3个节点（3条线）--   顶点 已知线  约束长度线）

		Verti_KnowLineV,                             // 2（垂直线  是一个节点） 

		Rotat_KnowLineRSt, Rotat_KnowLineREd, Rotat_CrossPointR, // 3 旋转线，是两个节点

		LinePoint_KnowLineTSt, LinePoint_KnowLineTEd, LinePoint_KnowPointT,  // 4 线点  两个节点： 已知一条线 + 一个点

		Expan_KnowLineESt, Expan_KnowLineEEd, Expan_ExpanPointE, // 5 延长线

		Ray_KnowLineRSt, Ray_KnowLineREd, Ray_RayPointR,   // 6 射线

		PointIsSt, PointIsEd,
		KnowLineStartStT, KnowLineEndStT, KnowPointStT,
		KnowLineStartEdT, KnowLineEndEdT, KnowPointEdT,    //（任意线的时候就是两个节点 （一个线，一个点）

		Curve_CurveOrgPoint,
	};

*/



};

