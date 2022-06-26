#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		string s; cin >> s;
		int a[26] = {0};
		a[s[0] - 'A'] = 1;
		if (n < 3){
			cout << "YES\n";
			continue;
		}
		for (int i = 1; i < s.size(); i++){
			if (s[i] == s[i-1]){
				a[s[i] - 'A']++;
			}
			else {
				if (a[s[i]-'A'] != 0){
					cout << "NO\n";
					break;
				}
				else {
					a[s[i] - 'A'] = 1;
				}
			}
			if (i == s.size() - 1){
				cout << "YES\n";
			}
		}
	}
}
