#include<iostream>
using namespace std;
class cuboid{
private:
	double length;
	double width;
	double height;
public:
	void input() {
		cin >> length >> width >> height;
	}
	void volumn() {
		cout << "体积:" << length * width * height << endl;
	}
};
int main() {
	cuboid cubo[3];//3个cuboid类型的数组
	for (int i = 0; i < 3; i++)
	{
		cout << "请输入第" << i + 1 << "个长方柱的长、宽、高:" << endl;
		cubo[i].input();
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i + 1 << "个长方柱体积为:";
		cubo[i].volumn();
	}
	return 0;
}