#include<iostream>
using namespace std;
void bubblesort(double list[], int listsize)
{
	bool changed = true;//初始化为true，保证循环至少执行一次
	do {
		changed = false;
		for (int j = 0; j < listsize - 1; j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}
int main()
{
	double n;
	double num[10] = { 0 };
	cout << "输入含10个数字的数组：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		num[i] = n;
	}
	bubblesort(num, 10);
	for (int i = 0; i < 10; i++)
		cout << num[i] << " ";
	cout << endl;
	return 0;
}