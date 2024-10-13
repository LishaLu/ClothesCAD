#pragma once
#include <iostream>
#include "CFigure.h"

class CPoint1 : CFigure
{
public:
	//构造函数重载， 可以有多个构造函数
	CPoint1() {}
	CPoint1(double x, double y);          // *. 构造函数,为啥有两个啊
	CPoint1(const CPoint1 & p);
	~CPoint1() {}
	virtual void draw(CDC* pDC);
	virtual void draw(CDC * pDC, CPen * ptempPen);

public:
	double getX() const;
	double getY() const;
	void SetX(double x);
	void SetY(double y);


public:

	CPoint1 operator +(CPoint1 p);
	CPoint1 operator +(CSize size);
	CPoint1 operator -(CPoint1 p);
	CPoint1 operator *(double d);
	CPoint1 operator /(int d);

	bool CPoint1::operator==(CPoint1 p);
	bool CPoint1::operator!=(CPoint1 p);
	bool CPoint1::operator<(CPoint1 p);
	bool CPoint1::operator>(CPoint1 p);
	double operator*(CPoint1 p);  // 内积 点乘
	double operator^(CPoint1 p); //  外积 叉乘

	friend std::ostream& operator<<(std::ostream& os, const CPoint1 &p);
	friend std::istream& operator>>(std::istream& is, CPoint1 &p); // 3.友元函数是不是不能拆分到CPP中？？?是不是这样也行？？?

public:

	operator CPoint();

public:
	static double Distance(const CPoint1 &pt1, const CPoint1 &pt2);
	static double XDistance(const CPoint1 &pt1, const CPoint1 &pt2);
	static double YDistance(const CPoint1 &pt1, const CPoint1 &pt2);



public:
	double m_x;
	double m_y;
};


