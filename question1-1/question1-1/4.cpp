#include <iostream>
using namespace std;
int main()
{
	int n;
	while (1)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> n;
		if (n == -1)
		{
			cout << "���α׷��� �����մϴ�\n";
			break;
		}
		cout << "�̹� �� �޿�: " << 50 + n * 0.12 << "����\n";
	}
	return 0;
}