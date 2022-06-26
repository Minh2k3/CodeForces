#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cstring>
using namespace std;
 
int main() {
    string s; cin >> s;
    char c = s[0];
    c = toupper(c);
    cout << c;
    for (int i = 1; i < s.size(); i++)
    	cout << s[i];
}
