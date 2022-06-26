#include <iostream>
using namespace std;

int main(){
	int k, r; cin >> k >> r;
	int cnt = 0;
	while (1){
		if ((cnt * 10 + r) % k == 0) {
			cout << (cnt * 10 + r) / k;
			break;
		}
		else if ((cnt * 10) % k == 0 && cnt > 0){
			cout << cnt * 10 / k;
			break;
		}
		else
			++cnt;
	}
}

