//Will check this out late

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
ll show(auto a){ll ans = 0; for(ll i=0;i<a.size();i++){ans += a[i]*a[i];}return ans;}

string convert(ll a){
	string ans = "";
	while(a > 0){
		ans += a%2 + '0';
		a/=2;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

ll toDec(string a){
	reverse(a.begin(), a.end());
	ll ans = 0;
	ll q = 0;
	for(ll i = 0; i < a.size(); i++){
		ans += (a[i]-'0')*pow(2, q);
		q++;
	}
	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  ll n; cin>>n; vi a(n); for(ll i = 0; i < n; i++) cin>>a[i];
  sort(a.begin(), a.end());
  if(a.size() == 1){
  	cout<<a[0]*a[0]<<endl;
  	return 0;
  }

  for(ll i = a.size() - 2; i >= 0; i--){
  	ll x = a[i], y = a[a.size()-1];
  	a[a.size()-1] |= x;
  	a[i] &= y;
  }
  for(ll i = 0; i < a.size(); i++) cout<<a[i]<<" ";
  cout<<endl;
  cout<<show(a)<<endl;
}