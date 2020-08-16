#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

ll maxi(vi a){
	ll p = -1e9;
	for(ll i=0;i<a.size();i++) p = max(p, a[i]);

	return p;
}

int main(){
  ios_base::sync_with_stdio(false);
  ll t; cin>>t;
  while(t--){
	  ll n, k; cin>>n>>k; vi a(n); for(ll i = 0; i < n; i++) cin>>a[i];
	  // ll k = 19;
	  if(k%2 == 0) k = 2;
	  else k = 1;
	  while(k--){
	  	ll d = maxi(a);
	  	for(ll i = 0; i < a.size(); i++) a[i] = d - a[i];
	  }
	  show(a);  	
  }
}