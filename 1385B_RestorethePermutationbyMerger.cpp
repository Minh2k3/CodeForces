#include <iostream>
#include <set>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		set <int> st;
		for (int i = 1; i <= 2 * n; i++){
			int x; cin >> x;
			if (st.count(x)){
				cout << x << " ";
				st.erase(x);
			}
			else
				st.insert(x);
		}
		cout << endl;
	}
}
