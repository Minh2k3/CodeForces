#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	long long sum = 0;
	int max = -1;
	for (int i = 0; i < n; i++)
		if (a[i] > max)
			max = a[i];
	for (int i = 0; i < n; i++)
		sum = sum + max - a[i];
	cout << sum;
}
