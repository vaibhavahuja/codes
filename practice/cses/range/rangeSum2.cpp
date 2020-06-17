#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi t(4*1000000), a(1e7);

void build(ll v, ll tl, ll tr){
	if(tl == tr){
		t[v] = a[tl];
		return;
	}
	ll tm = (tl + tr)/2;
	build(v*2, tl, tm);
	build(v*2+1, tm+1, tr);
	t[v] = t[v*2]+t[v*2+1];
}

void update(ll v, ll tl, ll tr, ll pos, ll new_val){
	// if(tl > tr) return;
	if(tl == tr){
		t[v] = new_val;
		return;
	}
	ll tm = (tl + tr)/2;
	if(pos <= tm){
		//left side def
		update(v*2, tl, tm, pos, new_val);
	}else{
		//right side
		update(v*2+1, tm+1, tr, pos, new_val);
	}

	t[v] = t[v*2]+t[v*2+1];
}

//get sum of range
ll sum(ll v, ll tl, ll tr, ll l, ll r){
	if(l > r || tl > tr) return 0;
	if(l == tl && r == tr) return t[v];
	ll tm = (tl + tr)/2;
	return sum(v*2, tl, tm, l, min(tm, r)) + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}



int main(){
  ios_base::sync_with_stdio(false);

  ll n, q;
  cin>>n>>q; for(ll i = 0; i <n; i++) cin>>a[i];
  build(1, 0, n-1);
  while(q--){
  	ll x, y, z;
  	cin>>x>>y>>z;

  	if(x == 1){
  		update(1, 0, n-1, y-1, z);
  	}else{
  		cout<<sum(1, 0, n-1, y-1, z-1)<<endl;
  	}
  }

  

}