#include <iostream>
using namespace std;

bool isPrime(int n){
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return n > 1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m; cin >> n >> m;
	int ans = 0;
	for (int i = n + 1; i < m; ++i)
		if (isPrime(i)){
			cout << "NO";
			return 0;
		}
			
	if (isPrime(m))
		cout << "YES";
	else
		cout << "NO";		
}
