#include "pch.h"
#include "CPoint1.h"

//���캯��ʵ��

CPoint1::CPoint1(double x, double y) : m_x(x), m_y(y) {}
CPoint1::CPoint1(const CPoint1 & p) : m_x(p.m_x), m_y(p.m_y) {} //û��ָ��Ļ����Բ�д

void  CPoint1::draw(CDC* pDC) {
	pDC->SetPixel(*this, RGB(255, 0, 0));
}

void CPoint1::draw(CDC * pDC, CPen * ptempPen) {

	CPen *pOldPen = pDC->SelectObject(ptempPen);
	pDC->SetPixel(*this, RGB(255, 0, 0));
	pDC->SelectObject(pOldPen);

}



double CPoint1::getX() const {
	return this->m_x;
}
double CPoint1::getY() const {
	return this->m_y;
}
void  CPoint1::SetX(double x) {
	this->m_x = x;
}
void  CPoint1::SetY(double y) {
	this->m_y = y;
}



CPoint1 CPoint1::operator +(CPoint1 p) {
	return CPoint1(m_x + p.m_x, m_y + p.m_y);
}
CPoint1 CPoint1::operator +(CSize size) {
	return CPoint1(m_x + size.cx, m_y + size.cy);
}
CPoint1 CPoint1::operator-(CPoint1 p) {
	return CPoint1(m_x - p.m_x, m_y - p.m_y);
}
CPoint1 CPoint1::operator*(double d) {
	return CPoint1(m_x * d, m_y * d);
}
CPoint1 CPoint1::operator / (int  d) { // �������س��ţ�����Ҳ�ǿ������صġ�
	if (d == 0)
		return CPoint1(0, 0);
	return CPoint1(m_x / d, m_y / d);
}

bool CPoint1::operator==(CPoint1 p) {
	return (abs(this->m_x - p.m_x) < 0.003) && (abs(this->m_y - p.m_y) < 0.003);
}

bool CPoint1::operator!=(CPoint1 p) {
	return !(*this == p);
}

bool CPoint1::operator<(CPoint1 p) {
	if (*this == p) return false;
	if (abs(this->m_x - p.m_x) < 0.003)
		return this->m_y < p.m_y;
	else 
		return  this->m_x < p.m_x;
}

bool CPoint1::operator>(CPoint1 p) {
	if (*this == p) return false;
	if (abs(this->m_x - p.m_x) < 0.003)
		return this->m_y > p.m_y;
	else
		return  this->m_x > p.m_x;
}

double CPoint1:: operator^(CPoint1 p) {//  ��� ���
	return m_x * p.m_y - m_y * p.m_x;
}
double CPoint1::operator*(CPoint1 p) {  // �ڻ� ���
	return m_x * p.m_x + m_y * p.m_y;
}
// h ȫ�ֺ���
std::ostream& operator<<(std::ostream& os, const CPoint1& p) {
	os << "("<< p.m_x << "," << p.m_y <<")"<< std::endl;
	return os;
}

//�˺��������д�������Ҫ�޸�
std::istream& operator>>(std::istream& is, CPoint1&p) {
	is >> p.m_x >> p.m_y;
	return is;

}


double CPoint1::XDistance(const CPoint1 &point1, const CPoint1 &point2) {  //8.�Ҹо����������ǲ��ǲ�����������
	return abs(point1.m_x - point2.m_x);
}

double  CPoint1::YDistance(const CPoint1 &point1,const CPoint1 &point2) {
	return abs(point1.m_y - point2.m_y);
}


double CPoint1::Distance(const CPoint1 & point1, const CPoint1 & point2) {
	return sqrt(pow((point1.m_x - point2.m_x),2) + pow((point1.m_y - point2.m_y),2));
}



CPoint1::operator CPoint()  //����֮���ת������
{
	return CPoint(m_x, m_y);
}
