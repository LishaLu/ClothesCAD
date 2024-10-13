#include "pch.h"
#include "RayConstraintRelation.h"

RayConstraintRelation::RayConstraintRelation(CPoint1 originPoint, double angle, double length, std::vector<CString> labelVec)
	:m_originPoint(originPoint), m_angle(angle), m_length(length* PIXELPERCM),m_VerLine(nullptr),m_pos(LineStOrEd::START), m_CrossVerLine(nullptr){
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}

RayConstraintRelation::RayConstraintRelation(CVertex * vertex, PointOnLinePosition pos,  double angle, double length, std::vector<CString> labelVec)
	: m_angle(angle), m_length(length * PIXELPERCM), m_VerLine(vertex), m_pos(pos), m_CrossVerLine(nullptr){
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}

RayConstraintRelation::RayConstraintRelation(CVertex *vertex, PointOnLinePosition pos, double angle, CVertex *crossVerLine, std::vector<CString> labelVec)
	: m_angle(angle), m_VerLine(vertex), m_CrossVerLine(crossVerLine),m_pos(pos) {
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}

RayConstraintRelation::RayConstraintRelation(CPoint1 originPoint, double angle, CVertex *crossVerLine, std::vector<CString> labelVec)
	: m_originPoint(originPoint), m_angle(angle), m_VerLine(nullptr),
	m_pos(LineStOrEd::START), m_CrossVerLine(crossVerLine){
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}

CFigure * RayConstraintRelation::getConstraintFigure() {

	//对应四种情况
	if (m_VerLine == nullptr && m_CrossVerLine == nullptr) {
		CLine rayLine = CLine::GetRayLine(m_originPoint, m_length, m_angle);
		return new CLine(rayLine.GetSt(),rayLine.GetEd(), m_labelVec[0], m_labelVec[1] );
	}
	else if (m_CrossVerLine == nullptr){
		CLine verLine = *dynamic_cast<CLine*>(m_VerLine->getFigure());//转化成直线，父类转化成子类。
		CPoint1 originPoint = CLine::GetPointOnLineWithConstraint(verLine, m_pos);

		CLine rayLine = CLine::GetRayLine(originPoint, m_length, m_angle);
		return new CLine(rayLine.GetSt(), rayLine.GetEd(), m_labelVec[0], m_labelVec[1]);
	}
	else if (m_VerLine == nullptr) {
		CLine crossLine = *dynamic_cast<CLine*>(m_CrossVerLine->getFigure());

		CLine rayLine = CLine::GetRayLine(m_originPoint, crossLine, m_angle);
		return new CLine(rayLine.GetSt(), rayLine.GetEd(), m_labelVec[0], m_labelVec[1]);
	}
	else {
		CLine verLine = *dynamic_cast<CLine*>(m_VerLine->getFigure());
		CLine crossLine = *dynamic_cast<CLine*>(m_CrossVerLine->getFigure());
		CPoint1 originPoint = CLine::GetPointOnLineWithConstraint(verLine, m_pos);

		CLine rayLine = CLine::CLine::GetRayLine(originPoint, crossLine, m_angle);
		return new CLine(rayLine.GetSt(), rayLine.GetEd(), m_labelVec[0], m_labelVec[1]);
	}
}

std::vector <CVertex*> RayConstraintRelation::getConstraintCVertex() {
	if (m_VerLine == nullptr && m_CrossVerLine == nullptr)
		return std::vector <CVertex*>();
	else if (m_VerLine == nullptr)
		return std::vector <CVertex*> {m_CrossVerLine};
	else if (m_CrossVerLine == nullptr)
		return std::vector <CVertex*> {m_VerLine};
	else 
		return std::vector <CVertex*> {m_VerLine, m_CrossVerLine};
}