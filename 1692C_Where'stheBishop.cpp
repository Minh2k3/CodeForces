#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		char bishop[8][8];
//		cin.ignore();
		for (int i = 0; i < 8; ++i)
			for (int j = 0; j < 8; ++j)
				cin >> bishop[i][j];
		for (int i = 1; i < 7; ++i)
			for (int j = 1; j < 7; ++j)
				if (bishop[i][j] == '#' && bishop[i-1][j-1] == '#' && bishop[i-1][j+1] == '#')
					cout << i + 1 << " " << j + 1 << endl;
	}
}
//	&& bishop[i+1][j+1] == '#' && bishop[i+1][j-1] == '#'
