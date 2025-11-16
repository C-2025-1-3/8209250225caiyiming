#include<iostream>
using namespace std;
int main()
{
	int a;
	double x, xn;
	cout << "请输入a:" << endl;
	cin >> a;
	if (a < 0)
	{
		cout << "请输入一个非负数" << endl;
		return 0;
	}
	else
	{
		x = a;
		do
		{
			xn = (x + a / x) / 2;
			if (xn - x < 1e-5 && xn - x>-1e-5)
			{
				break;
			}
			x = xn;
		} while (true);
		cout << a << "的平方根为：" << xn << endl;
		return 0;
	}
}