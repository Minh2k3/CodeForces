#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <set>
#include <cmath>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s1, s2;
	cin >> s1 >> s2;
	string s3 = "";
	for (int i = 0; i < s1.size(); i++){
		if (s1[i] == s2[i])
			s3 += '0';
		else
			s3 += '1';
	}
	cout << s3;
}
