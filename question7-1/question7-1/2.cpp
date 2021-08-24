#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* name, const int age) :age(age)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	void ShowMyFriendInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~MyFriendInfo()
	{
		delete[]name;
		cout << "~MyFriendInfo" << endl;
	}
};

class MyFriendDetailInfo :public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* name, const int age, const char* addr, const char* phone) :MyFriendInfo(name, age)
	{
		this->addr = new char[strlen(addr) + 1];
		strcpy(this->addr, addr);
		this->phone = new char[strlen(phone) + 1];
		strcpy(this->phone, phone);
	}
	void ShowMyFriendDetailInfo() const
	{
		ShowMyFriendInfo();
		cout << "�ּ�: " << addr << endl;
		cout << "��ȭ: " << phone << endl;
	}
	~MyFriendDetailInfo()
	{
		delete[]addr;
		delete[]phone;
		cout << "~MyFriendDatailInfo" << endl;
	}
};
int main()
{
	MyFriendDetailInfo mdi("�ֿ���", 21, "���� ���α� ��â��", "010-1111-2222");
	mdi.ShowMyFriendDetailInfo();
	cout << endl;
	mdi.ShowMyFriendInfo();
	return 0;
}