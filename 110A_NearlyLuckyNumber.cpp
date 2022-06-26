#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <set>
#include <math.h>
#include <stdlib.h>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;
 
bool isLuckyNum(string s){
	for (int i = 0; i < s.size(); i++)
		if (s[i] != '4' && s[i] != '7')
			return false;
	return true;
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string n; cin >> n;
	long long cnt = 0;
	for (int i = 0; i < n.size(); i++){
		if (n[i] == '4' || n[i] == '7')
			cnt++;
	}
	string s = to_string(cnt);
	if (isLuckyNum(s))
		cout << "YES";
	else 
		cout << "NO";
}
