#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string s; cin >> s;
    int n = (s.size() + 1)/2;
    int num[n];
    for (int i = 0; i < n; i++){
    	num[i] = s[2*i] - '0';
	}
	sort(num, num+n);
	cout << num[0];
	for (int i = 1; i < n; i++){
		cout << "+" << num[i];
	}
}
