#pragma once
#include "CFigure.h"
#include <vector>
#include "CPoint1.h"
class CCurve :
	public CFigure
{

public:
	CCurve(std::vector<CPoint1> originPoint);
	~CCurve();

private:
	void line4Point(std::vector<CPoint1> p, CDC* pDC);
	CPoint1  bezier3func(float uu, std::vector<CPoint1> & controlP);

public:
	void draw(CDC* pDC);
	void draw(CDC * pDC, CPen * ptempPen);

public: 
	std::vector<CPoint1> m_curvePoint;
	std::vector <CPoint1> m_originPoint;

	//曲线的平滑程度
	double m_smooth_value = 0.5;

};


