#include <iostream>
using namespace std;

//bool solve(int n, int cntodd, int cnteven)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int cntodd = 0, cnteven = 0;
		for (int x : a)
			if (x % 2)
				++cntodd;
			else
				++cnteven;
		if (n % 2){
			if (cntodd)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else {
			if (cntodd && cnteven)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}
