#include<iostream>
using namespace std;
int day(int n)//n天吃剩1个函数
{
	if (n == 1)
		return 1;
	return (day(n - 1) + 1) * 2;
}
int main()
{
	cout << "第一天猴子摘了" << day(10) << "个桃子" << endl;
	return 0;
}