#pragma once
#include "CPoint1.h"
#include "CLine.h"
#include "ConstraintRelation.h"
#include "CVertex.h"

class RayConstraintRelation:public ConstraintRelation
{

/*
这里为了减少代码量，重用了射线，因此会出现下面四种情况

起点变化：
1. 起点可以是一个固定的点，这里只代表一个固定point
2. 起点可以是一个线的起点或者终点，或者几分之几等

长度变化：
1. 长度可以是一个固定长度，比如m_length=50
2. 长度也可以是一个变的，比如与某个线相交的点为终点，那么这个长度就是变化的

*/




public:
	//这里有四种情况
	RayConstraintRelation(CPoint1 originPoint, double angle, double length, std::vector<CString> labelVec);
	RayConstraintRelation(CPoint1 originPoint, double angle, CVertex *crossVerLine, std::vector<CString> labelVec);
	RayConstraintRelation(CVertex *VerLine, PointOnLinePosition pos, double angle, double length, std::vector<CString> labelVec);
	RayConstraintRelation(CVertex *VerLine, PointOnLinePosition pos, double angle, CVertex *crossVerLine, std::vector<CString> labelVec);

	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();


private:
	//下面的两个参数可以表示一个点：表示一条线的起点或者终点都
	CVertex * m_VerLine; // 如果参数不传的话，默认值为空指针
	PointOnLinePosition m_pos;
	//上面与这个参数一个意思， 这里只是为了多态。
	CPoint1 m_originPoint;
	double m_angle;


	double m_length;
	CVertex * m_CrossVerLine;
};

