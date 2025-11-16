#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.14159;
	double radius, height, volume;
	cout << "请输入圆锥半径：" << endl;
	cin >> radius;
	cout << "请输入圆锥的高：" << endl;
	cin >> height;
	volume = (1.0 / 3.0) * PI * radius * radius * height;
	cout << "圆锥的体积为：" << volume << endl;
	return 0;
}