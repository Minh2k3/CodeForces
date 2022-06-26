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
	set <int> s;
	int p1, p2; cin >> p1;
	for (int i = 1; i <= p1; i++){
		int x; cin >> x;
		s.insert(x);
	}
	cin >> p2;
	for (int i = 1; i <= p2; i++){
		int x; cin >> x;
		s.insert(x);
	}
	if (s.size() == n)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
}
