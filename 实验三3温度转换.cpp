#include<iostream>
#include<iomanip>
#include"mytemp.h"
using namespace std;
int main()
{
	cout << "Celsius Fahrenheit | Fahrenheit Celsius" << endl;
	for (int i = 0; i < 10; i++)
	{
		double Celsius = 40.0 - i;
		double Fahrenheit = 120.0 - 10 * i;
		cout << fixed << setprecision(1);
		cout << setw(6) << Celsius << setw(10) << celsius_to_fah(Celsius) << setw(4) << "|";
		cout << setw(8) << Fahrenheit;
		cout << fixed << setprecision(2) << setw(10) << fahrenheit_to_cels(Fahrenheit) << endl;
	}
	return 0;
}