#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <set>
#include <cmath>
using namespace std;
 
int main() {
    int x; cin >> x;
    if (x % 5 == 0)
    	cout << x/5;
    else
    	cout << x/5 + 1;
}
