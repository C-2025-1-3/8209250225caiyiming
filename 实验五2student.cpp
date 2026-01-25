#include<iostream>
#include"student.h"
using namespace std;
void Student::set_value(int n, const char* nam, char s) {
    if (n > 0) {
        num = n;
    }
    else {
        num = 0;
        cout << "学号应为正整数！" << endl;
    }
    strncpy(name, nam, 19);
    name[19] = '\0';
    if (s == 'm' || s == 'M' || s == 'f' || s == 'F') {
        sex = s;
    }
    else { // 未知性别
        cout << "性别应为 'm' 或 'f'！" << endl;
    }
}
void Student::display() {
    cout << "学生信息：" << endl;
    cout << "学号: " << num << endl;
    cout << "姓名: " << name << endl;
    cout << "性别: ";
    switch (sex) {
    case 'm':
    case 'M':
        cout << "男" << endl;
        break;
    case 'f':
    case 'F':
        cout << "女" << endl;
        break;
    default:
        cout << "未知" << endl;
        break;
    }
}