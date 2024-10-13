#pragma once
#include "RayConstraintRelation.h"

//感觉这里可以重用 RayConstraintRelation , 这里就直接继承了
//以后可以进行拆分
//根据一个点，一个角度，一个长度画线 的约束关系
class ParameterConstraintRelation :
	public RayConstraintRelation
{
public:
	ParameterConstraintRelation(CPoint1 originPoint, double angle, double length, std::vector<CString> labelStr) : RayConstraintRelation(originPoint, angle, length, labelStr) {}
};

