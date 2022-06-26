#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int sum = 0;
		for (int i = 0; i < 3; ++i)
			sum+=(s[i] - '0');
		for (int i = 3; i < 6; ++i)
			sum-=(s[i] - '0');
		if (sum == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
