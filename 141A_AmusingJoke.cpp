#include <iostream>
#include <string>
using namespace std;

string Sort(string s){
	char tmp;
	for (int i = 0; i < s.size(); i++)
		for (int j = 0; j < s.size(); j++)
			if (s[i] > s[j]){
				tmp = s[i];
            	s[i] = s[j];
            	s[j] = tmp;
			}
	return s;
}

int main(){
	string s1, s2, s3; 
	cin >> s1 >> s2 >> s3;
	if (s1.size() + s2.size() != s3.size()){
		cout << "NO";
		return 0;
	}
	else {
		string s = s1 + s2;
		Sort(s);
		Sort(s3);
		if (s == s3)
			cout << "YES";
		else
			cout << "NO";
	}
}
