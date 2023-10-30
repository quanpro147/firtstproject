#include <iostream>
#include <math.h>
#include "if_else_switch.h"
#include <set>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

bool cmp(string a, string b)
{
	return a.length() < b.length();
}

void insert_sort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int tmp = a[i]; int cnt = i;
		for (int j = cnt - 1; j >= 0; j--)
		{
			if (a[j] > tmp)
			{
				a[cnt] = a[j];
				cnt--;
			}
		}
	}
}
int main()
{ 
	int n;  cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	insert_sort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}