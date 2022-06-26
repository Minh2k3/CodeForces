#include <iostream>
using namespace std;

int solve(int a, int b){
	if (2 * a > b && a <= b)
		return 4 * a * a;
	if (2 * b > a && b < a)
		return 4 * b * b;
	if (2 * a <= b && a < b)
		return b * b;
	return a * a;
}

int main(){
	int t; cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		cout << solve(a,b) << endl;
	}
}
