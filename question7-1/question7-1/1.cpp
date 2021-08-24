/*#include <iostream>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int n) :gasolineGauge(n)
	{ }
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar :public Car
{
private:
	int electricGauge;
public:
	HybridCar(int n1, int n2) :Car(n1), electricGauge(n2)
	{ }
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar :public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int n1, int n2, int n3) :HybridCar(n1, n2), waterGauge(n3)
	{ }
	void ShowCurrentGauge()
	{
		cout << "ÀÜ¿© °¡¼Ö¸°: " << GetGasGauge() << endl;
		cout << "ÀÜ¿© Àü±â·®: " << GetElecGauge() << endl;
		cout << "ÀÜ¿© ¿öÅÍ·®: " << waterGauge << endl;
	}
};

int main()
{
	HybridWaterCar watercar(100, 200, 300);
	watercar.ShowCurrentGauge();
	return 0;
}*/