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
	bool fl = true;
	while (n--){
		int x; cin >> x;
		if (x)
			fl = false;
	}
	if (fl)
		cout << "EASY";
	else
		cout << "HARD";
}
