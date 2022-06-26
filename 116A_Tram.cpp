#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <set>
#include <cmath>
using namespace std;
 
int main() {
	int n; cin >> n;
	long long cnt = 0, idx = 0;	
	while (n--){
		int a, b;
		cin >> a >> b;
		idx = idx - a + b;
		cnt = max(cnt, idx);
//		cout << cnt << endl;
	}
	cout << cnt;
}
