#include<iostream>
using namespace std;
int main()
{
	int day = 0;
	int n = 2;
	double money = 0;
	double average;
	while (n <= 100)
	{
		money = money + n * 0.8;
		n = n * 2;
		day++;
	}
	average = money / day;
	cout << "每天平均花：" << average << "元" << endl;
	return 0;
}