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

bool distinctYear(int n){
	string s = to_string(n);
	set <char> st;
	for (int i = 0; i < 4; i++)
		st.insert(s[i]);
	if (st.size() == 4)
		return true;
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	do {
		n++;
	} while(!distinctYear(n));
	cout << n;
}
