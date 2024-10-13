#pragma once
#include "CFigure.h"
#include "CPoint1.h"
#include "EnumClass.h"
#include "PointOnLinePosition.h"

class CLine :public CFigure // 线类和点类没有继承关系。这里面要用到点运算符重载 is a 有继承  have a没有继承    在声明中继承，并包含头文件。
{
public:

	CLine();
	CLine(CPoint1 s, CPoint1 e, CString stLable=_T("T1"), CString edLable=_T("T2"));
	virtual void draw(CDC * pDC);
	virtual void draw(CDC * pDC, CPen * ptempPen);
	virtual void drawWithLabel(CDC * pDC, CPen * ptempPen, CSize lableOffset = CSize(2, 2));
	void saveLabel();
	void drawLabel(CDC *PDC, CSize lableOffset = CSize(2, 2));
	~CLine();


public:

	CPoint1 GetSt () const;
	CPoint1 GetEd () const;

	double Getlen();
	void SetLineABC();
	void SetSt(CPoint1 st);
	void SetEd(CPoint1 ed);

	bool  IsHoritalLine() const;
	bool  IsVerticalLine() const;

private:
	void JudgeStpointAndEdpoint();
public:

	//已知点       直线上的任意一点
//bool GetLineByPointAndSlope(CPoint1 point1, CPoint1 &point2)  // 1.这种写法对不
	static CLine GetHoritalLine(CPoint1 point1);
	static CLine GetVerticalLine(CPoint1 point1);
//	static CLine GetRayLine1(CPoint1 &origPoint, double length, double angle /*, CPoint1 & OutPt*/);
//	static CPoint1 GetExpandLine1(CPoint1 pt1, CPoint1 pt2, double nLen /*, CPoint1 &OutPt*/);
	static bool JudgeStpointAndEdpoint(CLine &line);

public://1 之前求的都是已知点来求直线   2现在需要的已知点和斜率来求直线。3 是转化成点了还是再定义成员变量呢
	   //4 return (CPoint1,CPoint)
	CPoint1 m_st;
	CPoint1 m_ed;
	CString m_stLabel;
	CString m_edLabel;
	static const  CSize labelOffset;
	double m_a;  //直线方程系数 ax+by+c=0；
	double m_b;
	double m_c;

public:
	static bool IsPointOnLine(CPoint1 point, CLine &line);//点在线上
	static bool IsLineParllLine(CLine line1, CLine line2);//平行
	static bool IsLineVerLine(CLine line1, CLine line2);// 垂直 
	static bool IsOverlap(CLine line1, CLine line2); //重叠
	static bool IsHaveSamePoint(CLine line1, CLine line2);// 共点
//	static CPoint1 GetCrossPoint(CLine l1, CLine l2); // 获得两条直线的交点


	/*延长线分为两种：
	情况1:   a...........b 如果m_len为正，则为: a.............b.....c
    情况2：  a...........b，如果m_len为负值，则为c....a............b
	*/
	static CPoint1 GetLineExpandPoint(const CLine &line, double nLen);    //延长线
	static CSize GetCSizeOnLineWithDistance(const CLine & line, double distance);
	static CPoint1 GetPointOnLineWithConstraint(const CLine & line, PointOnLinePosition constraint);
	static CLine GetRayLine(const CPoint1 &origPoint, double length, double angle); //射线
	static CLine GetRayLine(const CPoint1 &origPoint, CLine & crossLine, double angle);//射线

	//double类型的变量判断是否相同方法：|a-b|< 0.003
	static double Get2PointDistance(const CPoint1 &point1,const  CPoint1 &point2);
	static double GetPointLineDistance(CPoint1 &point, CLine &line);

/*
	static CPoint1 GetPointInLine(CLine line, double distance, FromPoint fromPoint, Side side);
	static CLine GetParllLine(CLine line, double d, Drection direction);  //获得平行线
	static CLine GetUniParellLine(CLine line1, CLine line2, CLine line3, double d);//获得唯一一条平行线，获得线段
	static CLine GetVerLine(CLine line, double distance, double height, Drection direction);
	static CLine GetRotateLine(CLine line, double b, Drection direction);// 获得一条直线的旋转曲线

*/

public:
	static CLine GetParllLine(const CLine & line, double d);

	static CLine GetVerticalLinebyOtherPoint( CLine & line, CPoint1 point);
	
	static CPoint1 GetCrossPoint( CLine & l1,  CLine & l2); // 获得两条直线的交点

	static CPoint1 GetLinePoint(const CLine & l1, LineStOrEd ops); // 获得线上的点，可能是开始点， 可能1/3， 2/3点


	static CPoint1 calLenOnLine(CLine line, double len);
	static CLine angleBisection(CLine line1, CLine line2, CPoint1 &commonPoint);
};

struct CLinePoint{
	CLine line;
	LineStOrEd ops;
};



