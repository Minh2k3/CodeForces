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

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s, t;
	cin >> s >> t;
	if (s.size() != t.size()){
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < s.size(); i++){
		if (s[i] != t[t.size() - i - 1]){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
