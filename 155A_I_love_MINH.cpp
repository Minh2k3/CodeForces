#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int max = a[0], min = a[0];
	int cnt = 0;
	for (int i = 1; i < n; i++){
		if (a[i] > max){
			max = a[i];
			cnt++;
			continue;
		}
		if (a[i] < min){
			min = a[i];
			cnt++;
		}
	}
	cout << cnt;
}
