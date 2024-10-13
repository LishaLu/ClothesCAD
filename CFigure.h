#pragma once
#include <afxwin.h>
const double PI = 3.1416;
class CFigure
{

public:
	CFigure();
	~CFigure();
	virtual void draw(CDC* pDC) = 0;//比较早的，虚函数
	virtual void draw(CDC * pDC, CPen * ptempPen) = 0;
	virtual void drawWithLabel(CDC *pDC, CPen * ptempPen,  CSize lableOffset = CSize(2, 2)) {};

public:
	int m_entityType;  

};



