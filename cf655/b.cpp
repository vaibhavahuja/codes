#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(ll i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

pii getFactors(ll n){
	vi check;
	for(ll i = 1; i <= sqrt(n); i++){
		if(n%i==0){
			check.push_back(i);
			if(n/i != i) check.push_back(n/i);
		}
	}
	// show(check);
	pii ans2;
	ll ans = 1e9+5;
	for(ll i = 0; i < check.size(); i++){
		if(check[i] == 0 || (n-check[i] == 0)) continue;
		ll lcm = (check[i]*(n-check[i]))/__gcd(check[i], n-check[i]);
		if(lcm < ans){
			ans2.first = check[i];
			ans2.second = n-check[i];
			ans = lcm;
		}
	}
	return ans2;
}

int main(){
  ios_base::sync_with_stdio(false);
  ll t;
  cin>>t;
  while(t--){
  	ll n; cin>>n;
  	cout<<getFactors(n).first<<" "<<getFactors(n).second<<endl;
  }


}