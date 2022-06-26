#include <bits/stdc++.h>
using namespace std;

long long solve(int n, int m){
	long long sum = 0;
	for (int i = 1; i <= m; ++i){
		sum+=i;
	}
	for (int i = 2; i <= n; ++i){
		sum+=(i*m);
	}
	return sum;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		cout << solve(n, m) << endl;
	}
}
