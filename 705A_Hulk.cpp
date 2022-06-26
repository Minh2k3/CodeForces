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
	int n; cin >> n;
	string s = "I hate ";
	for (int i = 2; i <= n; i++){
		s += "that ";
		if (i % 2)
			s += "I hate ";
		else
			s += "I love ";
	}
	s += "it";
	cout << s;
}
