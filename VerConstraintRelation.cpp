#include "pch.h"
#include "VerConstraintRelation.h"


VerConstraintRelation::VerConstraintRelation(CVertex *verLine, double distance, double height, std::vector<CString> labelVec) :
	m_VerLine(verLine), m_distance(distance * PIXELPERCM), m_height(height * PIXELPERCM), m_pos(LineStOrEd::START)
	, m_VerLineHeight(nullptr), m_otherPoint(CPoint1(-1,-1))
{
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}


VerConstraintRelation::VerConstraintRelation(CVertex *verLine, double distance, CVertex * VerLineHeight, double percent, std::vector<CString> labelVec) :
	m_VerLine(verLine), m_distance(distance * PIXELPERCM), m_VerLineHeight(VerLineHeight),
	m_pos(LineStOrEd::START), m_percent(percent), m_otherPoint(CPoint1(-1,-1)){
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}

VerConstraintRelation::VerConstraintRelation(CVertex *verLine, CPoint1 otherPoint, std::vector<CString> labelVec): m_VerLine(verLine) , m_otherPoint(otherPoint ) {
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}

//VerConstraintRelation::VerConstraintRelation(CVertex *verLine, LineStOrEd pos, double distance, double height) :
//	m_VerLine(verLine), m_distance(distance * PIXELPERCM),m_pos(pos), m_height(height /* PIXELPERCM*/){}


CFigure * VerConstraintRelation::getConstraintFigure() {
	CPoint1 startPoint(0, 0);
	CPoint1 endPoint(0, 0);
	CLine verLine = *dynamic_cast<CLine*>(m_VerLine->getFigure());

	if (m_otherPoint != CPoint1(-1, -1)) {
		CLine line = CLine::GetVerticalLinebyOtherPoint(verLine, m_otherPoint);
		return new CLine(line.GetSt(), line.GetEd(), m_labelVec[0], m_labelVec[1]);
	}
	

	if (nullptr != m_VerLineHeight)
		m_height = dynamic_cast<CLine*>(m_VerLine->getFigure())->Getlen() * m_percent;

	//m_height = *dynamic_cast<CLine*>(m_VerLine->getFigure())

	// 这里规定x值（或y值）变大的叫positive  x值（或y值）变小的叫negative
	if (abs(verLine.m_st.m_x - verLine.m_ed.m_x) < 0.003) { // 平行于y轴	
		startPoint = CPoint1(verLine.m_st.getX(), verLine.m_st.getY() + m_distance);
		endPoint = CPoint1(verLine.m_st.getX() + m_height, verLine.m_st.getY() + m_distance);
	
	}
	else if (abs(verLine.m_st.m_y - verLine.m_ed.m_y) < 0.003) {  // 平行于x轴
		startPoint = CPoint1(verLine.m_st.getX() + m_distance, verLine.m_st.getY());
		endPoint = CPoint1(verLine.m_st.getX() + m_distance, verLine.m_st.getY() + m_height);
	}
	else {// 存在非0斜率
		double k = (-1) * (verLine.m_ed.m_x - verLine.m_st.m_x) / (verLine.m_ed.m_y - verLine.m_st.m_y);
		double k1 = (verLine.m_ed.m_y - verLine.m_st.m_y) / (verLine.m_ed.m_x - verLine.m_st.m_x);
		double a = m_height / sqrt(1 + k * k);
		double b = k * m_height / sqrt(1 + k * k);
		double c = m_distance / sqrt(1 + k1 * k1);
		double d = k1 * m_distance / sqrt(1 + k1 * k1);

		startPoint = CPoint1(verLine.m_st.m_x + c, verLine.m_st.m_y + d);
		endPoint = CPoint1(verLine.m_st.m_x + c + a, verLine.m_st.m_y + d + b);
		
	}
	return new CLine(startPoint, endPoint, m_labelVec[0], m_labelVec[1]);
}


std::vector <CVertex*> VerConstraintRelation::getConstraintCVertex() {

	if(m_VerLineHeight == nullptr)
		return std::vector <CVertex*> {m_VerLine};
	else 
		return std::vector <CVertex*> {m_VerLine, m_VerLineHeight};
}