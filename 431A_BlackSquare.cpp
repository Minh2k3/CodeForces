#include <iostream>
#include <string>
using namespace std;

int main(){
	int a[5];
	a[0] = 0;
	for (int i = 1; i <= 4; i++)
		cin >> a[i];
	long long ans = 0;
	string s; cin >> s;
	for (auto x : s){
		ans += a[x - '0'];
	}
	cout << ans;
}
