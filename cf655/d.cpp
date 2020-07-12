#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(ll i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  ll n;
  cin>>n;
  vi a(n);

  for(ll i = 0; i < n; i++) cin>>a[i];
  if(n == 1){ 
  	cout<<a[0]<<endl;
  	return 0;
  }

  vi c(n);
  ll j = 0;
  for(ll i = 0; i <= n; i+=2){
  	c[j] = a[i];
  	j++;
  }
  for(ll i = 1; i <= n; i+=2){
  	c[j] = a[i];
  	j++;
  }
  vi b(2*n);
  for(ll i = 0; i < c.size(); i++){
  	b[i] = c[i];
  }
  for(ll i = c.size(); i < 2*c.size(); i++){
  	b[i] = c[i-c.size()];
  }
  // show(b);
  ll p = (n)/2;
  ll p1 = 0;
  ll sum = 0;
  for(ll i = p1; i <= p; i++){
  	sum += b[i];
  }
  ll sum2 = sum;
  // cout<<p1<<" "<<p<<" "<<sum<<endl;
  while(p < b.size()-1){
  	sum -= b[p1];
  	p++;
  	p1++;
  	sum += b[p];
  	sum2 = max(sum, sum2);
  	// cout<<p<<" "<<p1<<" "<<sum2<<endl;
  }
  cout<<sum2<<endl;
}
