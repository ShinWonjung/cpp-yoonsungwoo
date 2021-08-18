#include <iostream>
int BoxVolume(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}
int BoxVolume(int num1, int num2)
{
	return num1 * num2;
}
int BoxVolume(int num)
{
	return num;
}
int main()
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << '\n';
	std::cout << "[5, 5] : " << BoxVolume(5, 5) << '\n';
	std::cout << "[7] : " << BoxVolume(7) << '\n';
	//std::cout << "[] : " << BoxVolume() << '\n';

	return 0;
}