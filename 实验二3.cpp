#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	double perimeter;
	cout << "请依次输入三角形的三条边a,b,c（用空格分隔）:" << endl;
	cin >> a >> b >> c;
	if (a > 0 && b > 0 && c > 0)
	{
		if (a + b > c && a + c > b && b + c > a)
		{
			perimeter = a + b + c;
			cout << "三角形的周长为：" << perimeter << endl;
			if (a==b||b==c||c==a)
			{
				cout << "该三角形是等腰三角形" << endl;
			}
			else
			{
				cout << "该三角形不是等腰三角形" << endl;
			}
		}
		else
		{
			cout << "您输入的三边无法构成三角形" << endl;
		}
	}
	else
	{
		cout << "三角形的边只能是正数" << endl;
	}
	return 0;
}