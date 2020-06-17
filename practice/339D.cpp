#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi t(4*1e6), p(4*1e6, 0);
vi a(1e7);
//if p[v] is 1, then i should OR else XOR

void build(ll v, ll tl, ll tr){
	if(tl > tr) return;
	if(tl == tr){
		t[v] = a[tl];
		p[v] = 1;
		return;
	}

	ll tm = (tl+tr)/2;

	build(v*2, tl, tm);
	build(v*2+1, tm+1, tr);
	if(p[v*2] == 1 && p[v*2+1] == 1){
		t[v] = t[v*2]|t[v*2+1];
	}else {
		t[v] = t[v*2]^t[v*2+1]; 
		p[v] = 1;
	}
}


void update(ll v, ll tl, ll tr, ll pos, ll new_val){
	if(tl == tr){
		t[v] = new_val;
		return;
	}

	ll tm = (tl+tr)/2;

	if(pos <= tm){
		update(v*2, tl, tm, pos, new_val);
	}else{
		update(v*2+1, tm+1, tr, pos, new_val);
	}

	if(p[v*2] == 1 && p[v*2+1] == 1){
		t[v] = t[v*2]|t[v*2+1];
	}else {
		t[v] = t[v*2]^t[v*2+1]; 
	}
}


int main(){
  ios_base::sync_with_stdio(false);

  ll n, m;
  cin>>n>>m;
  ll N = pow(2, n);
  // vi a(N);
  for(ll i = 0; i < N; i++) cin>>a[i];
  build(1, 0, N-1);

  while(m--){
  	ll pos, new_val;
  	cin>>pos>>new_val;
  	update(1, 0, N-1, pos-1, new_val);
  	cout<<t[1]<<endl;

  	// for(int i = 0; i < 15; i++) cout<<t[i]<<" ";
  	// cout<<endl;
  }
  // for(int i = 0; i < 15; i++) cout<<t[i]<<" ";
  // cout<<endl;
  // for(int i = 0; i < 15; i++) cout<<p[i]<<" ";
  // cout<<endl;
}