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
	int n; cin >> n;
	string s; cin >> s;
	int cnt = 0;
	for (int i = 0; i < n; i++){
		if (s[i] == 'A')
			cnt++;
	}
	if (cnt > (n-cnt))
		cout << "Anton";
	else if (cnt < (n-cnt))
		cout << "Danik";
	else
		cout << "Friendship";
}
