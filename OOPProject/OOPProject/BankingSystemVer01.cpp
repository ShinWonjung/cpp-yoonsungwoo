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
		std::cout << "선택: ";
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
			std::cout << "오류" << '\n';
		}
		std::cout << '\n';
	}
	return 0;
}

void ShowMenu()
{
	std::cout << "-----Menu-----\n";
	std::cout << "1. 계좌개설\n";
	std::cout << "2. 입 금\n";
	std::cout << "3. 출 금\n";
	std::cout << "4. 계좌정보 전체 출력\n";
	std::cout << "5. 프로그램 종료\n";
}

void MakeAccount()
{
	int accnum, balance;
	char name[10];
	std::cout << "[계 좌 개 설]\n";
	std::cout << "계좌ID: ";
	std::cin >> accnum;
	std::cout << "이름: ";
	std::cin >> name;
	std::cout << "입금액: ";
	std::cin >> balance;

	accarr[acccnt].accID = accnum;
	accarr[acccnt].balance = balance;
	strcpy(accarr[acccnt].name, name);
	acccnt++;
}

void DepositMoney()
{
	int accnum, money;
	std::cout << "[입   금]\n";
	std::cout << "계좌ID: ";
	std::cin >> accnum;
	std::cout << "입금액: ";
	std::cin >> money;
	
	for (int i = 0; i <= acccnt; i++)
	{
		if (accarr[i].accID == accnum)
		{
			accarr[i].balance += money;
			std::cout << "입금완료\n";
			return;
		}
	}
	std::cout << "계좌번호 오류\n";
}

void WithdrawMoney()
{
	int accnum, money;
	std::cout << "[출   금]\n";
	std::cout << "계좌ID: ";
	std::cin >> accnum;
	std::cout << "출금액: ";
	std::cin >> money;

	for (int i = 0; i < acccnt; i++)
	{
		if (accarr[i].accID == accnum)
		{
			if (accarr[i].balance < money)
			{
				std::cout << "잔액부족\n";
				return;
			}
			accarr[i].balance -= money;
			std::cout << "출금완료\n";
			return;
		}
	}
	std::cout << "계좌번호 오류";
}

void ShowAllAccInfo()
{
	for (int i = 0; i < acccnt; i++)
	{
		std::cout << "계좌ID: " << accarr[i].accID << '\n';
		std::cout << "이 름: " << accarr[i].name << '\n';
		std::cout << "잔 액: " << accarr[i].balance << "\n\n";
	}
}