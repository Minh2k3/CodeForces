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
	int a[n+1];
	a[0] = 0;
	for (int i = 1; i <= n; i++){
		int x; cin >> x;
		a[x] = i;
	}
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
}
