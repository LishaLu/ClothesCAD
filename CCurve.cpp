#include "pch.h"
#include "CCurve.h"

CCurve::CCurve(std::vector<CPoint1> originPoint) :m_originPoint(originPoint) {
	std::vector<CPoint1> midpoints;
	midpoints.resize(originPoint.size());   //* 用下标的时候，就要用resize，要是用push_back 的时候就不需要，按顺序放的
	// 生成中间
	for (int i = 0; i != originPoint.size(); i++) {
		int nexti = (i + 1) % originPoint.size();
		midpoints[i] = (originPoint[i] + originPoint[nexti]) / 2;  // 生成中点c1( x1+x2)/2
		//0->x0,x1中点， 1->x1,x2中点
	   //  midpoints[1]=  c1       originPoint[1]= x1  + originPoint[2] = x2 
	}
	//求距离
	std::vector <double> lenVec;
	lenVec.resize(originPoint.size());
	for (int i = 0; i != originPoint.size(); i++) {
		int nexti = (i + 1) % originPoint.size();
		//lenVec[0] => x0, x1 之间距离
		lenVec[i] = CPoint1::Distance(originPoint[i], originPoint[nexti]);
	}

	for (int i = 0; i < originPoint.size(); i++) { //  i=1  nexti=2   backi=0  originPoint.size()=4
		int nexti = (i + 1) % originPoint.size();
		int backi = (i + originPoint.size() - 1) % originPoint.size();

		double k0 = lenVec[backi] / (lenVec[backi] + lenVec[i]);// i = 1 , k0 => x0x1/（x0x1 + x1x2） k0=  len0/len0+len1
		double k1 = lenVec[i] / (lenVec[i] + lenVec[nexti]);//i = 1 , k1 => x0x1/（x0x1 + x1x2）  k1=  len1/len1+len2

		//生成中间点
		CPoint1 m0 = midpoints[backi] + (midpoints[i] - midpoints[backi]) * k0;
		CPoint1 m1 = midpoints[i] + (midpoints[nexti] - midpoints[i]) * k1;

		// 生成控制点
		// 博客中的只用C2是不是因为 只有c2是 x1和 x2的中点。我的代码中是c1是 x1和 x2的中点。
	//	double smooth_value = 0.5;
		CPoint1 ctr1 = originPoint[i] + (midpoints[i] - m0) * m_smooth_value;
		CPoint1 ctr2 = originPoint[nexti] + (midpoints[i] - m1) * m_smooth_value;

		if (i < originPoint.size() -1) {
			m_curvePoint.push_back(originPoint[i]);
			m_curvePoint.push_back(ctr1);
			m_curvePoint.push_back(ctr2);
		}
		else {
			m_curvePoint.push_back(originPoint[originPoint.size()-1]);
			break;
		}
	}
}

CCurve::~CCurve() {}


void  CCurve::line4Point(std::vector<CPoint1> controlP, CDC* pDC) {
	const float delta = 0.1;

	for (double i = 1; i >= 0; i = i - delta)
		pDC->LineTo(bezier3func(i, controlP));
}

// controlP start, crt1, crt2, end
CPoint1 CCurve:: bezier3func(float uu, std::vector<CPoint1> & controlP) {
	CPoint1 part0 = controlP[0] * uu * uu * uu;
	CPoint1 part1 = controlP[1] * 3 * uu * uu * (1 - uu);  //*谁在前面调用谁的运算符重载。
	CPoint1 part2 = controlP[2] * 3 * uu * (1 - uu) * (1 - uu);
	CPoint1 part3 = controlP[3] * (1 - uu) * (1 - uu) * (1 - uu);
	return part0 + part1 + part2 + part3;
}


void  CCurve::draw(CDC* pDC ,CPen *pPen) {
	//m_curvePoint  假设10个（A,B,C,D,E,F,G,H,I,J）， 13， 16.19 
	//分成(A,B,C,D)(D,E,F,G)(G,H,I,J)  4,7,10  (0,4,7,10 )
	//line4Point((A,B,C,D), pDC), line4Point((D,E,F,G), pDC) ,line4Point((G,H,I,J), pDC)
	CPen *pOldPen = pDC->SelectObject(pPen);
	pDC->MoveTo(m_curvePoint.front());
	int startPoint = 0;
	for (int i = 0; startPoint <= m_curvePoint.size() - 3; i++) {
		std::vector<CPoint1> temp(m_curvePoint.begin() + startPoint, m_curvePoint.begin() + startPoint + 4);
		line4Point(temp, pDC);
		startPoint = 3 * i + 3;
	}
	pDC->SelectObject(pOldPen);
}

void  CCurve::draw(CDC* pDC) {
	//m_curvePoint  假设10个（A,B,C,D,E,F,G,H,I,J）， 13， 16.19 
	//分成(A,B,C,D)(D,E,F,G)(G,H,I,J)  4,7,10  (0,4,7,10 )
	//line4Point((A,B,C,D), pDC), line4Point((D,E,F,G), pDC) ,line4Point((G,H,I,J), pDC)
	pDC->MoveTo(m_curvePoint.front());
	int startPoint = 0;
	for (int i = 0; startPoint <= m_curvePoint.size() - 3; i++) {
		std::vector<CPoint1> temp(m_curvePoint.begin() + startPoint, m_curvePoint.begin() + startPoint + 4);
		line4Point(temp, pDC);
		startPoint = 3 * i + 3;
	}
}

