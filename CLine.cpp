#include "pch.h"
#include "CLine.h"
#include "EnumClass.h"
#include "GlobalVar.h"


CLine::CLine() {}
CLine::CLine(CPoint1 s, CPoint1 e, CString stLable, CString edLable) : m_st(s), m_ed(e), m_stLabel(stLable), m_edLabel(edLable) {
	JudgeStpointAndEdpoint();
	SetLineABC();
}



CLine::~CLine() {}

void CLine::drawLabel(CDC *pDC, CSize labelOffset) {

	CFont font;
	font.CreatePointFont(70, _T("Times New Roman"));
	
	CFont * pOldFont = pDC->SelectObject(&font);
	pDC->TextOutW(m_st.getX() + labelOffset.cx, m_st.getY() + labelOffset.cy, m_stLabel);
	pDC->TextOutW(m_ed.getX() + labelOffset.cx, m_ed.getY() + labelOffset.cy, m_edLabel);
	pDC->SelectObject(pOldFont);
}

/*
void CLine::drawLabel2(CDC *pDC, CSize & labelOffset) {

	CFont font;
	font.CreatePointFont(80, _T("宋体"));

	CFont * pOldFont = pDC->SelectObject(&font);
	pDC->TextOutW(m_st.getX() + labelOffset.cx, m_st.getY() + labelOffset.cy, m_stLabel);
	pDC->TextOutW(m_ed.getX() + labelOffset.cx, m_ed.getY() + labelOffset.cy, m_edLabel);
	pDC->SelectObject(pOldFont);
}
*/

void CLine::draw(CDC * pDC) {


	pDC->MoveTo(m_st);
	pDC->LineTo(m_ed);
}

void CLine::drawWithLabel(CDC * pDC , CPen * ptempPen, CSize lableOffset) {
	saveLabel();
	drawLabel(pDC, lableOffset);
	draw(pDC, ptempPen);
}

void CLine::CLine::saveLabel()
{

	if (keyPoints.find(m_stLabel) == keyPoints.end()) {
		keyPoints[m_stLabel] = m_st;
		KOmaps[m_stLabel] = orig;
	}
	if (keyPoints.find(m_edLabel) == keyPoints.end()) {
		keyPoints[m_edLabel] = m_ed;
		KOmaps[m_edLabel] = orig;
	}

}




/*多传入CPen * 参数*/
void CLine::draw(CDC * pDC, CPen * ptempPen) {
	CPen *pOldPen = pDC->SelectObject(ptempPen);
	pDC->MoveTo(m_st);
	pDC->LineTo(m_ed);
	pDC->SelectObject(pOldPen);
}


void CLine::SetLineABC() {
	m_a = m_st.m_y - m_ed.m_y;
	m_b = m_ed.m_x - m_st.m_x;
	m_c = m_st.m_x * m_ed.m_y - m_ed.m_x * m_st.m_y;
}


CPoint1 CLine::GetSt() const {  // 属性声明为private的时候，一般都需要get和set。
	return this->m_st;
}

void  CLine::SetSt(CPoint1 st) {  // 属性声明为private的时候，一般都需要get和set。
	this->m_st = st;
	JudgeStpointAndEdpoint();
}

CPoint1 CLine::GetEd() const {
	return this->m_ed;
}

void  CLine::SetEd(CPoint1 ed) {
	this->m_ed = ed;
	JudgeStpointAndEdpoint();
}

double CLine::Getlen() {
	return CPoint1::Distance(this->m_st, this->m_ed);
}


void  CLine::JudgeStpointAndEdpoint() {

	
	if (this->m_st > this->m_ed) {
		CPoint1 temp = this->m_ed;
		this->m_ed = this->m_st;
		this->m_st = temp;
	}

}


bool   CLine::IsHoritalLine() const {
	return abs(m_st.m_y - m_ed.m_y) < 0.003;

}

bool   CLine::IsVerticalLine() const {
	return abs(m_st.m_x - m_ed.m_x) < 0.003;

}


/*
bool CLine::JudgeStpointAndEdpoint(CLine &line) {// 参数里面不能表示重复的东西
	CPoint1 point1 = line.GetEd();
	CPoint1 point2 = line.GetSt();
	if (point1.m_x != point1.m_x)   //line.m_st = min(point1,point2);判断内置类型的，这个是判断自定义类型的
		(point1.m_x < point2.m_x) ? (line.m_st = point1, line.m_ed = point2) : (line.m_st = point2, line.m_ed = point1);//表达式 ? 表达式 : 表达式 ;
	else
		(point1.m_y < point2.m_y) ? (line.m_st = point1, line.m_ed = point2) : (line.m_st = point2, line.m_ed = point1);
}
*/

CLine CLine::GetHoritalLine(CPoint1 point1) { // 1.这个是应该写在这里还是写在CommonTool里面？2 怎么判断写在哪里
	CPoint1 point2;
	point2.m_y = point1.m_y;   // 1.这个函数就是实现了一个过一点求个水平线，还有其他的求其他斜率的线。不用分类求别的了吧
	point2.m_x = point1.m_x + INT_MAX; // 1.这里不能用getX，那m_x是私有的时候，只能用友元？
	return CLine(point1, point2);// * .h文件没有声明，为啥不报错。有时候就是不会报错
}


CLine CLine::GetVerticalLine(CPoint1 point1) { // 1.这个是应该写在这里还是写在CommonTool里面？2 怎么判断写在哪里
	CPoint1 point2;
	point2.m_x = point1.m_x;   // 1.这个函数就是实现了一个过一点求个水平线，还有其他的求其他斜率的线。不用分类求别的了吧
	point2.m_y = point1.m_y + INT_MAX; // 1.这里不能用getX，那m_x是私有的时候，只能用友元？
	return CLine(point1, point2);// 1  .h文件没有声明，为啥不报错。
}



//平行     还能用一个参数的形式吗？
bool CLine::IsLineParllLine(CLine line1, CLine line2) { //x1y2－x2y1＝0，这个返回值
	return ((line1.m_ed - line1.m_st) ^ (line2.m_ed - line2.m_st)) == 0;
}

// 垂直
bool CLine::IsLineVerLine(CLine line1, CLine line2) {
	return ((line1.m_ed.m_y - line1.m_st.m_y) / (line1.m_ed.m_x - line1.m_st.m_x) * (line2.m_ed.m_y - line2.m_st.m_y) / (line2.m_ed.m_x - line2.m_st.m_x)) == -1;
}

//  重叠关系   并不是重叠   
bool CLine::IsOverlap(CLine line1, CLine line2) {
	return (((line1.m_ed - line1.m_st) ^ (line2.m_ed - line1.m_st)) == 0) && (((line1.m_ed - line1.m_st) ^ (line2.m_ed - line2.m_st)) == 0);
}

// 共点关系   判断两条直线的端点重合
bool CLine::IsHaveSamePoint(CLine line1, CLine line2) {

	return line1.GetSt() == line2.GetSt() ||
		line1.GetSt() == line2.GetEd() ||
		line1.GetEd() == line2.GetSt() ||
		line1.GetEd() == line2.GetEd();
}


// 获得交点 
CPoint1 CLine::GetCrossPoint(  CLine & l1,   CLine & l2) {//x = (b0*c1 – b1*c0)/D   //y = (a1*c0 – a0*c1) / D  //D = a0 * b1 – a1*b0，(D为0时，表示两直线平行)
	l1.SetLineABC();
	l2.SetLineABC();
	double D = l1.m_a * l2.m_b - l2.m_a * l1.m_b;
	if (0 == D)
		CPoint1(-1,-1);
	double m_x = (l1.m_b * l2.m_c - l2.m_b * l1.m_c) / D;
	double m_y = (l1.m_c * l2.m_a - l2.m_c * l1.m_a) / D;
	return CPoint1(m_x, m_y);
}


/*
line 是已经知道的直线

当distance 可为正， 或者负值。

*/
CLine CLine::GetParllLine(const CLine &line, double d) {

	if (abs(line.m_st.m_x - line.m_ed.m_x) < 0.003) {//平行于y轴
			return CLine(CPoint1(line.m_st.m_x + d, line.m_st.m_y), CPoint1(line.m_ed.m_x + d, line.m_ed.m_y));
	}
	else if (abs(line.m_st.m_y - line.m_ed.m_y) < 0.003) { //平行于x轴
			return CLine(CPoint1(line.m_st.m_x, line.m_st.m_y + d), CPoint1(line.m_ed.m_x, line.m_ed.m_y + d));
	}
	else {
		double k = (line.m_ed.m_y - line.m_st.m_y) / (line.m_ed.m_x - line.m_st.m_x);
		double a = d / sqrt(1 + k * k);
		double b = k * d / sqrt(1 + k * k);
		if (k > 0) {
			return CLine(CPoint1(line.m_st.m_x + a, line.m_st.m_y - b), CPoint1(line.m_st.m_x + a, line.m_st.m_y - b));
		}
		if (k < 0) {
			return CLine(CPoint1(line.m_st.m_x + a, line.m_st.m_y + b), CPoint1(line.m_st.m_x + a, line.m_st.m_y + b));
		}
	}

	return  CLine(CPoint1(0, 0), CPoint1(0, 0));
}

bool CLine::IsPointOnLine(CPoint1 point, CLine & line) {
	double x1 = line.GetSt().getX() - point.getX();
	double y1 = line.GetSt().getY() - point.getY();

	double x2 = line.GetEd().getX() - point.getX();
	double y2 = line.GetEd().getY() - point.getY();

	return abs(y2 / x2 - y1 / x1) <= 0.003;

}

//经过已知点求垂线。
CLine CLine::GetVerticalLinebyOtherPoint( CLine & line, CPoint1 point) {

	if (IsPointOnLine(point, line))
		return CLine(CPoint1(0, 0), CPoint1(0, 0));

	CPoint1 endPoint(0, 0);
	if (abs(line.m_st.m_x - line.m_ed.m_x) < 0.003)  // 平行于y轴	

		endPoint = CPoint1(line.m_st.getX(), point.getY());

	else if (abs(line.m_st.m_y - line.m_ed.m_y) < 0.003)   // 平行于x轴

		endPoint = CPoint1(point.getX(), line.m_st.getY());

	else {// 存在非0斜率

		double k = (-1)*(line.m_st.m_x - line.m_ed.m_x) / (line.m_st.m_y - line.m_ed.m_y);
		CPoint1 temPoint = CPoint1(point.getX()+1, point.getY() + k); // 任取两个点。y=kx+b
		CLine verLine1 = CLine(point, temPoint);
		endPoint = GetCrossPoint(line, verLine1);// point传的对不？
	}
	return  CLine(point, endPoint);
}


CPoint1 CLine::GetLineExpandPoint(const CLine & expandLine, double nLen) {


	CPoint1 outPoint(0, 0);
	CPoint1 expandLineST = expandLine.GetSt();
	CPoint1 expandLineED = expandLine.GetEd();

	if (expandLine.IsHoritalLine()) {// 水平线

		if (nLen >= 0) {
			outPoint = expandLineED + CPoint1(nLen, 0);
		}
		else {
			outPoint = expandLineST + CPoint1(nLen, 0);
		}
	}
	else if (expandLine.IsVerticalLine()) {//竖直

		if (nLen >= 0) {
			outPoint = expandLineED + CPoint1(0, nLen);
		}
		else {
			outPoint = expandLineST + CPoint1(0, nLen);
		}
	}
	else {
		double k = 0.0;
		double b = 0.0;
		k = (expandLineST.m_y - expandLineED.m_y) / (expandLineST.m_x - expandLineED.m_x);
		b = expandLineST.m_y - k * expandLineST.m_x;
		double zoom = 0.0;
		zoom = nLen / sqrt((expandLineED.m_x - expandLineST.m_x)*(expandLineED.m_x - expandLineST.m_x) + (expandLineED.m_y - expandLineST.m_y)*(expandLineED.m_y - expandLineST.m_y));

		if (k > 0) {
			if (nLen > 0) {
				outPoint.m_x = expandLineED.m_x + zoom * abs(expandLineED.m_x - expandLineST.m_x);
				outPoint.m_y = k * outPoint.m_x + b;
			}
			else {

				outPoint.m_x = expandLineST.m_x - zoom * abs(expandLineED.m_x - expandLineST.m_x);
				outPoint.m_y = k * outPoint.m_x + b;
			}
		}
		else {
			if (nLen > 0) {
				outPoint.m_x = expandLineED.m_x - zoom * abs(expandLineED.m_x - expandLineST.m_x);
				outPoint.m_y = k * outPoint.m_x + b;
			}
			else {
				outPoint.m_x = expandLineST.m_x + zoom * abs(expandLineED.m_x - expandLineST.m_x);
				outPoint.m_y = k * outPoint.m_x + b;

			}
		}
	}
	return outPoint;
}


 CSize CLine:: GetCSizeOnLineWithDistance(const CLine & line, double distance) {

	 double k = distance / CPoint1::Distance(line.GetSt(), line.GetEd());
	 return CSize(k * (line.GetEd().getX() - line.GetSt().getX()), k * (line.GetEd().getY() - line.GetSt().getY()));

}

CPoint1 CLine::GetPointOnLineWithConstraint(const CLine & line, PointOnLinePosition constraint) {

	CPoint1 pointOnLine = GetLinePoint(line, constraint.m_pos);

	if (pointOnLine == CPoint1(-1, -1))
		return CPoint1(-1, -1);
	return pointOnLine + GetCSizeOnLineWithDistance(line, constraint.m_distance);;
}

CLine CLine::GetRayLine(const CPoint1 &origPoint, double length, double angle) {
	double a = angle / 180 * PI;
	CPoint1 endPoint(origPoint.getX() + length * cos(a), origPoint.getY() + length * sin(a));
	return  CLine(origPoint, endPoint);

}

CLine CLine::GetRayLine(const CPoint1 &origPoint, CLine & crossLine, double angle) {
	double length = 100;
	double a = angle / 180 * PI;
	CPoint1 tempPoint(origPoint.getX() + length * cos(a), origPoint.getY() + length * sin(a));
	CPoint1 endPoint = CLine::GetCrossPoint(CLine(origPoint, tempPoint), crossLine);
	return  CLine(origPoint, endPoint);

}


CPoint1 CLine::GetLinePoint(const CLine & line, LineStOrEd ops) {
	CPoint1 result(-1,-1);
	switch (ops)
	{
	case LineStOrEd::START:
		result = line.GetSt();
		break;
	case LineStOrEd::END:
		result = line.GetEd();
		break;
	case LineStOrEd::ONE_THIRD:
		result = line.GetEd() / 3 + line.GetSt() * 2 / 3;
		break;
	case LineStOrEd::TWO_THIRDS:
		result = line.GetEd() * 2 / 3 + line.GetSt() / 3;
		break;
	case LineStOrEd::ONE_FORTH:
		result = line.GetEd() * 1 / 4 + line.GetSt() * 3 / 4;
		break;

	case LineStOrEd::THREE_FORTH:
		result = line.GetEd() * 3 / 4 + line.GetSt() * 1 / 4;
		break;
	case LineStOrEd::HALF:
		result = line.GetEd() /2 + line.GetSt() / 2;
		break;
	default:
		break;
	}
	return result;

}


CLine CLine::angleBisection(CLine line1, CLine line2, CPoint1 &commonPoint) { //是传点比较好还是传线比较好


//	CPoint1 startPoint;
	CPoint1 line1EndPoint;
	CPoint1 line2EndPoint;

	if (line1.GetSt() == line2.GetSt()) {
		commonPoint = line1.GetSt();
		line1EndPoint = line1.GetEd();
		line2EndPoint = line2.GetEd();
	}
	else if (line1.GetEd() == line2.GetSt()) {
		commonPoint = line1.GetEd();
		line1EndPoint = line1.GetSt();
		line2EndPoint = line2.GetEd();
	}

	else if (line1.GetSt() == line2.GetEd()) {
		commonPoint = line1.GetSt();
		line1EndPoint = line1.GetEd();
		line2EndPoint = line2.GetSt();
	}

	else if (line1.GetEd() == line2.GetEd()) {
		commonPoint = line1.GetEd();
		line1EndPoint = line1.GetSt();
		line2EndPoint = line2.GetSt();
	}
	else {
		return CLine(CPoint1(-1, -1), CPoint1(-1, -1));
	}


	//a是左边向量

	CPoint1 vectorLeft = line1EndPoint - commonPoint;
	CPoint1 vectorRight = line2EndPoint - commonPoint;

	//求a，b的模长分别为ad和bd

	double leftLen = sqrt(pow(vectorLeft.m_x, 2) + pow(vectorLeft.m_y, 2));
	double rightLen = sqrt(pow(vectorRight.m_x, 2) + pow(vectorRight.m_y, 2));

	//将 a, b单位化
	vectorLeft = vectorLeft / leftLen;
	vectorRight = vectorRight / rightLen;

	//abs用来存储角平分线所在向量 。
	CPoint1 vecAngle = vectorLeft + vectorRight;

	return CLine(commonPoint, commonPoint +  vecAngle);
}


 CPoint1 CLine::calLenOnLine(CLine line, double len) {

	CPoint1 point;
	double k = len / sqrt(pow(line.GetSt().m_x - line.GetEd().m_x, 2) + pow(line.GetSt().m_y - line.GetEd().m_y, 2));
	point.SetX(k * (line.GetEd().m_x - line.GetSt().m_x) + line.GetEd().m_x);
	point.SetY(k * (line.GetEd().m_y - line.GetSt().m_y) + line.GetSt().m_y);
	return point;
}


 const CSize CLine::labelOffset = CSize(2, 2);