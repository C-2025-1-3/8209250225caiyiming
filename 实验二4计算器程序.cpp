#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	char op;
	cout << "请输入num1:" << endl;
	cin >> num1;
	cout << "请输入运算符（+、-、*、/）：" << endl;
	cin >> op;
	cout << "请输入num2:" << endl;
	cin >> num2;
	if (op == '/' && num2 == 0)
	{
		cout << "0不能作除数" << endl;
	}
	else
	{
		switch (op)
		{
		case '+':
			cout << "计算结果为：" << num1 + num2 << endl;
			break;
		case '-':
			cout << "计算结果为：" << num1 - num2 << endl;
			break;
		case '*':
			cout << "计算结果为：" << num1 * num2 << endl;
			break;
		case '/':
			cout << "计算结果为：" << num1 / num2 << endl;
			break;
		default:
			cout << "请输入合法运算符（+、-、*、/）" << endl;
		}
	}
	return 0;
}