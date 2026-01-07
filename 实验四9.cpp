#include<iostream>
using namespace std;
int* f()
{
	//int list[]={1,2,3,4}局部数组，栈内存会自动释放
	int* list = new int[4];
	for (int i = 0; i < 4; i++)
		list[i] = i + 1;
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;
}
//不能，p[1]输出结果不为2