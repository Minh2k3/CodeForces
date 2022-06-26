#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s1; cin >> s1;
	cin.ignore();
	string s2; getline(cin, s2);
	for (int i = 0; i < s2.size(); ++i)
		if (s2[i] == s1[0] || s2[i] == s1[1]){
			cout << "YES";
			return 0;
		}
	cout << "NO";
}
