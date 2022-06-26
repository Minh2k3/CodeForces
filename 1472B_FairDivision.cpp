#include <iostream>
//#include <fstream>
using namespace std;

int main(){
	int t; cin >> t;
//	ofstream out ("CheckAns.txt");
	while (t--) {
		int n; cin >> n;
		int a[3] = {0};
		for (int i = 1; i <= n; i++){
			int x; cin >> x;
			a[x]++;
		}
		while (a[1] >= 3)
			a[1]-=2;
		while (a[2] >= 2)
			a[2]-=2;
		while (a[2] > 0 && a[1] >= 2){
			a[1]-=2;
			a[2]-=1;
		}
		if ((a[2] == 0 && a[1] % 2 == 0) || ((a[1] == 0 && a[2] % 2 == 0)))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
//	out.close();
}
