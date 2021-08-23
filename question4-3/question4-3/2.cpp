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
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
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
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << comp << endl;
		cout << "��ȭ��ȣ: " << addrnum << endl;
		cout << "����: "; COMP_POS::ShowPositionInfo(pos);
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