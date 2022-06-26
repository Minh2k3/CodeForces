#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a, b, c, n;
		cin >> a >> b >> c >> n;
		int k = max(a, max(b,c));
		int x = abs(k-a) + abs(k-b) + abs(k-c);
		if ((n - x) % 3 == 0 && (n-x) >= 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
