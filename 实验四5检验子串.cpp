#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 == 0)
		return 0;
	if (len1 > len2)
		return -1;
	for (int i = 0; i <= len2 - len1; i++) {//所有起始位置
		bool match = true;
		for (int j = 0; j < len1; j++) {
			if (s2[i + j] != s1[j]) {
				match = false;
				break;
			}
		}
		if (match)
			return i;
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:" << endl;
	cin >> s1;
	cout << "Enter the second string:" << endl;
	cin >> s2;
	int result = indexOf(s1, s2);
	if (result != -1) {
		cout << "s1是s2的子串，起始下标为：" << result << endl;
	}
	else {
		cout << "s1不是s2的子串" << endl;
	}
	return 0;
}