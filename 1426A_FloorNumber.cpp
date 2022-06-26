#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while (t--){
		int n, x;
		cin >> n >> x;
		if (n < 3) {
			cout << 1 << endl;
		}
		else {
			n-=2;
			if (n % x == 0)
				cout << n/x + 1 << endl;
			else
				cout << n/x + 2 << endl;
		}
	}
}
