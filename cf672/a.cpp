#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(ll i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void solve(){
	// vi a;
	mii table;
	ll n; cin>>n; vi a(n); for(ll i =0; i < n; i++) cin>>a[i], table[a[i]]++;

	vi b = a;
	vi c = a;
	
	sort(b.begin(), b.end(), greater<ll>());

	//c is ascending
	//b is descending
	ll dupl = table.size();
	if(dupl != n){
		cout<<"YES"<<endl;
		return;
	}
	if(b == a){
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;

}

int main(){
  ios_base::sync_with_stdio(false);
  ll t; cin>>t; while(t--) solve();
}