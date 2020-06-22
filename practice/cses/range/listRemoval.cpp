#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(ll i=0;i<5;i++){cout<<a[i]<<" ";}cout<<endl;}

vi t(8e5+5), a(2e5+5);

//building range sum query
void build(ll v, ll tl, ll tr){
	if(tl == tr){
		t[v] = a[tl];
		return;
	}
	ll tm = (tl+tr)/2;
	build(v*2, tl, tm);
	build(v*2+1, tm+1, tr);
	t[v] = t[v*2]+t[v*2+1];
}
	
//returns sum from 1 to j
ll getSum(ll v, ll tl, ll tr, ll l, ll r){
	if(l > r) return 0;
	if(l == tl && r == tr){
		return t[v];
	}
	ll tm = (tl + tr)/2;
	return getSum(v*2, tl, tm, l, min(r, tm)) + getSum(v*2+1, tm+1, tr, max(l, tm+1), r);
}

void update(ll v, ll tl, ll tr, ll pos){
	if(tl==tr){
		t[v] -= 1;
		return;
	}

	ll tm = (tl+tr)/2;
	if(pos <= tm){
		update(v*2, tl, tm, pos);
	}else{
		update(v*2+1, tm+1, tr, pos);
	}
	t[v] = t[v*2]+t[v*2+1];
}

int main(){
  ios_base::sync_with_stdio(false);

  ll n;
  cin>>n;
  vi b(n);
  for(ll i = 0; i < n; i++){
  	cin>>b[i];
  	a[i] = 1;
  }
  build(1, 0, n-1);

  for(ll i = 0; i < n; i++){
  	ll p;
  	cin>>p;
  	// cout<<p<<endl;
  	ll x = p;
  	ll l = 0, h = n-1;
  	while(l<h){
  		ll mid = (l+h)/2;
  		ll sum = getSum(1, 0, n-1, 0, mid);
  		if(sum < x){
  			l = mid+1;
  		}else if(sum > x){
  			h = mid-1;
  		}else{
  			if(a[mid] == 1){
  				// cout<<"removing index "<<mid<<" and sum is "<<sum<<" and value is "<<x<<endl;
  				l = mid;
  				break;
  			}else{
  				h = mid-1;
  			}
  		}
  	}
  	a[l] = 0;
  	update(1, 0, n-1, l);
  	cout<<b[l]<<" ";

  }
  cout<<endl;
  

}