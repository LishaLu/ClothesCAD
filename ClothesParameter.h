#pragma once
class ClothesParameter
{


public:

	// �����֯�������Ĭ��ֵ
	//ClothesParameter::ClothesParameter(double bodyLength =/* 56*/ 116, 
	//	                               double bust =/* 100*/ 88,
	//								   double waist = 66, double backLength = 41,
	//								   double hem = 60, double shouldWidth = 40,
	//								   double hip = 88, double ribLength =/* 5*/ 18,double ribWidth =/*60*/ 120,
	//								   double backShoulderAngle = 0,
	//								   double frontShoulderAngle = 0,
	//								   double cuff = 18,
	//	                               double sleeveLength = 52,
	//								   BOOL gaoji=false,
	//	                               COLORREF color = RGB(255,0,0),
	//								   float ratio = 1.0
	//	);

	//��ʾ�����
	ClothesParameter::ClothesParameter(double bodyLength =/* 56*/ 116,
		double bust =/* 100*/ 84,
		double waist = 66, double backLength = 41,
		double hem = 60, double shouldWidth = 38,
		double hip = 84, double ribLength =/* 5*/ 26, double ribWidth =/*60*/ 116,
		double backShoulderAngle = 0,
		double frontShoulderAngle = 0,
		double cuff = 18,
		double sleeveLength = 52,
		BOOL gaoji = false,
		COLORREF color = RGB(255, 0, 0),
		float ratio = 1.0
	);




	// �����֯����ֱͲȹ
	//ClothesParameter::ClothesParameter(double bodyLength =/* 56*/ 120,
	//	double bust =/* 100*/ 84,
	//	double waist =84, double backLength = 41,
	//	double hem = 84, double shouldWidth = 38,
	//	double hip = 84, double ribLength =/* 5*/ 26, double ribWidth =/*60*/ 84,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 52,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//);




	//// �����֯����A��ȹ
	//ClothesParameter::ClothesParameter(double bodyLength = 120,
	//	double bust = 84,
	//	double waist = 90, double backLength = 41,
	//	double hem = 120, double shouldWidth = 38,
	//	double hip = 98, double ribLength = 26, double ribWidth = 110,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 52,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//	);


	// �����֯������βȹ
	//ClothesParameter::ClothesParameter(double bodyLength = 120,
	//	double bust = 84,
	//	double waist = 68, double backLength = 41,
	//	double hem = 120, double shouldWidth = 38,
	//	double hip = 90, double ribLength = 26, double ribWidth = 60,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 52,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//
	//);


	//	// �����֯��������ȹ
	//ClothesParameter::ClothesParameter(double bodyLength = 120,
	//	double bust = 84,
	//	double waist = 100, double backLength = 41,
	//	double hem = 60, double shouldWidth = 38,
	//	double hip = 120, double ribLength = 26, double ribWidth = 110,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 52,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//);


		// �����֯����T��ȹ
	//ClothesParameter::ClothesParameter(double bodyLength = 120,
	//	double bust = 84,
	//	double waist = 84, double backLength = 41,
	//	double hem = 60, double shouldWidth = 46,
	//	double hip = 80, double ribLength = 26, double ribWidth = 70,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 52,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//	);


  //1. �����֯- V������
	//ClothesParameter::ClothesParameter(double bodyLength = 56,
	//	double bust = 84,
	//	double waist = 80, double backLength = 41,
	//	double hem = 84, double shouldWidth = 36,
	//	double hip = 84, double ribLength = 5, double ribWidth = 84,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 52,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//);
	//
	//  1. �����֯- V�쿪��
	//ClothesParameter::ClothesParameter(double bodyLength = 56,
	//	double bust = 84,
	//	double waist = 84, double backLength = 41,
	//	double hem = 84, double shouldWidth = 36,
	//	double hip = 84, double ribLength = 15, double ribWidth = 84,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 52,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//);

		// 3 �����֯-1
	//ClothesParameter::ClothesParameter(double bodyLength = 56,
	//	double bust = 84,
	//	double waist = 84, double backLength = 41,
	//	double hem = 78, double shouldWidth = 36,
	//	double hip = 84, double ribLength = 15, double ribWidth = 78,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 28,
	//	double sleeveLength = 52,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//);

    //	1չ����֯����
	//ClothesParameter::ClothesParameter(double bodyLength = 60,
	//	double bust = 84,
	//	double waist = 68, double backLength = 41,
	//	double hem = 120, double shouldWidth = 38,
	//	double hip = 90, double ribLength = 26, double ribWidth = 60,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 52,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//);

    // 5 �ָ��֯���������ָ����ʽ1
//ClothesParameter::ClothesParameter(double bodyLength = 110,
//		double bust = 90,
//		double waist = 90, double backLength = 42,
//		double hem = 90, double shouldWidth = 38,
//		double hip = 90, double ribLength = 15, double ribWidth = 90,
//		double backShoulderAngle = 20,
//		double frontShoulderAngle = 20,
//		double cuff = 22,
//		double sleeveLength = 80,
//		BOOL gaoji = false,
//		COLORREF color = RGB(255, 0, 0),
//        float ratio = 1.0
//);
	

// 5 �ָ��֯�������зָ����ʽ2
//ClothesParameter::ClothesParameter(double bodyLength = 110,
//	double bust = 120,
//	double waist = 90, double backLength = 42,
//	double hem = 90, double shouldWidth = 38,
//	double hip = 90, double ribLength = 15, double ribWidth = 90,
//	double backShoulderAngle = 20,
//	double frontShoulderAngle = 20,
//	double cuff = 22,
//	double sleeveLength = 80,
//	BOOL gaoji = false,
//	COLORREF color = RGB(255, 0, 0),
//	float ratio = 1.0
//);

//  5. �ָ��֯- ���зָ�
	//ClothesParameter::ClothesParameter(double bodyLength = 80,
	//	double bust = 96,
	//	double waist = 96, double backLength = 41,
	//	double hem = 96, double shouldWidth = 36,
	//	double hip = 96, double ribLength = 5, double ribWidth = 96,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 30,
	//	double sleeveLength = 45,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//);



	//  6. ���۱�֯1-�����߷���
	//ClothesParameter::ClothesParameter(double bodyLength = 56,
	//	double bust = 84,
	//	double waist = 66, double backLength = 41,
	//	double hem = 72, double shouldWidth = 36,
	//	double hip = 84, double ribLength = 5, double ribWidth = 72,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 20,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0);

	//  6. ���۱�֯2-��ڷ���
	/*ClothesParameter::ClothesParameter(double bodyLength = 110,
		double bust = 84,
		double waist = 66, double backLength = 41,
		double hem = 120, double shouldWidth = 36,
		double hip = 84, double ribLength = 5, double ribWidth = 120,
		double backShoulderAngle = 20,
		double frontShoulderAngle = 20,
		double cuff = 18,
		double sleeveLength = 20,
		BOOL gaoji = false,
		COLORREF color = RGB(255, 0, 0),
	    float ratio = 1.0
	);*/

	//  6. ���۱�֯3-˫��ȹ
	/*ClothesParameter::ClothesParameter(double bodyLength = 60,
		double bust = 84,
		double waist = 66, double backLength = 41,
		double hem = 120, double shouldWidth = 36,
		double hip = 84, double ribLength = 5, double ribWidth = 120,
		double backShoulderAngle = 20,
		double frontShoulderAngle = 20,
		double cuff = 18,
		double sleeveLength = 20,
		BOOL gaoji = false,
		COLORREF color = RGB(255, 0, 0),
	    float ratio = 1.0);*/

	//  7. ���ԳƱ�֯-��ʽ2
	//ClothesParameter::ClothesParameter(double bodyLength = 80,
	//	double bust = 84,
	//	double waist = 76, double backLength = 41,
	//	double hem = 84, double shouldWidth = 36,
	//	double hip = 84, double ribLength = 5, double ribWidth = 84,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 50,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//);


		//  8. �����֯- ñ��1
	//ClothesParameter::ClothesParameter(double bodyLength = 56,
	//	double bust = 84,
	//	double waist = 80, double backLength = 41,
	//	double hem = 84, double shouldWidth = 36,
	//	double hip = 84, double ribLength = 5, double ribWidth = 84,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 50,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//);
	//
	// �����֯-ñ��2
	//ClothesParameter::ClothesParameter(double bodyLength = 56,
	//	double bust = 84,
	//	double waist = 84, double backLength = 41,
	//	double hem = 78, double shouldWidth = 36,
	//	double hip = 84, double ribLength = 15, double ribWidth = 78,
	//	double backShoulderAngle = 20,
	//	double frontShoulderAngle = 20,
	//	double cuff = 18,
	//	double sleeveLength = 50,
	//	BOOL gaoji = false,
	//	COLORREF color = RGB(255, 0, 0),
	//	float ratio = 1.0
	//);




	
	void Clear();

public:

	double m_bodyLength;
    double m_bustGirth;

   	double m_backLength;
	double m_shouldWidth;

    double m_waistGirth;
    double m_hipGirth;
	double m_hemGirth;

	double m_ribLength;
	double m_ribWidth;

	double m_frontShoulderAngle;
	double m_backShoulderAngle;

	double m_cuffGirth;

	double m_sleeveLength;

	BOOL m_gaoji;

	COLORREF m_color;
	
	float m_ratio;

};

