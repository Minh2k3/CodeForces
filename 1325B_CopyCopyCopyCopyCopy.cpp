#include <iostream>
#include <set>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set <int> st;
		for (int i = 0; i < n; ++i){
			int x; cin >> x;
			st.insert(x);
		}
		cout << st.size() << endl;
	}
}
