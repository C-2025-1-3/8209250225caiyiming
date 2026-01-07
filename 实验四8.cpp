#include<iostream>
#include"stdio.h"//c标准输入输出库
using namespace std;
void f(char* st, int i)
{
	st[i] = '\0';//结束符
	cout << st<<" ";
	if (i > 1)
		f(st, i - 1);//递归调用
}
void main()
{
	char st[] = "abcd";
	f(st, 4);
}