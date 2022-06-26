#include <iostream>
using namespace std;

bool isPrime(int n){
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

int main(){
	int n; cin >> n;
	if (n % 2 == 0 && !isPrime(n/2)){
		cout << n/2 << " " << n/2;
	}
	else {
		for (int i = 4; i <= n; i+=2){
			if (!isPrime(n-i)){
				cout << i << " " << n - i;
				return 0;
			}
		}
	}
}
