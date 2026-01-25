#include<iostream>
#include<cstring>
#include <cctype>
using namespace std;
int indexof(const char *s1,const char *s2)
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

int parseHex(const char* const hexString) {
    int result = 0;
    const char* p = hexString;
    if (p[0] == '0' && (p[1] == 'x' || p[1] == 'X')) {
        p += 2;
    }
    while (*p != '\0') {
        char c = tolower(*p);
        int val;
        if (c >= '0' && c <= '9') {
            val = c - '0';
        }
        else if (c >= 'a' && c <= 'f') {
            val = 10 + (c - 'a');
        }
        else {
            return 0;
        }
        result = result * 16 + val;
        p++;
    }

    return result;
}

void sortArray(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *(arr + minIndex)) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = *(arr + i);
            *(arr + i) = *(arr + minIndex);
            *(arr + minIndex) = temp;
        }
    }
}

int main()
{
	char s1[100], s2[100];
	cout << "Enter the first string:" << endl;
	cin >> s1;
	cout << "Enter the second string:" << endl;
	cin >> s2;
	int result = indexof(s1, s2);
	if (result != -1) {
		cout << "s1是s2的子串，起始下标为：" << result << endl;
	}
	else {
		cout << "s1不是s2的子串" << endl;
	}
	return 0;

    char hexStr[20];
    cout << "请输入十六进制数: ";
    cin.getline(hexStr, 20);
    int decimal = parseHex(hexStr);
    if (decimal != -1) {
        cout << "十进制值为: " << decimal << endl;
    }

    int n;
    cout << "请输入数组元素个数: ";
    cin >> n;
    int* arr = new int[n];
    cout << "请输入" << n << "个整数:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "元素[" << i << "]: ";
        cin >> *(arr + i); 
    }
    cout << "\n排序前的数组:" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    sortArray(arr, n);
    cout << "\n排序后的数组:" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " "; 
    }
    cout << endl;
    delete[] arr;
    cout << "\n程序执行完毕，内存已释放!" << endl;
    return 0;
}
