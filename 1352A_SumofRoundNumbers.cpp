#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1e4;

vector <int> a(MAX+1) ;

void roundNum(){
	for (int i = 1; i < 10; i++)
		a[i] = i;
	for (int i = 10; i < 100; i++){
		if (i % 10 == 0)
			a[i] = a[i-1] + 1;
		else
			a[i] = a[i-1];
	}
	for (int i = 100; i < 1000; i++){
		if (i % 100 == 0)
			a[i] = a[i-1] + 1;
		else
			a[i] = a[i-1];
	}
	for (int i = 100; i < 1000; i++){
		if (i % 1000 == 0)
			a[i] = a[i-1] + 1;
		else
			a[i] = a[i-1];
	}
	a[10000] = a[9999];
}

int main(){
	int t; cin >> t;
	roundNum();
	while(t--){
		int n; cin >> n;
		cout << a[n] << endl;
	}
}
