#include <iostream>
using namespace std;

template <class T>
class SmartPtr
{
private:
	T* ptr;
public:
	SmartPtr(T* ptr) :ptr(ptr) {}
	T& operator*() const { return *ptr; }
	T* operator->() const { return ptr; }
	~SmartPtr() { delete ptr; }
};

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y) { }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	void SetPos(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
};

int main()
{
	SmartPtr<Point> sprt1(new Point(1, 2));
	SmartPtr<Point> sprt2(new Point(3, 4));
	sprt1->ShowPosition();
	sprt2->ShowPosition();
	sprt1->SetPos(10, 20);
	sprt2->SetPos(30, 40);
	sprt1->ShowPosition();
	sprt2->ShowPosition();
	return 0;
}