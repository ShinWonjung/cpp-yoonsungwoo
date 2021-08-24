/*#include <iostream>
using namespace std;

class Rectangle
{
private:
	int width;
	int height;
public:
	Rectangle(int width, int height) :width(width), height(height)
	{}
	void ShowAreaInfo() const
	{
		cout << "¸éÀû: " << width * height << endl;
	}
};

class Square :public Rectangle
{
public:
	Square(int n) :Rectangle(n, n)
	{}
};

int main()
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}*/