#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double fahrenheit, celsius;
	cout << "输入华氏温度：" << endl;
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5 / 9;
	cout << "摄氏温度为：" <<fixed<<setprecision(2)<<celsius<< endl;
	return 0;
}