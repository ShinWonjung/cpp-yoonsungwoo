#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Book
{
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(const char* title, const char* isbn, const int price) : price(price)
	{
		this->title = new char[strlen(title) + 1];
		strcpy(this->title, title);
		this->isbn = new char[strlen(isbn) + 1];
		strcpy(this->isbn, isbn);
	}
	Book& operator=(const Book& ref)
	{
		delete[] title;
		delete[] isbn;
		
		title = new char[strlen(ref.title) + 1];
		strcpy(title, ref.title);
		isbn = new char[strlen(ref.isbn) + 1];
		strcpy(isbn, ref.isbn);
		price = ref.price;
		return *this;
	}
	void ShowBookInfo() const
	{
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "가격: " << price << endl;
	}
	~Book()
	{
		delete[]title;
		delete[]isbn;
	}
};

class EBook :public Book
{
private:
	char* DRMKey;
public:
	EBook(const char* title, const char* isbn, const int price, const char* DRMKey) :Book(title, isbn, price)
	{
		this->DRMKey = new char[strlen(DRMKey) + 1];
		strcpy(this->DRMKey, DRMKey);
	}
	EBook& operator=(const EBook& ref)
	{
		Book::operator=(ref);
		delete[] DRMKey;
		DRMKey = new char[strlen(ref.DRMKey) + 1];
		strcpy(DRMKey, ref.DRMKey);
		return*this;
	}
	void ShowEBookInfo() const
	{
		ShowBookInfo();
		cout << "인증키: " << DRMKey << endl;
	}
	~EBook()
	{
		delete[]DRMKey;
	}
};