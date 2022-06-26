#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long sum = 0;
		long long res;
		for (int i = 1; i <= n; i++){
			sum += pow(2, i);
			if (i == n / 2 - 1)
				res = sum;
		}
		long long a = pow(2, n) + res, b = sum - a;
		cout << abs(a-b) << endl;
	}
}
