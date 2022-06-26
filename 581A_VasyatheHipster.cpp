#include <iostream>
using namespace std;

int main(){
	int a, b; cin >> a >> b;
	int Max = max(a, b), Min = min(a, b);
	cout << Min << " " << (Max - Min) / 2;
}
