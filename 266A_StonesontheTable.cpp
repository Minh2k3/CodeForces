#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <set>
using namespace std;
 
int main() {
    int n; cin >> n;
    string s; cin >> s;
    int i = 0, j = 1;
    int cnt = 0;
    while (j <= s.size()){
    	if (s[j] == s[i])
    		cnt++;
		else 
			i = j;
		j++;
	}
	cout << cnt;
}
