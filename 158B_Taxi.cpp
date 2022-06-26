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
	sort(a, a+n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	int i = 0, j = n - 1;
	int cnt = 0;
	cout << endl;
	while (i < j) {
		int x = a[i] + a[j];
		if (x > 4){
			cnt++;
			j--;
//			continue;
		}
		else if (x < 4){
			i++;
		}
		else {
			cnt++;
			i++;
			j--;
		}
		cout << cnt << " ";
	}
	if (i == j)
		cout << cnt + 1;
	else 
		cout << cnt;
}
