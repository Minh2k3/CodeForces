#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
   	cin.tie(0);
   	cout.tie(0);
   	int n, k; cin >> n >> k;
   	int a[n];
   	for (int i = 0; i < n; i++)
   		cin >> a[i];
   	sort(a, a+n);
   	int cnt = 0;
	int idx = 0;
	while (idx + 2 < n){
		if (a[idx+2] + k <= 5){
			++cnt;
		}
		idx+=3;
	}
	cout << cnt;
}
