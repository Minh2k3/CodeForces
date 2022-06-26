// Bai tap codeforces de

#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		int x1 = max(l1, l2);
		int x2 = min(r1, r2);
		if (x1 <= x2)
			cout << x1 << endl;
		else
			cout << x1 + x2 << endl;
	}
}
