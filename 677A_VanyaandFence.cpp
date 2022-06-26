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
	int n, h; cin >> n >> h;
	long sum = 0;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		if (x <= h)
			sum++;
		else
			sum+=2;
	}
	cout << sum;
}
