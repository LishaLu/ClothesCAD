#pragma once
const double PIXELPERCM = 5;

   // 袖肥=1/5胸围 *2 
   //袖山高=1/10 胸围+2.5

//// 1. 参数的设置   纵向： 衣长  臀长   横向：胸围，腰围，臀围，下摆，肩宽 
//const double _bodyLength = 56; // 衣长
//const double _hipLength = 5;  // 臀长
//const double _bust = 84;  //  胸围 
//const double _waist = 66; // 腰围
//const double _hip = 90;   // 臀围
//const double _hem = 110;   // 下摆围
//const double shoulderWidth = 36 ; // 肩宽
//
//// 2. 下面是一些变量的表示，其实都是定值。仅是为了做图过程中方便修改，统一前面使用下划线     // 把waist = 1.12  * bust
//// V-领套衫 衣片  也能叫含参数表达式
//// 下面的这些表达式仅含有bust 和 bodyLength 两个参数
//const double _rectWidthV_Body = _bust / 2;
//const double _rectLengthV_Body = _bodyLength;
//const double _backLength = _bodyLength - 15;  //背长  是有点问题的。
//const double _backWidth = 1.5 * (_bust / 10) + 4 + 0.3;
//const double _fronUpChestWidth = _bust / 24 + 1.6;   //前上胸宽
//const double _backCollarWidth = (_bust / 24 + 3.6) + 3.3;
//const double _backShouldAngle = 20;
//const double _backShouldExpandLen = 1.2;


// 下面的先别管
//const double sleeveWidth = _bust / 5 * 2;
//const double rectWidthV_Sleeve = sleeveWidth - 4;//原来是29
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
//// 袖笼深线
//const double armHoleDepth = _bust / 5 + 4 + 1.5;


// 马夹
//const double placket = 4;//门襟宽
//const double rectWidth_Vest = bust + 2 * placket;
//const double rectLength_Vest = bodyLength;
//const double frontTiltLength = 4;
//const double frontTiltHeight = 3;


// 马夹口袋
//const double pocketLength = 10;
//const double pocketHeight = 8;
//const double pocketMouthHeight = 2;
//const double pocketHorizontalDistance = 6;
//const double pocketVerticalDistance = 8;


// 大衣

//const double rectWidth_backCoat = bust / 4;
//const double rectLength_backCoat = bodyLength;
//const double frontCollarWidth_Coat = 8;
//
//const double rectWidth_frontCoat = bust / 4 + frontCollarWidth_Coat;
//const double rectLength_fontCoat = bodyLength;
/*
//弧长=半径×圆心角弧度数  即 l = R×α     弧长=圆周长×圆心角角度/360°即 l = 2πR×n / 360°
// 1.我开始想的是设计两个类，一个是扇环展开时的类，一个是扇环类，但是发现前面那个类有点不好设计啊，但也可以看成是梯形。
// 2. 不通过类的方式了，而是通过根据弧长画直线和梯形
// 3.构造函数中能不能有不定参数啊，展开后那个梯形的数量是不定的。
class CAnnularSector{  


public:
	CAnnularSector(double outArcLength, double inArcLength) :m_outArcLength(outArcLength), m_inArcLength(inArcLength) {}
	//~CAnnularSector();


public:

	static void  UnfoldAnnularSector( CAnnularSector annularSector,int pieceNumber) {

     double arcLengthDifference = annularSector.m_outArcLength - annularSector.m_inArcLength;
     double outEachPieceLength = annularSector.m_outArcLength / pieceNumber;
     double inEachPieceLength = annularSector.m_inArcLength / pieceNumber;

	 // 画长线段

	// 返回个啥图形呢，构造一个这个类

}


//{ //展开 
//
//	
//	//if()
//
//
//}
//
//void  MergeAnnularSector(int pieceNumber) { //合并
//
//	double difference = outArcLength - inArcLength;
//}


public://1.  我不太懂这三个是写成成员变量还是函数参数，就上面那俩参数。 2 接片数应该写哪？我想的是他不属于扇环本身的性质
	double m_outArcLength;  // 外弧长
	double m_inArcLength; // 内弧长
	


};*/









// 1. 这就是那3个函数  2你帮我检查一下角分线的函数对不对，我给你发个文档，里面是图
////经过已知点求垂线。
//CLine CommonTool::GetVerticalLine1(CLine verLine, CPoint1 point) {
//
//	CPoint1 endPoint(0, 0);
//
//	if (abs(verLine.m_st.m_x - verLine.m_ed.m_x) < 0.003)  // 平行于y轴	
//
//		endPoint = CPoint1(verLine.m_st.getX(), point.getY());
//
//	else if (abs(verLine.m_st.m_y - verLine.m_ed.m_y) < 0.003)   // 平行于x轴
//
//		endPoint = CPoint1(point.getX(), verLine.m_st.getY());
//
//	else {// 存在非0斜率
//
//		double k = (-1)*(verLine.m_st.m_x - verLine.m_ed.m_x) / (verLine.m_st.m_y - verLine.m_ed.m_y);
//		CPoint1 temPoint = CPoint1(0, point.getY() - k * point.getX()); // 任取两个点。y=kx+b
//		CLine verLine1 = CLine(point, temPoint);
//		endPoint = GetCrossPoint(verLine, verLine1);// point传的对不？
//	}
//	return  CLine(point, endPoint);
//}
//
//// 比例约束　　两种约束，一个是占几分之几，一个是　　
//// VerConstraintRelation(CVertex *verLine,　CPoint point, CPoint footPoint, double percent);
//VerConstraintRelation(CVertex *verLine, CPoint point, CPoint footPoint, double percent);


//CLine  CommonTool::getRatioLine(CLine *verLine, CPoint1 point, double percent) {// 已知线  所求线的起点  
//
//	CPoint1 endPoint(point.m_x, 0);
//	double dis = Distance(verLine->GetSt, verLine->GetEd);
//	endPoint.m_y = point.m_y + percent * dis;
//
//	return CLine(point, endPoint);
//}


//CLine  CommonTool::getRatioLine(CLine *verLine, double distance, CLine *crossLine) {//这个也能叫比例约束吧？
//
//	CPoint1 startPoint = CPoint1(verLine.getX() + distance, verLine.getY());
//	CPoint1 endPoint = GetCrossPoint(verLine, crossLine);
//	return CLine(startPoint, endPoint);
//}


