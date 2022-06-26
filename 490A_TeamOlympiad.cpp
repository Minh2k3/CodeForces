#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n; cin >> n;
	queue <int> s1, s2, s3;
	for (int i = 1; i <= n; i++){
		int x; cin >> x;
		if (x == 1)
			s1.push(i);
		else if (x == 2)
			s2.push(i);
		else 
			s3.push(i);
	}
	if (s1.size() && s2.size() && s3.size()){
		int k = min(s1.size(), min(s2.size(), s3.size()));
		cout << k << endl;
		while(k--){
			cout << s1.front() << " " << s2.front() << " " << s3.front() << endl;
			s1.pop();
			s2.pop();
			s3.pop();
		}
	}
	else
		cout << 0;
}
