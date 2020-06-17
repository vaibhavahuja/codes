#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi t(4*1000000), a(1e6);

void build(ll v, ll tl, ll tr){
	if(tl == tr) t[v] = a[tl];
	else{
		ll tm = (tl+tr)/2;
		build(v*2, tl, tm);
		build(v*2+1, tm+1, tr);
		t[v] = min(t[v*2], t[v*2+1]);
	}
}

ll getMin(ll v, ll tl, ll tr, ll l, ll r){
	if(l > r) return 1e9+5;
	if(l == tl && r == tr){
		return t[v];
	}

	ll tm = (tl + tr)/2;
	return min(getMin(v*2, tl, tm, l, min(tm, r)), getMin(v*2+1, tm+1, tr, max(l, tm+1), r));
}

int main(){
  ios_base::sync_with_stdio(false);

  ll n, q;
  cin>>n>>q; for(ll i = 0; i < n; i++) cin>>a[i];
  // for(ll i = 0; i < n; i++) cout<<a[i]<<" ";
  build(1, 0, n-1);
  while(q--){
  	ll l, r;
  	cin>>l>>r;
  	cout<<getMin(1, 0, n-1, l-1, r-1)<<endl;

  }

}