#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <set>
#include <cmath>
#include <stdlib.h>
#include <sstream>
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
	int n, t; cin >> n >> t;
	string s; cin >> s;
	if (n == 1){
		cout << s;
		return 0;
	}
	while (t--){
		for (int i = 0; i < s.size() - 1; i++){
			if (s[i] == 'B' && s[i+1] == 'G'){
				s[i] = 'G';
				s[i+1] = 'B';
				i++;	
			}
		}
	}
	cout << s;
}
