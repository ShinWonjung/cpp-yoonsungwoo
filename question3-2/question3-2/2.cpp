#include <iostream>
#include <string>
using namespace std;
class Printer
{
	string s;
public:
	void SetString(string string)
	{
		s = string;
	}
	void ShowString()
	{
		cout << s << endl;
	}
};
int main()
{
	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.ShowString();
	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}