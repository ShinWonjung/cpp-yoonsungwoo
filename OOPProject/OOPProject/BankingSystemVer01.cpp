#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdlib>

void ShowMenu();
void MakeAccount();
void DepositMoney();
void WithdrawMoney();
void ShowAllAccInfo();

enum choice { MAKE = 1, DEPOS, DRAW, SHOW, EXIT };

struct Account
{
	int accID;
	int balance;
	char name[10];
};

Account accarr[100];
int acccnt = 0;

int main()
{
	while (1)
	{
		ShowMenu();
		std::cout << "����: ";
		int _choice;
		std::cin >> _choice;
		std::cout << '\n';
		switch (_choice)
		{
		case choice::MAKE:
			MakeAccount();
			break;
		case choice::DEPOS:
			DepositMoney();
			break;
		case choice::DRAW:
			WithdrawMoney();
			break;
		case choice::SHOW:
			ShowAllAccInfo();
			break;
		case choice::EXIT:
			return 0;
		default:
			std::cout << "����" << '\n';
		}
		std::cout << '\n';
	}
	return 0;
}

void ShowMenu()
{
	std::cout << "-----Menu-----\n";
	std::cout << "1. ���°���\n";
	std::cout << "2. �� ��\n";
	std::cout << "3. �� ��\n";
	std::cout << "4. �������� ��ü ���\n";
	std::cout << "5. ���α׷� ����\n";
}

void MakeAccount()
{
	int accnum, balance;
	char name[10];
	std::cout << "[�� �� �� ��]\n";
	std::cout << "����ID: ";
	std::cin >> accnum;
	std::cout << "�̸�: ";
	std::cin >> name;
	std::cout << "�Աݾ�: ";
	std::cin >> balance;

	accarr[acccnt].accID = accnum;
	accarr[acccnt].balance = balance;
	strcpy(accarr[acccnt].name, name);
	acccnt++;
}

void DepositMoney()
{
	int accnum, money;
	std::cout << "[��   ��]\n";
	std::cout << "����ID: ";
	std::cin >> accnum;
	std::cout << "�Աݾ�: ";
	std::cin >> money;
	
	for (int i = 0; i <= acccnt; i++)
	{
		if (accarr[i].accID == accnum)
		{
			accarr[i].balance += money;
			std::cout << "�ԱݿϷ�\n";
			return;
		}
	}
	std::cout << "���¹�ȣ ����\n";
}

void WithdrawMoney()
{
	int accnum, money;
	std::cout << "[��   ��]\n";
	std::cout << "����ID: ";
	std::cin >> accnum;
	std::cout << "��ݾ�: ";
	std::cin >> money;

	for (int i = 0; i < acccnt; i++)
	{
		if (accarr[i].accID == accnum)
		{
			if (accarr[i].balance < money)
			{
				std::cout << "�ܾ׺���\n";
				return;
			}
			accarr[i].balance -= money;
			std::cout << "��ݿϷ�\n";
			return;
		}
	}
	std::cout << "���¹�ȣ ����";
}

void ShowAllAccInfo()
{
	for (int i = 0; i < acccnt; i++)
	{
		std::cout << "����ID: " << accarr[i].accID << '\n';
		std::cout << "�� ��: " << accarr[i].name << '\n';
		std::cout << "�� ��: " << accarr[i].balance << "\n\n";
	}
}