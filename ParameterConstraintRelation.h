#pragma once
#include "RayConstraintRelation.h"

//�о������������ RayConstraintRelation , �����ֱ�Ӽ̳���
//�Ժ���Խ��в��
//����һ���㣬һ���Ƕȣ�һ�����Ȼ��� ��Լ����ϵ
class ParameterConstraintRelation :
	public RayConstraintRelation
{
public:
	ParameterConstraintRelation(CPoint1 originPoint, double angle, double length, std::vector<CString> labelStr) : RayConstraintRelation(originPoint, angle, length, labelStr) {}
};

