#include<iostream>
using namespace std;
#include<stdio.h>
void main()
{
	int i, j, * pi, * pj;
	pi = &i;
	pj = &j;
	i = 5;
	j = 7;
	cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;;
	cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl;
	int a[] = { 1,2,3 };
	int* p, k;
	p = a;
	for (k = 0; k < 3; k++)
		printf("%d,%d,%d,%d\n", a[k], p[k], *(p + k), *(a + k));
}