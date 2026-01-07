#include<iostream>
using namespace std;
int max(int x, int y);
int min(int x, int y);
int main()
{
	int m, n;
	cout << "请依次输入两个自然数m,n:" << endl;
	cin >> m >> n;
	cout <<"m,n最大公因数为:"<< max(m,n) << endl;
	/*cout << min(m, n) << endl;*/
	return 0;
}
int max(int x, int y)//求最大公因式函数
{
	int i,Max;
	if (x < y)
	{
		i = x;
		x = y;
		y = i;
	}
	for(i=y;i>0;i--)
		if (x % i == 0 && y % i == 0)
		{
			Max=i;
			break;
		}
	return Max;
}
int min(int x, int y)//求最小公倍数函数
{
	int i,Min;
	int z = (x > y) ? x : y;
	for(i=z;i<=x*y;i++)
		if(i%x==0&&i%y==0)
		{
			Min = i;
			break;
		}
	return Min;
}