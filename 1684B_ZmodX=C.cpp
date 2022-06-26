#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		long long a, b, c; cin >> a >> b >> c;
		long long x = c + 1;
		long long k = x % b;
		if (k <= a)
			x += (a - k);
		else
			x += (b + a - k);
		cout << x << " " << b << " " << c << endl;
	}
}
