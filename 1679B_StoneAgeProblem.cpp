#include <iostream>
#include <map>
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

#define in_range(i,x,y)		for(int i=x; i<=y; ++i)
#define in_range_back(i,x,y)	for(int i=y; i>=x; --i)

#define precision(x)      cout<<fixed<<setprecision(x)
#define nel               cout<<nl
#define yes               cout<<"YES"<<nl
#define no                cout<<"NO"<<nl

typedef long long int ll;
typedef unsigned long long int llu;

void solve(){
	
}

int main(){
	Faster;
	int n, q; cin >> n >> q;
	ll a[n + 1];
	llu sum = 0;
	in_range(i, 1, n){
		cin >> a[i];
		sum+=a[i];
	}
	ll i, x1, x2, t;
	ll current = -1;
	map<ll, ll> mp;
	while(q--){
		cin >> t;
		if (t == 2){
			cin >> x2;
			sum = n * x2;
			cout << sum; nel;
			current = x2;
			mp.clear();
			continue;
		}
		cin >> i >> x1;
		if (current == -1){
			sum -= a[i];
			sum += x1;
			a[i] = x1;
			cout << sum; nel;
		}
		else {
			if (!mp[i]){
				sum -= current;
				sum += x1;
				cout << sum; nel;
				mp[i] = x1;
			}
			else{
				sum -= mp[i];
				sum += x1;
				mp[i] = x1;
				cout << sum; nel;
			}
		}
	}
}
