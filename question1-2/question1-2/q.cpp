#include <iostream>
void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void swap(char* c1, char* c2)
{
	char temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}
void swap(double* d1, double* d2)
{
	double temp = *d1;
	*d1 = *d2;
	*d2 = temp;
}
int main()
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << '\n';

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << '\n';

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << '\n';

	return 0;
}