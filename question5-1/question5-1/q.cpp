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
	NameCard(const NameCard& copy) : pos(copy.pos)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
		comp = new char[strlen(copy.comp) + 1];
		strcpy(comp, copy.comp);
		addrnum = new char[strlen(copy.addrnum) + 1];
		strcpy(addrnum, copy.addrnum);
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
	NameCard copy1 = manClerk;
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSenior;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
}