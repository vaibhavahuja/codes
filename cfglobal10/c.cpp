#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


ll answ(vi a){
	ll x = 0, ans = 0, n = a.size();
	for(ll i = 0; i < n; i++){
		if(a[i] >= x){
			ans += (a[i]-x);
			x = a[i];
		}else{
			x = a[i];
		}
	}
	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  ll t; cin>>t;
  while(t--){

	  ll n; cin>>n; vi a(n); for(ll i = 0; i < n; i++) cin>>a[i];
	  // cout<<ans(a)<<endl;
	  vi b(n+1, 0);
	  ll maxSoFar = a[0];
	  for(ll i = 0; i < n; i++){
	  	if(a[i] >= maxSoFar){
	  		b[i] = 0;
	  		maxSoFar = a[i];
	  	}else{
	  		b[i] = maxSoFar - a[i];
	  	}
	  }
	  vector<vi> c;
	  for(ll i = 0; i < b.size(); i++){
	  	if(b[i] == 0) continue;
	  	else{
	  		vi d;
	  		while(b[i] != 0) {d.push_back(b[i]); i++;}
	  		c.push_back(d);
	  	}
	  }
	  ll ans = 0;
	  for(ll i = 0; i < c.size(); i++) ans += answ(c[i]);

	  cout<<ans<<endl;
  }




}