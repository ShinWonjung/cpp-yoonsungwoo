//#include <iostream>
//using namespace std;
//
//class Calculator
//{
//	int addCnt, minCnt, divCnt, gopCnt;
//
//public:
//	void Init()
//	{
//		addCnt = 0;
//		minCnt = 0;
//		divCnt = 0;
//		gopCnt = 0;
//	}
//	double Add(double n1, double n2)
//	{
//		addCnt++;
//		return n1 + n2;
//	}
//	double Div(double n1, double n2)
//	{
//		divCnt++;
//		return n1 / n2;
//	}
//	double Min(double n1, double n2)
//	{
//		minCnt++;
//		return n1 - n2;
//	}
//	double Gop(double n1, double n2)
//	{
//		gopCnt++;
//		return n1 * n2;
//	}
//	void ShowOpCount()
//	{
//		cout << "����: " << addCnt << " ����: " << minCnt << " ����: " << gopCnt << " ������: " << divCnt << endl;
//	}
//};
//int main()
//{
//	Calculator cal;
//	cal.Init();
//	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
//	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
//	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
//	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
//	cal.ShowOpCount();
//	return 0;
//}