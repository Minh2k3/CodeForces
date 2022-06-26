#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int l, r; cin >> l >> r;
		if (l * 2 > r){
			cout << "-1 -1\n";
			continue;
		}
		cout << l << " " << l * 2 << endl;
	}
}
