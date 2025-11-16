#include<iostream>
using namespace std;
int main()
{
	int i, a, b;
	for (i = 1; i <= 5; ++i)
	{
		for (a = 1; a <= 5-i; ++a)
		{
			cout << " ";
		}
		for (b = 1; b <= i; ++b)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}