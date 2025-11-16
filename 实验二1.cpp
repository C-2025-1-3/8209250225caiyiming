#include<iostream>
using namespace std;
int main()
{
	char character;
	cout << "请输入一个字符：" << endl;
	cin >> character;
	if (character >= 'a' && character <= 'z')
	{
		char upper = character - 32;
		cout << "大写输出为：" << (char)upper << endl;
	}
	else
	{
		int follow = static_cast<int>(character) + 1;
		cout << "其后继字符的ASCII码值为：" << follow << endl;
	}
	return 0;
}