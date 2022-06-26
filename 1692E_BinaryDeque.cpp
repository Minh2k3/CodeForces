#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, s; cin >> n >> s;
		int a[n] = {0};
		int sum = 0;
		for (int &x : a) {
			cin >> x;
			sum += x;
		}
		if (s > sum){
			cout << -1 << endl;
			continue;
		}
//		if (s == sum){
//			cout << 0 << endl;
//			continue;
//		}
		int i = 0, j = n - 1;
		int res = 0;
		while (i <= j && sum != s){
			if (a[i]){
				++res;
				++i;
				--sum;
			}
			else if (a[j]){
				++res;
				--j;
				--sum;
			}
			else {
				++i;
				--j;
				++res;
			}
		}
		if (s == sum)
			cout << res << endl;
		else 
			cout << -1 << endl;
	}
}
