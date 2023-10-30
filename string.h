#pragma once
#include <iostream>
#include <string>
#include <sstream>
/* some usefull function in string
* cho string str; string a,string b;
1. str.length() (tinh do dai chuoi)
2. str.size() (tinh do dai chuoi)
3. cin,getline (Nhap vao 1 chuoi)
4. noi 2 chuoi(+), so sanh 2 chuoi theo thu tu tu dien(<,>,==)
5. a.compare(b) (so sanh 2 chuoi a va b theo thu tu tu dien)
6. str.substr(a,b) (a is index of the char begin the string you want to cut, b is the length of the string is being cut)
7. stoi (doi tu string -> integer)
8. stoll (doi tu string -> long long)
9.  stringstream (use to distiguish words in string by ' ' or another delim)
9.1
stringstream ss(str);
string word;
while(ss >> word) cout << word;
9.2
stringstream ss(str);
while(getline(ss,word,' ') cout << word
