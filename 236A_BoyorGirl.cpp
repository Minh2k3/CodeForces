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
    string s; cin >> s;
    set <char> st;
    for (int i = 0; i < s.size(); i++)
    	st.insert(s[i]);
    cout << (st.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
}
