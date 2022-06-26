#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n; cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	sort(a, a + n);
	int j = 1;
	for(int i = 0; i < n; i++){
		if (j < a[i]) {
			cout << j;
			return 0;
		}
		if (i == n - 1 && j <= a[i])
			cout << a[i] + 1;
		else j++;
	}
}
