#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int m; cin >> m;
		long long sum = 0;
		for (int i = 0; i < m; ++i){
			int x; cin >> x;
			sum+=x;
		}
		cout << a[sum % n] << endl;
	}
}
