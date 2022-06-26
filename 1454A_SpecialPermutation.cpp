#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[101];
        for (int i = 0; i < n; i++)
            a[i] = i + 2;
        a[n-1] = 1;
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}