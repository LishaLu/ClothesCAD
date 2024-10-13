#include "pch.h"
#include "ExpandConstraintRelation.h"

ExpandConstraintRelation::ExpandConstraintRelation(CVertex *expandLine, double len, std::vector<CString> labelVec) 
	:m_expandLine(expandLine), m_len(len * PIXELPERCM){
	assert(labelVec.size() == 2);
	m_labelVec = labelVec;
}



/*
*�ӳ�����ʱָ�����������
���1:   a...........b ���m_lenΪ������Ϊ: a.............b.....c
���2��  a...........b�����m_lenΪ��ֵ����Ϊc....a............b
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