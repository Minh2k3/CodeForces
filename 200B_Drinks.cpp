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
	int i = n;
	long long sum = 0;
	while (i--){
		int x; cin >> x;
		sum += x;
	}
	cout << fixed << setprecision(12) << 1.0 * sum / n;
}
