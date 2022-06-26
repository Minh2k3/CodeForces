#include <iostream>
using namespace std;
 
int main(){
	int a[5][5];
	int idx;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++){
			int x; cin >> x;
			if (x == 1){
				idx = abs(i-2) + abs(j-2);
			}
		}
	cout << idx;
}
