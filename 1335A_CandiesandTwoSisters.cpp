#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int cnt = 0;
        if (n < 3) {
            cout << 0 << endl;
            continue;
        }
        cnt = n - (n/2 + 1);
        cout << cnt << endl;
    }
}
