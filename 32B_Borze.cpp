#include <iostream>
using namespace std;

int main(){
	string s; cin >> s;
	string ans = "";
	int i = 0;
	while (i < s.size()){
		if (s[i] == '.'){
			ans = ans + '0';
			i++;
		}
		else {
			if (s[i+1] == '.')
				ans = ans + '1';
			else
				ans = ans + '2';
			i += 2;
		}
	}
	cout << ans;
}
