#include <iostream>
#include <algorithm>
#include <map>
#include <set>
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

void insert(int b[], int be, int en){
	b[be] = en + 1;
	FOR(i, be + 1, en){
		b[i] = i;
	}
}

void solve(int n, int a[]){
	map <int, int> mp;
	int i = 1;
	if (a[0] != a[i]){
		cout << -1 << endl;
		return;
	}
	set <int> st;
	st.insert(a[i]);
	while(i < n){
		if (a[i-1] == a[i]){
			mp[a[i]] = i;
		}
		else{
			st.insert(a[i]);
			mp[a[i]] = 0;
		}
		++i;
	}
	int ans[n] = {0};
	int idx = 0;
	for (auto x : st){
		if (mp[x] < 1){
			cout << -1 << nl;
			return;
		}
		insert(ans, idx, mp[x]);
		idx = mp[x] + 1;
	}
	FOR(i, 0, n - 1) cout << ans[i] << " ";
	nel;
}

int main(){
	Faster;
	readi(t);
	while(t--){
		readi(n);
		int a[n] = {0};
		FOR(i, 0, n - 1) cin >> a[i];
		solve(n, a);
	}
}
