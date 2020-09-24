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
  ll t; cin>>t;
  while(t--){

	  ll n, q; cin>>n>>q;
	  ll maxi = 0;
	  vi a(n); for(ll i = 0; i < n; i++) {cin>>a[i]; maxi = max(a[i], maxi);}

	  //get all peaks
	  vi peaks;
	  peaks.push_back(a[0]);
	  ll j = 1;
	  ll m = peaks[0];
	  while(j < a.size()-1){
	  	if(a[j] > m){
	  		while(a[j+1] > a[j] && j < a.size()-1) j++;
	  		peaks.push_back(a[j]);
	  		m = a[j];
	  	}
	  	if(a[j] < m){
	  		while(a[j+1] < a[j]  && j < a.size()-1) j++;
	  		peaks.push_back(a[j]);
	  		m = a[j];
	  	}
	  	j++;
	  }
	  if(j == a.size()-1) peaks.push_back(a[j]);
	  // show(peaks);

	  j = 0;
	  ll qq = peaks.size()-1; 
	  ll ans = 0;
	  if(peaks.size()==1){
	  	ans = peaks[0];
	  }else{
	  	if(peaks[j+1] > peaks[j]) j = 1;
	  	if(peaks[qq] < peaks[qq-1]) qq--;
	  	bool add = true;
	  	// cout<<j<<" "<<qq<<endl;
	  	for(j; j <= qq; j++){
	  		if(add){
	  			ans += peaks[j];
	  		}else{
	  			ans -= peaks[j];
	  		}
	  		add ^= true;
	  	}
	  }
	  cout<<max(maxi, ans)<<endl;

  }

}	