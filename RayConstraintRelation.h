#pragma once
#include "CPoint1.h"
#include "CLine.h"
#include "ConstraintRelation.h"
#include "CVertex.h"

class RayConstraintRelation:public ConstraintRelation
{

/*
����Ϊ�˼��ٴ����������������ߣ���˻���������������

���仯��
1. ��������һ���̶��ĵ㣬����ֻ����һ���̶�point
2. ��������һ���ߵ��������յ㣬���߼���֮����

���ȱ仯��
1. ���ȿ�����һ���̶����ȣ�����m_length=50
2. ����Ҳ������һ����ģ�������ĳ�����ཻ�ĵ�Ϊ�յ㣬��ô������Ⱦ��Ǳ仯��

*/




public:
	//�������������
	RayConstraintRelation(CPoint1 originPoint, double angle, double length, std::vector<CString> labelVec);
	RayConstraintRelation(CPoint1 originPoint, double angle, CVertex *crossVerLine, std::vector<CString> labelVec);
	RayConstraintRelation(CVertex *VerLine, PointOnLinePosition pos, double angle, double length, std::vector<CString> labelVec);
	RayConstraintRelation(CVertex *VerLine, PointOnLinePosition pos, double angle, CVertex *crossVerLine, std::vector<CString> labelVec);

	CFigure * getConstraintFigure();
	std::vector <CVertex*> getConstraintCVertex();


private:
	//����������������Ա�ʾһ���㣺��ʾһ���ߵ��������յ㶼
	CVertex * m_VerLine; // ������������Ļ���Ĭ��ֵΪ��ָ��
	PointOnLinePosition m_pos;
	//�������������һ����˼�� ����ֻ��Ϊ�˶�̬��
	CPoint1 m_originPoint;
	double m_angle;


	double m_length;
	CVertex * m_CrossVerLine;
};

