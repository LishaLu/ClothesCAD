#pragma once
#include "EnumClass.h"
#include "constant.h"

class PointOnLinePosition
{

public:
	PointOnLinePosition(LineStOrEd pos, double distance = 0L) :m_pos(pos),m_distance(distance * PIXELPERCM) {}

public:
	LineStOrEd m_pos;
	double m_distance;

};



