#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s; cin >> s;
	int sum = 0;
	sum += min(s[0] - 'a', 26 - s[0] + 'a');
	for (int i = 1; i < s.size(); ++i){
		sum += min(abs(s[i] - s[i-1]), 26 - abs(s[i] - s[i-1]));
	}
	cout << sum;
}
