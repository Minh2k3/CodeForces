#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1e6;

int main(){
	ios::sync_with_stdio(0);
   	cin.tie(0);
   	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if (n % 2 == 0)
			cout << n/2 << endl;
		else
			cout << (n-1)/2 << endl;
	}
	
}
