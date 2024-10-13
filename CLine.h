#pragma once
#include "CFigure.h"
#include "CPoint1.h"
#include "EnumClass.h"
#include "PointOnLinePosition.h"

class CLine :public CFigure // ����͵���û�м̳й�ϵ��������Ҫ�õ������������ is a �м̳�  have aû�м̳�    �������м̳У�������ͷ�ļ���
{
public:

	CLine();
	CLine(CPoint1 s, CPoint1 e, CString stLable=_T("T1"), CString edLable=_T("T2"));
	virtual void draw(CDC * pDC);
	virtual void draw(CDC * pDC, CPen * ptempPen);
	virtual void drawWithLabel(CDC * pDC, CPen * ptempPen, CSize lableOffset = CSize(2, 2));
	void saveLabel();
	void drawLabel(CDC *PDC, CSize lableOffset = CSize(2, 2));
	~CLine();


public:

	CPoint1 GetSt () const;
	CPoint1 GetEd () const;

	double Getlen();
	void SetLineABC();
	void SetSt(CPoint1 st);
	void SetEd(CPoint1 ed);

	bool  IsHoritalLine() const;
	bool  IsVerticalLine() const;

private:
	void JudgeStpointAndEdpoint();
public:

	//��֪��       ֱ���ϵ�����һ��
//bool GetLineByPointAndSlope(CPoint1 point1, CPoint1 &point2)  // 1.����д���Բ�
	static CLine GetHoritalLine(CPoint1 point1);
	static CLine GetVerticalLine(CPoint1 point1);
//	static CLine GetRayLine1(CPoint1 &origPoint, double length, double angle /*, CPoint1 & OutPt*/);
//	static CPoint1 GetExpandLine1(CPoint1 pt1, CPoint1 pt2, double nLen /*, CPoint1 &OutPt*/);
	static bool JudgeStpointAndEdpoint(CLine &line);

public://1 ֮ǰ��Ķ�����֪������ֱ��   2������Ҫ����֪���б������ֱ�ߡ�3 ��ת���ɵ��˻����ٶ����Ա������
	   //4 return (CPoint1,CPoint)
	CPoint1 m_st;
	CPoint1 m_ed;
	CString m_stLabel;
	CString m_edLabel;
	static const  CSize labelOffset;
	double m_a;  //ֱ�߷���ϵ�� ax+by+c=0��
	double m_b;
	double m_c;

public:
	static bool IsPointOnLine(CPoint1 point, CLine &line);//��������
	static bool IsLineParllLine(CLine line1, CLine line2);//ƽ��
	static bool IsLineVerLine(CLine line1, CLine line2);// ��ֱ 
	static bool IsOverlap(CLine line1, CLine line2); //�ص�
	static bool IsHaveSamePoint(CLine line1, CLine line2);// ����
//	static CPoint1 GetCrossPoint(CLine l1, CLine l2); // �������ֱ�ߵĽ���


	/*�ӳ��߷�Ϊ���֣�
	���1:   a...........b ���m_lenΪ������Ϊ: a.............b.....c
    ���2��  a...........b�����m_lenΪ��ֵ����Ϊc....a............b
	*/
	static CPoint1 GetLineExpandPoint(const CLine &line, double nLen);    //�ӳ���
	static CSize GetCSizeOnLineWithDistance(const CLine & line, double distance);
	static CPoint1 GetPointOnLineWithConstraint(const CLine & line, PointOnLinePosition constraint);
	static CLine GetRayLine(const CPoint1 &origPoint, double length, double angle); //����
	static CLine GetRayLine(const CPoint1 &origPoint, CLine & crossLine, double angle);//����

	//double���͵ı����ж��Ƿ���ͬ������|a-b|< 0.003
	static double Get2PointDistance(const CPoint1 &point1,const  CPoint1 &point2);
	static double GetPointLineDistance(CPoint1 &point, CLine &line);

/*
	static CPoint1 GetPointInLine(CLine line, double distance, FromPoint fromPoint, Side side);
	static CLine GetParllLine(CLine line, double d, Drection direction);  //���ƽ����
	static CLine GetUniParellLine(CLine line1, CLine line2, CLine line3, double d);//���Ψһһ��ƽ���ߣ�����߶�
	static CLine GetVerLine(CLine line, double distance, double height, Drection direction);
	static CLine GetRotateLine(CLine line, double b, Drection direction);// ���һ��ֱ�ߵ���ת����

*/

public:
	static CLine GetParllLine(const CLine & line, double d);

	static CLine GetVerticalLinebyOtherPoint( CLine & line, CPoint1 point);
	
	static CPoint1 GetCrossPoint( CLine & l1,  CLine & l2); // �������ֱ�ߵĽ���

	static CPoint1 GetLinePoint(const CLine & l1, LineStOrEd ops); // ������ϵĵ㣬�����ǿ�ʼ�㣬 ����1/3�� 2/3��


	static CPoint1 calLenOnLine(CLine line, double len);
	static CLine angleBisection(CLine line1, CLine line2, CPoint1 &commonPoint);
};

struct CLinePoint{
	CLine line;
	LineStOrEd ops;
};



