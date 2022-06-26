#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
	string s; getline(cin, s);
	set <char> st;
	if (s.size() == 2){
		cout << 0;
		return 0;
	}
	for (int i = 1; i < s.size(); i+=3){
		st.insert(s[i]);
	}
	cout << st.size();
}
