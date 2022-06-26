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
	set <int> s;
	for (int i = 1; i <= 4; i++){
		int x; cin >> x;
		s.insert(x);
	}
	cout << 4 - s.size();
}
