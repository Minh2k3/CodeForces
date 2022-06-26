#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int x, y, z, a, b, c;
		cin >> x >> y >> z;
		int Max = max(x, max(y, z));
		if (Max == x && Max == y){
			a = Max;
			b = z, c = z;
		}
		else if (Max == x && Max == z){
			b = Max;
			a = y, c = y;
		}
		else if (Max == z && Max == y){
			c = Max;
			a = x, b = x;
		}
		else{
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		cout << a << " " << b << " " << c << endl;
	}
}
