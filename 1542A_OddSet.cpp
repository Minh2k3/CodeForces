#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cntodd = 0;
		for (int i = 0; i < 2 * n; ++i){
			int x; cin >> x;
			if (x % 2)
				++cntodd;
		}
		if (cntodd == n)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
