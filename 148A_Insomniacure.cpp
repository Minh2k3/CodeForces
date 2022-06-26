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
	int k, l, n, m, d;
	cin  >> k >> l >> m >> n >> d;
	int a[d+1] = {0};
	for (int i = k; i <= d; i+=k)
		(a[i] = 1);
	for (int i = l; i <= d; i+=l)
		(a[i] = 1);
	for (int i = m; i <= d; i+=m)
		(a[i] = 1);
	for (int i = n; i <= d; i+=n)
		(a[i] = 1);
	int cnt = 0;
	for (int i = 1; i <= d; i++)
		if (a[i])
			cnt++;
	cout << cnt;
}
