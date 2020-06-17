#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


//will have 0 in all fields except leaf nodes
//when I will get update :  I will update normally in range l, r
// will return value at k by adding all values till i get to k
vi t(4*1e7), a(1e7);

void build(ll v, ll tl, ll tr){
	if(tl == tr){
		t[v] = a[tl];
		return;
	}
	ll tm = (tl+tr)/2;
	build(v*2, tl, tm);
	build(v*2+1, tm+1, tr);
	t[v] = 0;
}

void update(ll v, ll tl, ll tr, ll l, ll r, ll addend){
	if(l > r || tl > tr) return;
	if(tl == l && tr == r){
		t[v] += addend;
		return;
	}

	ll tm = (tl+tr)/2;
	update(v*2, tl, tm, l, min(r, tm), addend);
	update(v*2+1, tm+1, tr, max(l, tm+1), r, addend);
}

//will add while i reach there
ll getVal(ll v, ll tl, ll tr, ll pos){
	if(tl > tr) return 0;
	if(tl == tr){
		return t[v];
	}
	ll tm = (tl+tr)/2;
	if(pos <= tm){
		return t[v] + getVal(v*2, tl, tm, pos);
	}else{
		return t[v] + getVal(v*2+1, tm+1, tr, pos);
	}
}



int main(){
  ios_base::sync_with_stdio(false);

  ll n, q;
  cin>>n>>q; for(ll i = 0; i < n; i++) cin>>a[i];
  build(1, 0, n-1);

  while(q--){
  	ll l;
  	cin>>l;
  	if(l == 2){ 
  		ll r;
  		cin>>r;
  		cout<<getVal(1, 0, n-1, r-1)<<endl;
  	}
  	else{
  		ll x, y, z;
  		cin>>x>>y>>z;
  		update(1, 0, n-1, x-1, y-1, z);
  	}
  }

}