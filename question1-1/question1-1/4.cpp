#include <iostream>
using namespace std;
int main()
{
	int n;
	while (1)
	{
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> n;
		if (n == -1)
		{
			cout << "프로그램을 종료합니다\n";
			break;
		}
		cout << "이번 달 급여: " << 50 + n * 0.12 << "만원\n";
	}
	return 0;
}