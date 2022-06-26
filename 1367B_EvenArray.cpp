#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int cntEven = 0, cntOdd = 0;
		for (int i = 0; i < n; i+=2)
			if (a[i] % 2 != 0)
				cntEven++;
		for (int i = 1; i < n; i+=2)
			if (a[i] % 2 == 0)
				cntOdd++;
		if (cntEven == cntOdd)
			cout << cntOdd << endl;
		else
			cout << -1 << endl;
	}
}
