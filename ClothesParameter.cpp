#include "pch.h"
#include "ClothesParameter.h"

ClothesParameter::ClothesParameter(double bodyLength, double bust,
	double waist, double backLength, double hem, double shouldWidth,
	double hip, double ribLength,double ribWidth, double backShoulderAngle,
	double frontShoulderAngle, double cuff, double sleeveLenght,BOOL gaoji, COLORREF color, float ratio) :
	m_bodyLength(bodyLength), m_bustGirth(bust), m_waistGirth(waist),
	m_backLength(backLength), m_hemGirth(hem), 
	m_shouldWidth(shouldWidth), m_hipGirth(hip),  m_ribLength (ribLength), m_ribWidth(ribWidth),
	m_cuffGirth(cuff),
	m_sleeveLength(sleeveLenght),
	m_backShoulderAngle(backShoulderAngle),
	m_frontShoulderAngle(frontShoulderAngle),m_gaoji(gaoji),
	m_color(color), m_ratio(ratio)
{}


void ClothesParameter::Clear() {
	
	m_bodyLength = 0;// 那我跟const里面的命名会不会冲突
	m_bustGirth = 0;
    
	m_backLength = 0;
	m_shouldWidth = 0;
	
	
	m_waistGirth = 0;
	m_hipGirth = 0;
	m_hemGirth = 0;
	
	m_ribLength = 0;
	m_ribWidth = 0;

    m_frontShoulderAngle = 0;
	m_backShoulderAngle = 0;

	m_cuffGirth = 0;
	m_gaoji = FALSE;

	m_color = RGB(255, 0, 0);

	m_ratio = 1.0;
	
}