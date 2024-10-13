#pragma once
#include "ConstraintRelation.h"
#include "CVertex.h"
class ExpandConstraintRelation :
	public ConstraintRelation
{
	

public:
	ExpandConstraintRelation(CVertex *expandLine, double len, std::vector<CString> labelVec);
	//ExpandConstraintRelation(CVertex *vertex, LineStOrEd pos, CVertex *crossVerLine);
	


	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();


private:
	CVertex * m_expandLine;  //���ӳ��ߣ� ������ǰ�ӳ�Ҳ��������ӳ�
	double m_len;           //lenΪ+�� ��Ϊ����ӳ��� len Ϊ-�� ��Ϊ��ǰ�ӳ�


};

