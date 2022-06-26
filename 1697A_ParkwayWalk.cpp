#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    	int n, m; cin >> n >> m;
    	int a[n] = {0};
    	int sum = 0;
    	for (int &x : a) {
    		cin >> x;
    		sum += x;
		}
    	if (sum > m)
    		cout << sum - m << endl;
    	else
    		cout << 0 << endl;
	}
}
