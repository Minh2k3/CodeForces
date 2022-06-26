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
	int cnt = 0;
	while (n--){
		int x1, x2;
		cin >> x1 >> x2;
		if (x2 - x1 > 1)
			cnt++;
	}
	cout << cnt;
}
