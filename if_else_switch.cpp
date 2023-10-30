#include <iostream>
#include <math.h>
#include <string.h>
#include "if_else_switch.h"

using namespace std;

void tinh_tong_hieu_tich_thuong(double a, double b)
{
	cout << a + b << " " << a - b << " " << a * b << " " << a / b;
}
// ham tinh tong cac so nguyen lien tiep tu a den b
int tong(int a,int b)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		sum += i;
	}
	return sum;
}
// ham kiem tra so nguyen to
bool is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	}
	return n > 1;
}
// Nhap xuat mang
void Nhap_xuat_mang(int n)
{
	int a[100];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}
// ham sap xep 3 so tang dan
// ham sap dat day so
void sap_dat_day_so()
{
	cout << "Nhap so bo test"; int t; cin >> t;
	while (--t)
	{
		int n; cin >> n;
		int a[10];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int map[10];
		for (int i = 0; i < n; i++)
		{
			if (a[i] == i) map[i] = i;
			else map[i] = -1;
		}
		for (int i = 0; i < n; i++)
		{
			cout << map[i];
		}
	}
}