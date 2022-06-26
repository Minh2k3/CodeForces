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
	int cnt = 1;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i < n; i++){
		if (a[i] != a[i-1])
			cnt++;
	}
	cout << cnt;
}
