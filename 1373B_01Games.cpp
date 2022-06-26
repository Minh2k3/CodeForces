#include <iostream>
#include <string>
using namespace std;

void solve(string s){
	int cnt = 0;
	for (int i = 0; i < s.size(); ++i)
		if (s[i] == '0')
			++cnt;
	if (cnt > s.size() - cnt)
		cnt = s.size() - cnt;
	if (cnt % 2)
		cout << "DA" << endl;
	else 
		cout << "NET" << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		solve(s);
	}
}
