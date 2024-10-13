#pragma once
#include "CFigure.h"
#include "PointOnLinePosition.h"
#include "constant.h"
//#include "CVertex.h"
#include <vector>

class CVertex;
class ConstraintRelation
{
public:
	virtual CFigure * getConstraintFigure() = 0;
	virtual std::vector <CVertex*> getConstraintCVertex() = 0;
public:
	//�ߵı�ע�� ��Ҫ����˳���ע�� ���� ����ab, ��aΪ��㣬 bΪĩ�㣬 ��Ϊ[a��b]
	std::vector<CString> m_labelVec;
};

