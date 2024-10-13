#include "pch.h"
#include "ArcAndLineConstraintRelation.h"



std::vector <CVertex*> ArcAndLineConstraintRelation::getConstraintCVertex() {
	return std::vector <CVertex*>{m_Vertex1, m_Vertex2};
}


ArcAndLineConstraintRelation::~ArcAndLineConstraintRelation()
{
}

CFigure * ArcAndLineConstraintRelation::getConstraintFigure() {
	CPoint1 point1(0, 0);
	CPoint1 point2(0, 0);
	CPoint1 leftTop(0, 0);

	CLine firstVerLine = *dynamic_cast<CLine*>(m_Vertex1->getFigure());
	CLine secondVerLine = *dynamic_cast<CLine*>(m_Vertex2->getFigure());

	point1 = CLine::GetPointOnLineWithConstraint(firstVerLine, m_pos1);
	point2 = CLine::GetPointOnLineWithConstraint(secondVerLine, m_pos2);

	//假设矩形的长为 a  宽为 b
	double a = 2 * abs(point1.getX() - point2.getX());
	double b = 2 * abs(point2.getY() - point1.getY());

	switch (m_quadrant)
	{
	case Quadrant::ONE:
		leftTop = CPoint1(max(point1.getX(), point2.getX()) - a, min(point1.getY(), point2.getY()));
		break;
	case Quadrant::TWO:
		leftTop = CPoint1(min(point1.getX(), point2.getX()), min(point1.getY(), point2.getY()));
		break;
	case Quadrant::THREE:
		leftTop = CPoint1(min(point1.getX(), point2.getX()), max(point1.getY(), point2.getY()) - b);
		break;
	case Quadrant::FOUR:
        leftTop = CPoint1(max(point1.getX(), point2.getX()) - a, max(point1.getY(), point2.getY()) - b);
		break;
	default:
		break;
	}

    CRect rect = CRect(leftTop, CSize(a, b));
	return new CArc( rect , point1, point2 /*, m_labelVec[0], m_labelVec[1]*/);
	
}