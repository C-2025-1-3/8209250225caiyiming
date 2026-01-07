#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < size1 && j < size2) {
		if (list1[i] <= list2[j]) {
			list3[k++] = list1[i++];
		}
		else
			list3[k++] = list2[j++];
		}
	while (i < size1)
	{
		list3[k++] = list1[i++];
	}
	while (j < size2)
	{
		list3[k++] = list2[j++];
	}
	cout << "The merged list is ";
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i]<<" ";
	}
	cout << endl;
}
int main()
{
	const int max_size = 80;
	int size1, size2;
	int list1[max_size], list2[max_size], list3[max_size * 2];
	cout << "请输入第一个数组大小及元素:" << endl;
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "请输入第二个数组大小及元素:" << endl;
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	cout << " Enter list1 :" << size1 << " ";
	for (int i = 0; i < size1; i++) {
		cout<< list1[i]<<" ";
	}
	cout << endl;
	cout << " Enter list2 :" << size2 << " ";
	for (int i = 0; i < size1; i++) {
		cout<< list2[i]<<" ";
	}
	cout << endl;
	merge(list1, size1, list2, size2, list3);
}