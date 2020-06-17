#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi t(1e7), a(1e7);


void build(ll v, ll tl, ll tr){
	if(tl > tr) return;
	if(tl == tr) t[v] = a[tl];
	else{
		ll tm = (tl + tr)/2;
		build(v*2, tl, tm);
		build(v*2+1, tm+1, tr);
		t[v] = min(t[v*2], t[v*2+1]);
	}
}

void update(ll v, ll tl, ll tr, ll new_pos, ll val){
	if(tl==tr) t[v] = val;
	else{
		ll tm = (tl + tr)/2;
		if(new_pos<=tm){
			update(v*2, tl, tm, new_pos, val);
		}else{
			update(v*2+1, tm+1, tr, new_pos, val);
		}

		t[v] = min(t[v*2], t[v*2+1]);
	}
}

ll ans(ll v, ll tl, ll tr, ll l, ll r){
	if(l > r || tl > tr) return 1e9+5;
	if(l == tl && r == tr){
		return t[v];
	}
	ll tm = (tl + tr)/2;
	return min(ans(v*2, tl, tm, l, min(r, tm)), ans(v*2+1, tm+1, tr, max(l, tm+1), r));
}



int main(){
  ios_base::sync_with_stdio(false);

  ll n, q;
  cin>>n>>q; for(ll i = 0; i < n; i++) cin>>a[i];
  build(1, 0, n-1);
  while(q--){
  	ll x, y, z;
  	cin>>x>>y>>z;
  	if(x == 1){
  		update(1, 0, n-1, y-1, z);
  	}else{
  		cout<<ans(1, 0, n-1, y-1, z-1)<<endl;
  	}
  	// for(ll i = 0; i < 4*n; i++) cout<<t[i]<<" ";
  	// cout<<endl;
  }

}