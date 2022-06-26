#include <iostream>
#include <algorithm>
using namespace std;

#define Faster		ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define nl        	  '\n'
#define Sort(x)        sort(x.begin(),x.end())
#define SortR(x)       sort(x.begin(),x.end(),greater<int>())
#define Reverse(x)     reverse(x.begin(),x.end())

#define Sum(A,n)       accumulate(A,A+n,0)
#define SortA(ar,s)    sort(ar,ar+s)
#define SortD(ar,s)    sort(ar,ar+s,greater<int>())
#define maxa(A,n)      *max_element(A,A+n)
#define mina(A,n)      *min_element(A,A+n)
#define gcd(a,b)       __gcd(a,b)
#define lcm(a,b)       (a*(b/gcd(a,b)))
#define sq(x)          (x)*(x)
#define mid(l,r)       (l+(r-l)/2)

#define min3(a,b,c)       min(a,min(b,c))
#define min4(a,b,c,d)     min(a,min(b,min(c,d)))
#define max3(a,b,c)       max(a,max(b,c))
#define max4(a,b,c,d)     max(a,max(b,max(c,d)))
#define pb(x)             push_back(x)

#define FOR(i,x,y)		for(int i=x;i<=y;i++)
#define FOR_(i,x,y)		for(int i=y;i>=x;i--)

#define precision(x)      cout<<fixed<<setprecision(x)
#define nel               cout<<nl
#define yes               cout<<"YES"<<nl
#define no                cout<<"NO"<<nl

#define readi(t)		int t; cin >> t
#define readll(t)		ll t; cin >> t

typedef long long int ll;
typedef unsigned long long int llu;

void solve(ll n, ll a[]){
	if (n % 2){
		no;	return;
	}
	SortA(a, n + 1);
	int b[n + 1] = {0}, idx = 0;
	b[0] = -1;
	bool fl = true;		// true thi them phan tu be va nguoc lai
	FOR(i, 1, n){
		if(fl){
			b[i] = a[(i+1)/2];
			if (b[i] == b[i-1]){
				no; return;
			}
			fl = false;
		}
		else{
			b[i] = a[n/2 + i/2];
			if (b[i] == b[i-1]){
				no; return;
			}
			fl = true;
		}
	}
	yes;
	FOR(i, 1, n) cout << b[i] << " ";
	nel;
}

int main(){
	Faster;
	readi(t);
	while(t--){
		readi(n);
		ll a[n + 1] = {0};
		FOR(i, 1, n) cin >> a[i];
		a[0] = -1;
		solve(n, a);
	}
}
