#include <iostream>
#include <string>
#include <set>
using namespace std;

string convert(string s){
	string st = "";
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	return s;
}

int main(){
	int n; cin >> n;
	string s; cin >> s;
	s = convert(s);
	set <char> st;
	for (int i = 0; i < s.size(); i++)
		st.insert(s[i]);
	if (st.size() == 26)
		cout << "YES";
	else
		cout << "NO";
}
