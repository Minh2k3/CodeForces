#include <iostream>
#include <string>
using namespace std;
 
int check(string s){
	if (s[0] == '+' || s[2] == '+')
		return 1;
	return -1;
}
 
int main() {
    int n; cin >> n;
    int x = 0;
    while (n--){
    	string s; cin >> s;
    	x += check(s);
	}
    cout << x;
}
