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
    int k, n, w; cin >> k >> n >> w;
    long long t = k * w * (w + 1) / 2 - n;
    if (t > 0)
    	cout << t;
    else
    	cout << "0";
}
