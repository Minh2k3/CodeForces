#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <set>
#include <cmath>
using namespace std;
 
string upper(string s){
	for (int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
	return s;
}
 
string lower(string s){
	for (int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
 
int main() {
	string s; cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++){
		if (islower(s[i]))
			cnt++;
	}
	if (cnt >= s.size()-cnt)
		cout << lower(s);
	else 
		cout << upper(s);
}
