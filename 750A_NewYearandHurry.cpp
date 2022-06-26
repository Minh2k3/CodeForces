#include <iostream>
#include <cmath>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, k; cin >> n >> k;
	int time = (240 - k);
	int ans = n, i = 1;
	while (5 * ans * (ans + 1) / 2 > time){
		--ans;
	}
	cout << ans;
}
