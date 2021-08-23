#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS
{
	enum {
		CLERK, SENIOR, ASSIST, MANAGER
	};
	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
		}
	}
}
class NameCard
{
private:
	char* name;
	char* comp;
	char* addrnum;
	int pos;
public:
	NameCard(const char* pname, const char* pcomp, const char* pnum, int n) : pos(n)
	{
		name = new char[strlen(pname) + 1];
		strcpy(name, pname);
		comp = new char[strlen(pcomp) + 1];
		strcpy(comp, pcomp);
		addrnum = new char[strlen(pnum) + 1];
		strcpy(addrnum, pnum);
	}
	void ShowNameCardInfo()
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << comp << endl;
		cout << "전화번호: " << addrnum << endl;
		cout << "직급: "; COMP_POS::ShowPositionInfo(pos);
		cout << endl;
	}
	~NameCard()
	{
		delete[]name;
		delete[]comp;
		delete[]addrnum;
	}
};
int main()
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}