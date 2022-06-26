#include <bits/stdc++.h>
using namespace std;

bool solve(int n, string s, string t){
	if (n < 2)
		return false;
	for (int i = 0; i < n - 1; ++i){
		if (s[i] == t[i] && s[i+1] == t[i+1])
			continue;
		if (s[i] == t[i+1] && s[i+1] == t[i] && ((s[i] == 'a' && s[i+1] == 'b')|| (s[i] == 'b' && s[i+1] == 'c')))
			continue;
		if ((s[i] == 'a' && s[i+1] == 'b') || (s[i] == 'b' && s[i+1] == 'c')){
			char tmp = s[i];
			s[i] = s[i+1];
			s[i+1] = tmp;
		}
	}
	cout << s << " " << t << endl;
	if (s == t)
		return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q; cin >> q;
    while(q--){
    	int n; cin >> n;
    	string s, t; cin >> s >> t;
    	if (solve(n, s, t))
    		cout << "YES\n";
    	else
    		cout << "NO\n";
	}
}
