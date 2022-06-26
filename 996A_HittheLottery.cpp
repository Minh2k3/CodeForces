#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int cnt = 0;
	cnt = cnt + n/100;
	n = n - n/100 * 100;
	cnt = cnt + n/20;
	n = n - n/20 * 20;
	cnt = cnt + n/10;
	n = n - n/10 * 10;
	cnt = cnt + n/5;
	n = n - n/5 * 5;
	cnt = cnt + n;
	cout << cnt;
}
