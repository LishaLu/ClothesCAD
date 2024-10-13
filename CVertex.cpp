#include "pch.h"
#include "CVertex.h"


CVertex::CVertex(CLine line) : m_consRelate(nullptr){
	m_figure = new CLine(line);
}
CVertex::CVertex(CCurve curve) : m_consRelate(nullptr) {
	m_figure = new CCurve(curve);
}
CVertex::CVertex(ConstraintRelation * consRelate, CString id):m_figure(nullptr),m_consRelate(consRelate), m_id(id) {

	calculateFigure();
}


CVertex::~CVertex() {

	if (m_figure != nullptr)
		delete m_figure;
	if (m_consRelate != nullptr)
		delete m_consRelate;

}


void CVertex::calculateFigure() {
	if(m_consRelate != nullptr)
		m_figure = m_consRelate->getConstraintFigure();
	if (m_ConstraintRelationFrom.empty())
		m_ConstraintRelationFrom = m_consRelate->getConstraintCVertex();
}

void CVertex::draw(CDC *pDC) {
	if (nullptr != m_figure)
		m_figure->draw(pDC);
	else {
		calculateFigure();
		m_figure->draw(pDC);
	}
}

void CVertex::draw(CDC *pDC, CPen *pPen) {
	if (nullptr != m_figure)
		m_figure->draw(pDC, pPen);
	else {
		calculateFigure();
		m_figure->draw(pDC, pPen);
	}
}

void CVertex::drawWithLabel(CDC *pDC, CPen *pPen, CSize lableOffset) {
	if (nullptr != m_figure)
		m_figure->drawWithLabel(pDC, pPen, lableOffset);
	else {
		calculateFigure();
		m_figure->drawWithLabel(pDC, pPen, lableOffset);
	}
}

