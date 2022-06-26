#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int res = 0;
	int sum = 0, i = 0;
	while (res <= n){
		i++;
		sum+=i;
		res+=sum;
	}
	cout << i-1;
}
