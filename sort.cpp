#include <algorithm>
// 0. sort 
// tang dan
// sort(a,a+n) (a: phan tu dau tien cua mang, n: phan tu cuoi cua mang) 
// sort(vector.begin(),vector.end())
// giam dan
// sort(a,a+n,greater<datatype>())
// 5. selection sort
// void selection_sort(int a[],int n)
// {
//		for (int i=0;i<n;i++)
//		{
//			int min_pos=i;
//			for (int j=i+1;j<n;j++)
//			{
//				if (a[i]>a[j]) swap(a[i],a[j]);
//			}
//		}
// }
// 2. insertion sort
// void insertion_sort(int a[],int n)
// {
//		for (int i=1;i<n;i++)
//		{
//			int x=a[i],pos=i-1;
//			while(pos>=0 && x<a[pos])
//			{
//				a[pos+1]=a[pos]; pos--;
//			}
//			a[pos+1]=x;
//		}
// }
// 3. counting sort
// void counting_sort(int a[],int n)
// {
//		int cnt[1e9];
//		int max=-1e9; 
//		for (int i=0;i<n;i++)
//		{
//			max=max(max,a[i]);
//			cnt[a[i]]++;
//		}
//		for (int i=0;i<=max;i++)
//		{
//			if (cnt[i]) 
//			{
//			for (int j=0;j<cnt[i];j++) cout << i;
//			}
//		}
// }
// 
// 
// 
// 
// 
//