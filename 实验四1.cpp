#include<iostream>
using namespace std;
int main()
{
	int num[10];
	int count = 0;
	cout << "Enter ten numbers:" << endl;
	int n;
for (int i = 1; i <=10; i++)
{
	cin >> n;
	for (int j = 0; j < count; j++)
	{
		if (num[j] == n)
			goto step1;//跳出两层结构
	}
	num[count] = n;
	count++;
step1:continue;
}
	cout << "The distinct numbers are:";
	for (int i = 0; i < count; i++)
		cout << num[i]<<" ";
	return 0;
}