#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

ll cnt(vi a, ll n){
	//n is the n specified in question
	ll p = 0;
	for(ll i = 0; i < a.size()-1; i++){
		// cout<<a[i]<<" "<<a[i+1]<<endl;
		if(a[i+1]-a[i] > 1) p++;
	}
	if(n-1 != a[a.size()-1]) p++;
	if(0 != a[0]) p++;

	return (p);
}

int main(){
  ios_base::sync_with_stdio(false);

  ll t; cin>>t;
  while(t--){
	  ll n; cin>>n; vi a(n); for(ll i = 0; i < n; i++) cin>>a[i];

	  map<ll, vi> table;
	  for(ll i = 0; i < n; i++){
	  	table[a[i]].push_back(i);
	  }
	  ll answer = 1e9+5;
	  for(auto i : table){
	  	answer = min(cnt(i.second, n), answer);
	  }
	  cout<<answer<<endl;

	}
}