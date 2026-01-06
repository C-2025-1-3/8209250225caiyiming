#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void input() {
		cin >> hour >> minute >> sec;
	}
	void output() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.input();
	t1.output();
	return 0;
}
//成员函数应指定为公用的，成员数据应指定为私有的
//短小或高频调用或核心接口函数适合类内定义。
//大型功能或复杂或版本敏感或模块敏感函数适合类外定义。