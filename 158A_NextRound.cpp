
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n, k; cin >> n >> k;
    int a[n];
    k--;
    for (int i = 0; i < n; i++)
    	cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++){
    	if (a[i] >= a[k] && a[i] > 0)
    		cnt++;
	}
	cout << cnt;
}
