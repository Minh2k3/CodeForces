#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		bool fl = false;
		for (int i = 1; i < n - 1; i++){
			if (a[i] != a[i-1]){
				if (a[i] != a[i + 1]){
					cout << i + 1 << endl;
					fl = true;
					break;
				}
				else {
					cout << i << endl;
					fl = true;
					break;
				}
			}
		}
		if (!fl){
			cout << n << endl;
			fl = false;
		}
	}
}
