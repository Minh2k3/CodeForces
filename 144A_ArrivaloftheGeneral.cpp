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
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int idxmax = n - 1, idxmin = 0;
	for (int i = 0; i < n; i++){
		if (a[idxmin] >= a[i])
			idxmin = i;
		if (a[idxmax] <= a[n - 1 - i])
			idxmax = n - 1 - i;
	}
	int ans = 0;
//	cout << idxmax << " " << idxmin << endl;
	if (idxmin < idxmax)
		ans = n - 1 - idxmin + idxmax - 1;
	else
		ans = n - 1 - idxmin + idxmax;
	cout << ans;
}
