#include<iostream>
using namespace std;
void count(const char s[], int counts[]);
int main()
{
	char s[100];
	int counts[26] = { 0 };
	cout << "Enter a string:";
	cin.getline(s, sizeof(s));
	count(s, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0) {
			cout << (char)('a' + i) << ":" << counts[i] << endl;
		}
	}
}
void count(const char s[], int counts[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];
		if (c >= 'A' && c <= 'Z') {
			c += 32;
		}
		if (c >= 'a' && c <= 'z') {
			int index = c - 'a';
			counts[index]++;
		}
	}
}