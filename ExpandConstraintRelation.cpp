#include "pch.h"
#include "ExpandConstraintRelation.h"

ExpandConstraintRelation::ExpandConstraintRelation(CVertex *expandLine, double len, std::vector<CString> labelVec) 
	:m_expandLine(expandLine), m_len(len * PIXELPERCM){
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}



/*
*延长线暂时指定两种情况：
情况1:   a...........b 如果m_len为正，则为: a.............b.....c
情况2：  a...........b，如果m_len为负值，则为c....a............b
*
*/

CFigure * ExpandConstraintRelation::getConstraintFigure() {

	
	CLine expandLine = *dynamic_cast<CLine*>(m_expandLine->getFigure());
	if (m_len == 0)
		return new CLine(CPoint1(0,0), CPoint1(0,0));
		//return new CLine(expandLine);
	CPoint1 outPoint = CLine::GetLineExpandPoint(expandLine, m_len);
	if (m_len > 0) {
		return new CLine(expandLine.GetEd(), outPoint, m_labelVec[0], m_labelVec[1]);
	}
	else return  new CLine(outPoint, expandLine.GetSt(), m_labelVec[0], m_labelVec[1]);

}

std::vector <CVertex*> ExpandConstraintRelation::getConstraintCVertex() {
		return std::vector <CVertex*> {m_expandLine};
}