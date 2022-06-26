#include <iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string b; cin >> b;
		string a = "";
		a = a+ b[0] + b[1];
		for (int i = 2; i < b.size(); i+=2){
			if (b[i] == b[i-1]){
				a += b[i+1];
			}
		}
		cout << a << endl;
	}
}
