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
	int a[5] = {0};
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		a[x]++;
	}
	int cnt = 0;
	int r1 = a[1], r2 = 0, r3 = a[3];
	cnt = cnt + a[4] + a[3];
//	cout << r1 << " " << r2 << " " << r3 << endl;
	if (a[2] % 2 == 0)
		cnt = cnt + a[2] / 2;
	else {
		cnt = cnt + a[2] / 2;
		r2 = 1;
	}
	if (r1 > 0 && r3 > 0){
		if (r1 >= r3){
			r1 -= r3;
			r3 = 0;
		}
		else {
			r1 = 0;
		}
	}
	if (r1 > 0 && r2 > 0){
		cnt++;
		if (r1 > 1)
			r1 -= 2;
		else
			r1--;
		r2 = 0;
	}
	r1 = r1 / 4 + (r1 % 4 != 0);
//	cout << r1 << " " << r2 << " " << r3 << endl;
	cnt = cnt + r1 + r2;
	cout << cnt;
}
