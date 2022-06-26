#include <iostream>
using namespace std;

int main(){
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	int mx = max(x1, max(x2, x3));
	int mn = min(x1, min(x2, x3));
	cout << mx - mn;
}
