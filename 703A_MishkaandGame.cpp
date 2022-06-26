#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int res = 0;
	while(n--){
		int m, c; cin >> m >> c;
		if (m > c)
			res++;
		else if (m < c)
			res--;
	}
	if (res > 0)
		cout << "Mishka";
	else if (res < 0)
		cout << "Chris";
	else
		cout << "Friendship is magic!^^";
}
