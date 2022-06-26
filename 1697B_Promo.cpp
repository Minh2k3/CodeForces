#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a >= b;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q; cin >> n >> q;
    int p[n] = {0};
    for (int &x : p) cin >> x;
    sort(p, p + n, cmp);
    while(q--){
    	int x, y; cin >> x >> y;
    	int sum = 0;
    	for (int i = x-y; i < x; ++i)
    		sum += p[i];
    	cout << sum << endl;
	}
}
