#include <iostream>
#include <string>
using namespace std;

bool solve(string s){
	for (int i = 0; i < s.size()/2; i++)
		if (s[i] != s[s.size()/2 + i])
			return false;
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if (s.size() % 2 != 0)
			cout << "NO\n";
		else {
			if (solve(s))
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}
