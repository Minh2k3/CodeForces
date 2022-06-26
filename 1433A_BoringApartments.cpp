#include <iostream>
#include <string>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int res = 10 * (s[0] - '0' - 1);
		for (int i = 0; i < s.size(); i++){
			res += (i+1);
		}
		cout << res << endl;
	}
}
