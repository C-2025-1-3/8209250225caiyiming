#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//0xfffe十六进制
	cout << "output in unsigned int type:" << testUnint << endl;//输出原值
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;//unsigned char为8位，表示范围：0-255
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//补码，符号位为1表示负数，取反+1，结果是-2
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;//十六进制
	cout << "output in oct unsigned type:" << oct << testUnint << endl;//八进制
	float a = 3.56;
	cout << "a=" << a << endl;
	cout << "output a in int type : " << static_cast<int>(a) << endl;
	system("pause");
	return 0;
}