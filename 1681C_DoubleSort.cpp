#include <iostream>
#include <vector>
using namespace std;

void swap(int * a, int * b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void push(vector<pair<int, int>> & v, int a, int b){
	pair<int, int> p;
	p.first = a + 1; 
	p.second = b + 1;
	v.push_back(p);
}

void solve(int n, int a[], int b[], vector<pair<int, int>> v){
	for (int i = 0; i < n - 1; ++i){
			for (int j = i + 1; j < n; ++j){
				if (a[i] > a[j]){
					swap(&a[i], &a[j]);
					swap(&b[i], &b[j]);
					push(v, i, j);
				}
			}
		}
	for (int i = 0; i < n - 1; ++i)
			for (int j = i + 1; j < n; ++j){
				if (b[i] > b[j])
					if (a[i] == a[j]){
						swap(&b[i], &b[j]);
						swap(&a[i], &a[j]);
						push(v, i, j);
					}
				else {
					cout << -1 << endl;
					return;
				}
			}	
	if (v.size() > 10000)
		cout << -1 << endl;
	else if (v.size() == 0)
		cout << 0 << endl;
	else {
		cout << v.size() << endl;
		for (auto x : v)
			cout << x.first << " " << x.second << endl;
	}		
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for (int &x : a) cin >> x;
		for (int &x : b) cin >> x;
		int cnt = 0;
		vector<pair<int, int>> v;
		solve(n, a, b, v);

	}
}
