#include "pch.h"
#include "RatioConstraintRelation.h"


CFigure * RatioConstraintRelation::getConstraintFigure() {


	CLine line = *dynamic_cast<CLine*>(m_vertex->getFigure());

	
	CSize size = CLine::GetCSizeOnLineWithDistance(line, line.Getlen() * m_percent);

	return new CLine(m_knownPoint, m_knownPoint + size, m_labelVec[0], m_labelVec[1]);
	
}

std::vector <CVertex*> RatioConstraintRelation::getConstraintCVertex() {

	return std::vector <CVertex*>{m_vertex};
}

