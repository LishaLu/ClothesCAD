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
	//线的标注， 需要按照顺序标注： 例如 连段ab, 则a为起点， b为末点， 则为[a，b]
	std::vector<CString> m_labelVec;
};

