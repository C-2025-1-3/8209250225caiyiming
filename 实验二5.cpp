#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a=0, b=0, d=0, e=0;//a是英文字母，b是空格，d是数字字符，e是其他
	cout << "请输入一行字符" << endl;
	string str;
	getline(cin, str);
	for (char c : str)
	{
		if (isalpha(c))
		{
			a++;
		}
		else
		{
			if (c == ' ')
			{
				b++;
			}
			else
			{
				if (isdigit(c))
				{
					d++;
				}
				else
				{
					e++;
				}
			}
		}
	}
	cout << "统计结果为：" << endl;
	cout << "英文字母个数："<< a << endl;
	cout << "空格个数为：" << b << endl;
	cout << "数字字符个数：" << d << endl;
	cout << "其它字符个数：" << e <<endl;
	return 0;
}