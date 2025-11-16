#include<iostream>
using namespace std;
int main()
{
	int a, b, max, min, i;
	max = 1;
	cout << "请输入两个正整数：" << endl;
	cin >> a >> b;
	if (a < b)
	{
		i = b;
		b = a;
		a = i;
	}
	for (i = b; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			max = i;
			break;
		}
	}
	cout << "最大公约数为：" << max << endl;
	for (i = a; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			min = i;
			break;
		}
	}
	cout << "最小公倍数为：" << min << endl;
	return 0;
}