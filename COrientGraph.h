#pragma once
#include "CVertex.h"
#include <vector>
class COrientGraph
{

public:
	COrientGraph(int maxNum);
	void draw(CDC *pDC);

public:
	int m_numMax;			// 数组所能存放的最大顶点个数
	int m_numVert;			// 当前顶点个数
	std::vector <CVertex *> m_vertexVec; // 存放顶点的数组  变量放的是数组首元素的地址， 指向的数组的元素。数组的元素也是指针。这样能节约内存


};

