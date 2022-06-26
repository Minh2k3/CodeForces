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
   	int i = 0, j = n - 1;
   	int sumSer = 0, sumDi = 0;
   	bool fl = true;
   	while (i <= j){
   		if (fl){
   			sumSer+=max(a[i], a[j]);
   			if (a[i] > a[j])
   				++i;
   			else
   				--j;
   			fl = false;
   		}
   		else {
   			sumDi+=max(a[i], a[j]);
   			if (a[i] > a[j])
   				++i;
   			else
   				--j;
   			fl = true;
		}
	}
	cout << sumSer << " " << sumDi;
}
