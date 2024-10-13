#include "pch.h"
#include "AngleBisectionConstraintRelation.h"



AngleBisectionConstraintRelation::AngleBisectionConstraintRelation(CVertex *VerLine1, CVertex *VerLine2, double len, std::vector<CString> labelVec):
	m_VerLine1(VerLine1), m_VerLine2(VerLine2), m_len(len* PIXELPERCM)
{
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}

CFigure * AngleBisectionConstraintRelation::getConstraintFigure() {


	CPoint1 commonPoint;
	CLine verLine1 = *dynamic_cast<CLine*>(m_VerLine1->getFigure());
	CLine verLine2 = *dynamic_cast<CLine*>(m_VerLine2->getFigure());

	
	CLine temp = CLine::angleBisection(verLine1, verLine2, commonPoint);


	//return new CLine(temp);
	CSize size = CLine::GetCSizeOnLineWithDistance(temp, m_len);
	
	return new CLine(commonPoint, commonPoint + size, m_labelVec[0], m_labelVec[1]);
	
}

std::vector <CVertex*> AngleBisectionConstraintRelation::getConstraintCVertex() {
	return std::vector<CVertex*>{m_VerLine1, m_VerLine2};
}



AngleBisectionConstraintRelation::~AngleBisectionConstraintRelation()
{
}
