#include <iostream>
#include <string>
#include <set>
#include <map>
#include <sstream>
using namespace std;
// Nhap xuat set
void nhap_xuat_set()
{
	
}
void nhap_xuat_map()
{

}
// Dem so luong cac phan tu khac nhau trong set
void count_element_set()
{
	int TC; cin >> TC;
	set<int> s;
	while (TC--)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			s.insert(x);
		}
		cout << s.size();
	}
}
// Dem so luong phan tu khac nhau trong map
void count_element_map()
{
	int TC; cin >> TC;
	map<int, bool> mp;
	while (TC--)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			mp[x] = true;
		}
		cout << mp.size();
	}
}
// kiem tra cac phan tu trong mot day co ton tai ko
void check_exist_set()
{
	int TC; cin >> TC;
	set<int> s;
	while (TC--)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			s.insert(x);
		}
		int q; cin >> q; int a[10];
		for (int i = 0; i < q; i++)
		{
			int x; cin >> x;
			a[i] = x;
		}
		for (int i = 0; i < q; i++)
		{
			if (s.count(a[i]) != 0) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}
void chech_exist_map()
{
	int TC; cin >> TC;
	map<int, bool> mp;
	while (TC--)
	{
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			mp[x] = true;
		}
		int q; cin >> q; int a[10];
		for (int i = 0; i < q; i++)
		{
			int x; cin >> x;
			a[i] = x;
		}
		for (int i = 0; i < q; i++)
		{
			if (mp.count(a[i]) != 0) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}
// check element exist in array a and not exist in array b
void check_exsit_array_set()
{
	set<int> s;
	int TC; cin >> TC;
	while (TC--)
	{
		int n, m; cin >> n >> m;
		int a[10], b[10];
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			a[i] = x;
		}
		for (int i = 0; i < m; i++)
		{
			int x; cin >> x;
			b[i] = x;
		}
		for (int i = 0; i < n; i++)
		{
			s.insert(a[i]);
		}
		for (int i = 0; i < m; i++)
		{
			if (s.count(b[i]) != 0) s.erase(b[i]);
		}
		bool check = false;
		for (int i = 0; i < n; i++)
		{
			if (s.count(a[i]) != 0)
			{
				cout << a[i] << " ";
				check = true;
			}
		}
		if (!check) cout << "NOT FOUND";
	}
}
void check_exsit_array_map()
{
	map<int, bool> mp;
	int TC; cin >> TC;
	while (TC--)
	{
		int n, m; cin >> n >> m;
		int a[10], b[10];
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			a[i] = x;
		}
		for (int i = 0; i < m; i++)
		{
			int x; cin >> x;
			b[i] = x;
		}
		for (int i = 0; i < n; i++)
		{
			mp[a[i]] = true;
		}
		for (int i = 0; i < m; i++)
		{
			if (mp.find(b[i]) != mp.end()) mp.erase(b[i]);
		}
		bool check = false;
		for (int i = 0; i < n; i++)
		{
			if (mp.find(a[i]) != mp.end())
			{
				cout << a[i] << " ";
				check = true;
			}
		}
		if (!check) cout << "NOT FOUND";
	}
}
// ham in ki tu xuat hien nhieu nhat trong day
void max_frequent_char()
{
	int TC; cin >> TC;
	while (TC--)
	{
		int n; cin >> n;
		map<char, int> mp;
		for (int i = 0; i < n; i++)
		{
			char x; cin >> x;
			mp[x]++;
		}
		char res; int resindex = 0;
		for (auto it : mp)
		{
			if (it.second > resindex)
			{
				resindex = it.second;
				res = it.first;
			}
		}
		cout << res << "_" << resindex;
	}
}
// ham dem so tu trong xau
void count_word_in_string()
{
	set<string> s;
	string str;
	getline(cin, str);
	stringstream ss(str);
	string word;
	while (ss >> word)
	{
		s.insert(word);
	}
	cout << s.size();
}
// ham in ra tu co so lan xuat hien nhieu nhat trong xau
void maxfre_word_in_string()
{
	set<string> s;
	string str;
	getline(cin, str);
	stringstream ss(str);
	string word;
	while (ss >> word)
	{
		s.insert(word);
	}
	cout << s.size();
}