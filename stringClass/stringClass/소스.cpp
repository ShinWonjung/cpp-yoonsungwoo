#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
using namespace std;

class String
{
private:
	int len;
	char* str;
public:
	String() :len(0)
	{
		str = NULL;
	}
	String(const char* str)
	{
		len = strlen(str) + 1;
		this->str = new char[len];
		strcpy(this->str, str);
	}
	String(const String& ref) :len(ref.len)
	{
		str = new char[len];
		strcpy(str, ref.str);
	}
	~String()
	{
		delete[] str;
	}
	String& operator=(const String& ref)
	{
		if (str != NULL)
			delete[] str;
		len = ref.len;
		str = new char[len];
		strcpy(str, ref.str);
		
		return *this;
	}
	String operator+(const String& ref)
	{
		String s;
		s.len = len + ref.len - 1;
		s.str = new char[s.len];
		strcpy(s.str, str);
		strcat(s.str, ref.str);

		return s;
	}
	String& operator+=(const String& ref)
	{
		len += ref.len - 1;
		char* temp = new char[len];
		strcpy(temp, str);
		strcat(temp, ref.str);

		if (str != NULL)
			delete[] str;

		str = new char[len];
		strcpy(str, temp);
		delete[] temp;

		return *this;
	}
	bool operator==(const String& ref)
	{
		return strcmp(str, ref.str) == 0 ? true : false;
	}
	friend istream& operator>>(istream& is, String& ref);
	friend ostream& operator<<(ostream& os, const String& ref);
};

istream& operator>>(istream& is, String& ref)
{
	char str[100];
	is >> str;
	ref = String(str);
	return is;
}
ostream& operator<<(ostream& os, const String& ref)
{
	os << ref.str;
	return os;
}

int main()
{
	String str1 = "I like ";
	String str2 = "String class";
	String str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if (str1 == str3)
		cout << "동일 문자열" << endl;
	else
		cout << "비동일 문자열" << endl;

	String str4;
	cout << "문자열 입력: ";
	cin >> str4;
	cout << "입력한 문자열: " << str4 << endl;

	return 0;
}