#include<iostream>
using namespace std;
bool is_prime(int num);
int main()
{
	int count = 0;
	int num = 2;
	while (count < 200)
	{
		if (is_prime(num))
		{
			cout << num << "\t";
			count++;
			if (count % 10 == 0)
				cout << endl;
		}
		num++;
	}
	return 0;
}
bool is_prime(int num)
{
	int i;
	for (i = 2; i <= num - 1; i++)
		if (num % i == 0)
			return false;
	return true;
}