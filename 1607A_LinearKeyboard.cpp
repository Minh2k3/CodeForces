#include <iostream>
#include <map>
#include <string>
using namespace std;

int solve(string s1, map<char, int> mp){
	int ans = 0;
	for (int i = 1; i < s1.size(); ++i){
		ans += (abs(mp[s1[i]] - mp[s1[i-1]]));
	}
	return ans;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char, int> mp;
		for (int i = 0; i < s.size(); ++i){
			mp[s[i]] = i;
		}
		string s1; cin >> s1;
		cout << solve(s1, mp) << endl;
	}
}
