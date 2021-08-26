#include <iostream>
using namespace std;

template <class T>
T SumArray(T arr[], int len)
{
	T sum = 0;
	for (int i = 0; i < len; i++)
		sum += arr[i];
	return sum;
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	cout << SumArray(arr, 5);
	return 0;
}