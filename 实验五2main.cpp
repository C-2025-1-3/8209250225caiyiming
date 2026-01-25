#include <iostream>
#include "student.h"
using namespace std;

int main() {
    Student stud1, stud2, stud3;
    cout << "=== 学生信息管理系统 ===" << endl << endl;
    cout << "学生1：" << endl;
    stud1.set_value(1001, "张三", 'm');
    stud1.display();
    cout << "学生2：" << endl;
    stud2.set_value(1002, "李四", 'f');
    stud2.display();
    cout << "学生3：" << endl;
    stud3.set_value(1003, "王五", 'm');
    stud3.display();
    cout << "测试数据验证功能：" << endl;
    Student test_stud;
    test_stud.set_value(-1, "这是一个非常长的名字可能会超出数组限制", 'x');
    test_stud.display();
    cout << "修改学生1的信息：" << endl;
    stud1.set_value(2001, "张明", 'm');
    stud1.display();
    return 0;
}