#include <iostream>
#include <string>
using namespace std;
 
string lower_case(string s){
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}
 
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    s1 = lower_case(s1);
    s2 = lower_case(s2);
    if (s1 > s2) 
    	cout << "1";
    else if (s1 < s2)
    	cout << "-1";
    else cout << "0";
}
