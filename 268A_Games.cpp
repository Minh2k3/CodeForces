#include <iostream>
#include <map>
using namespace std;

int main(){
	int n; cin >> n;
	map <int, pair<int, int>> mp;
	for (int i = 0; i < n; i++){
		int h, a; cin >> h >> a;
		mp[h].first++;
		mp[a].second++;
	}
	int cnt = 0;
	for (auto it : mp){
		cnt = cnt + it.first.first * it.first.second;
	}
}
