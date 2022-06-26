#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int a[3] = {0};
		for (int i = 0; i < s.size(); i++)
			a[s[i] - 'A']+=1;
//		cout << a[0] << " " << a[1] << " " << a[2] << endl;
		if (a[0] > a[1])
			cout << "NO\n";
		else {
			a[1] -= a[0];
			if (a[2] != a[1])
				cout << "NO\n";
			else
				cout << "YES\n";
		}
	}
}
