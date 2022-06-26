#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int x, y, n;
		cin >> x >> y >> n;
		int res = n/x;
		if (n % x == y)
			cout << n << endl;
		else {
			if (n % x < y){
				res--;
				int k = res * x + y;
				cout << k << endl;
			}
			else {
				int k = res * x + y;
				cout << k << endl;
			}
		}
	}
}
