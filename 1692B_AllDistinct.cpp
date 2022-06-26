#include <iostream>
#include <set>
using namespace std;

int solve(set<int> st, int n){
	if ((n % 2) == (st.size() % 2))
		return st.size();
	return st.size() - 1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set <int> st;
		for (int i = 0 ; i < n; ++i){
			int x; cin >> x;
			st.insert(x);
		}
		cout << solve(st, n) << endl;
	}
}
