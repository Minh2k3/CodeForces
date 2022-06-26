#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; ++i){
		if (i % 2){
			for (int j = 1; j <= m; ++j)
				cout << "#";
		}
		else{
			if (i % 4 == 2){
				for (int j = 1; j < m; ++j)
					cout << ".";
				cout << "#";
			}
			else {
				cout << "#";
				for (int j = 2; j <= m; ++j)
					cout << ".";
			}
		}
		cout << endl;
	}
}
