#pragma once
#include "CVertex.h"
#include <vector>
class COrientGraph
{

public:
	COrientGraph(int maxNum);
	void draw(CDC *pDC);

public:
	int m_numMax;			// �������ܴ�ŵ���󶥵����
	int m_numVert;			// ��ǰ�������
	std::vector <CVertex *> m_vertexVec; // ��Ŷ��������  �����ŵ���������Ԫ�صĵ�ַ�� ָ��������Ԫ�ء������Ԫ��Ҳ��ָ�롣�����ܽ�Լ�ڴ�


};

