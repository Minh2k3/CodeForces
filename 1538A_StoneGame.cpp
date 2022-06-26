#include <iostream>
using namespace std;

void solve(int a, int b, int n){
	int cnt = 0;
	if (a <= (n - b)){
		cnt += (a+1);
		if ((b - a) <= (n - b))
			cnt += (b - a);
		else
			cnt += (n - b);
	}
		
	else{
		cnt += (n - b);
		if ((a+1) <= (b - a))
			cnt += (a + 1);
		else
			cnt += (b - a);
	}
	cout << cnt << endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int idxmax = 0, idxmin = 0;
		int Max = a[0], Min = a[0]; 
		for (int i = 1; i < n; ++i){
			if (a[i] > Max){
				Max = a[i];
				idxmax = i;
			}
			if (a[i] < Min){
				Min = a[i];
				idxmin = i;
			}
		}
		if (idxmax > idxmin)
			solve(idxmin, idxmax, n);
		else
			solve(idxmax, idxmin, n);
	}
}
