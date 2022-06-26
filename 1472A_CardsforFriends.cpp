#include <iostream>
using namespace std;

long long count(int w, int h, int cnt){
	if (w % 2 == 0){
		cnt *= 2;
		return count(w/2, h, cnt);
	}
	if (h % 2 == 0){
		cnt *= 2;
		return count(w, h/2, cnt);
	}
	return cnt;
}

int main(){
	int t; cin >> t;
	while (t--) {
		int w, h, n;
		cin >> w >> h >> n;
		int cnt = 1;
		if (count(w, h, cnt) >= n || n == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
