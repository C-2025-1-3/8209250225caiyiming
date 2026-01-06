//student.cpp
#include<iostream>
#include"student.h"
using namespace std;
void student::display() {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void student::set_value(int n,const char * na, char s) {
	num = n;
	int i;
	for (i = 0; i < 19 && na[i] != '\0'; i++)
		name[i] = na[i];
	name[i] = '\0';//记得添加字符串结束符
	sex = s;
}