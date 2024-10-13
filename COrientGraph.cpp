#include "pch.h"
#include "COrientGraph.h"

COrientGraph::COrientGraph(int maxNum): m_numMax(maxNum), m_numVert(0) {
	m_vertexVec.resize(maxNum);
	for (auto &temp : m_vertexVec)
		temp = nullptr;
}


void COrientGraph::draw(CDC *pDC) {
	for (auto vertex : m_vertexVec) {
		if (vertex != nullptr)
			vertex->draw(pDC);
	}
}
