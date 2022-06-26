#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1e6;

void solve(int n, int k, vector<int> f){
	if (n % 2)
		n = n + f[n] + ((k-1)*2);
	else
		n+= (2 * k);
	cout << n << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	vector<int> a(MAX);
	for (int i = 0; i < MAX; ++i)
		a[i] = i;
	for (int i = MAX - 1; i > 1; i-=2)
		if (a[i])
			for (int j = i; j < MAX; j+=i)
				if(a[j] > 0)
					a[j] = i;
	while(t--){
		int n, k; cin >> n >> k;
		solve(n, k, a);
	}
}
