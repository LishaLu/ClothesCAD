#pragma once
const double PIXELPERCM = 5;

   // ���=1/5��Χ *2 
   //��ɽ��=1/10 ��Χ+2.5

//// 1. ����������   ���� �³�  �γ�   ������Χ����Χ����Χ���°ڣ���� 
//const double _bodyLength = 56; // �³�
//const double _hipLength = 5;  // �γ�
//const double _bust = 84;  //  ��Χ 
//const double _waist = 66; // ��Χ
//const double _hip = 90;   // ��Χ
//const double _hem = 110;   // �°�Χ
//const double shoulderWidth = 36 ; // ���
//
//// 2. ������һЩ�����ı�ʾ����ʵ���Ƕ�ֵ������Ϊ����ͼ�����з����޸ģ�ͳһǰ��ʹ���»���     // ��waist = 1.12  * bust
//// V-������ ��Ƭ  Ҳ�ܽк��������ʽ
//// �������Щ���ʽ������bust �� bodyLength ��������
//const double _rectWidthV_Body = _bust / 2;
//const double _rectLengthV_Body = _bodyLength;
//const double _backLength = _bodyLength - 15;  //����  ���е�����ġ�
//const double _backWidth = 1.5 * (_bust / 10) + 4 + 0.3;
//const double _fronUpChestWidth = _bust / 24 + 1.6;   //ǰ���ؿ�
//const double _backCollarWidth = (_bust / 24 + 3.6) + 3.3;
//const double _backShouldAngle = 20;
//const double _backShouldExpandLen = 1.2;


// ������ȱ��
//const double sleeveWidth = _bust / 5 * 2;
//const double rectWidthV_Sleeve = sleeveWidth - 4;//ԭ����29
//const double rectLengthV_Sleeve = _bodyLength;
//const double sleeveTiltAngle = 20;
//const double frontWidth = 1.5 * (_bust / 10) + 4 + 0.3 - 1;
//const double backWidthHeight = _bust / 5 + 4 + 1.5;
//const double frontCollarWidth = (_bust / 24 + 3.6) + 3.3;
//const double backCollarDepth = 2;
//const double frontCollarDepth = 25;
//const double frontArmholeSpace = _bust / 4 - frontWidth;
//const double backArmholeSpace = _bust / 4 - _backWidth;
//const double ribLen = 5;
//const double sleeveCrownHeight = _bust / 10 + 2.5;
//const double armStraightLine = 1;
//const double flatCrown = 8;
//const double flatCrownUp = 14;
//const double flatCrownDown = 21;
//const double cuffWidth = 21;
//const double frontShouldExpandLen = 1.2;
//const double armBindLen = 1.5;
//const double frontShouldAngle = 20;
//const double armAngle = 45;
//
//// ��������
//const double armHoleDepth = _bust / 5 + 4 + 1.5;


// ���
//const double placket = 4;//�Ž��
//const double rectWidth_Vest = bust + 2 * placket;
//const double rectLength_Vest = bodyLength;
//const double frontTiltLength = 4;
//const double frontTiltHeight = 3;


// ��пڴ�
//const double pocketLength = 10;
//const double pocketHeight = 8;
//const double pocketMouthHeight = 2;
//const double pocketHorizontalDistance = 6;
//const double pocketVerticalDistance = 8;


// ����

//const double rectWidth_backCoat = bust / 4;
//const double rectLength_backCoat = bodyLength;
//const double frontCollarWidth_Coat = 8;
//
//const double rectWidth_frontCoat = bust / 4 + frontCollarWidth_Coat;
//const double rectLength_fontCoat = bodyLength;
/*
//����=�뾶��Բ�Ľǻ�����  �� l = R����     ����=Բ�ܳ���Բ�ĽǽǶ�/360�㼴 l = 2��R��n / 360��
// 1.�ҿ�ʼ�������������࣬һ�����Ȼ�չ��ʱ���࣬һ�����Ȼ��࣬���Ƿ���ǰ���Ǹ����е㲻����ư�����Ҳ���Կ��������Ρ�
// 2. ��ͨ����ķ�ʽ�ˣ�����ͨ�����ݻ�����ֱ�ߺ�����
// 3.���캯�����ܲ����в�����������չ�����Ǹ����ε������ǲ����ġ�
class CAnnularSector{  


public:
	CAnnularSector(double outArcLength, double inArcLength) :m_outArcLength(outArcLength), m_inArcLength(inArcLength) {}
	//~CAnnularSector();


public:

	static void  UnfoldAnnularSector( CAnnularSector annularSector,int pieceNumber) {

     double arcLengthDifference = annularSector.m_outArcLength - annularSector.m_inArcLength;
     double outEachPieceLength = annularSector.m_outArcLength / pieceNumber;
     double inEachPieceLength = annularSector.m_inArcLength / pieceNumber;

	 // �����߶�

	// ���ظ�ɶͼ���أ�����һ�������

}


//{ //չ�� 
//
//	
//	//if()
//
//
//}
//
//void  MergeAnnularSector(int pieceNumber) { //�ϲ�
//
//	double difference = outArcLength - inArcLength;
//}


public://1.  �Ҳ�̫����������д�ɳ�Ա�������Ǻ������������������������� 2 ��Ƭ��Ӧ��д�ģ�����������������Ȼ����������
	double m_outArcLength;  // �⻡��
	double m_inArcLength; // �ڻ���
	


};*/









// 1. �������3������  2����Ҽ��һ�½Ƿ��ߵĺ����Բ��ԣ��Ҹ��㷢���ĵ���������ͼ
////������֪�����ߡ�
//CLine CommonTool::GetVerticalLine1(CLine verLine, CPoint1 point) {
//
//	CPoint1 endPoint(0, 0);
//
//	if (abs(verLine.m_st.m_x - verLine.m_ed.m_x) < 0.003)  // ƽ����y��	
//
//		endPoint = CPoint1(verLine.m_st.getX(), point.getY());
//
//	else if (abs(verLine.m_st.m_y - verLine.m_ed.m_y) < 0.003)   // ƽ����x��
//
//		endPoint = CPoint1(point.getX(), verLine.m_st.getY());
//
//	else {// ���ڷ�0б��
//
//		double k = (-1)*(verLine.m_st.m_x - verLine.m_ed.m_x) / (verLine.m_st.m_y - verLine.m_ed.m_y);
//		CPoint1 temPoint = CPoint1(0, point.getY() - k * point.getX()); // ��ȡ�����㡣y=kx+b
//		CLine verLine1 = CLine(point, temPoint);
//		endPoint = GetCrossPoint(verLine, verLine1);// point���ĶԲ���
//	}
//	return  CLine(point, endPoint);
//}
//
//// ����Լ����������Լ����һ����ռ����֮����һ���ǡ���
//// VerConstraintRelation(CVertex *verLine,��CPoint point, CPoint footPoint, double percent);
//VerConstraintRelation(CVertex *verLine, CPoint point, CPoint footPoint, double percent);


//CLine  CommonTool::getRatioLine(CLine *verLine, CPoint1 point, double percent) {// ��֪��  �����ߵ����  
//
//	CPoint1 endPoint(point.m_x, 0);
//	double dis = Distance(verLine->GetSt, verLine->GetEd);
//	endPoint.m_y = point.m_y + percent * dis;
//
//	return CLine(point, endPoint);
//}


//CLine  CommonTool::getRatioLine(CLine *verLine, double distance, CLine *crossLine) {//���Ҳ�ܽб���Լ���ɣ�
//
//	CPoint1 startPoint = CPoint1(verLine.getX() + distance, verLine.getY());
//	CPoint1 endPoint = GetCrossPoint(verLine, crossLine);
//	return CLine(startPoint, endPoint);
//}


