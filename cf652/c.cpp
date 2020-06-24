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
  ll t;
  cin>>t;
  while(t--){

	  ll n, k;
	  cin>>n>>k;
	  vi a(n); for(ll i = 0; i < n; i++) cin>>a[i];
	  vi friends(k); for(ll i = 0; i < k; i++) cin>>friends[i];
	  sort(friends.begin(), friends.end());
	  sort(a.begin(), a.end(), greater<ll>());

	  vp allFriendsSize(k);
	  for(ll i = 0; i < k; i++){
	  	allFriendsSize[i].first = -1e9-5;
	  	allFriendsSize[i].second = 1e9+5;
	  }
	  ll coins = 0, i = 0, p = 0;

	  while(coins < n){
	  	if(i == k){
	  		i = p;
	  		continue;
	  	}
	  	if(allFriendsSize[i].first == -1e9-5) allFriendsSize[i].first = a[coins];
	  	else allFriendsSize[i].first = max(allFriendsSize[i].first, a[coins]);

		if(allFriendsSize[i].second == 1e9+5) allFriendsSize[i].second = a[coins];
	  	else allFriendsSize[i].second = min(allFriendsSize[i].second, a[coins]);  	

	  	friends[i]-=1;
	  	if(friends[i] == 0){
	  		p = i+1;
	  	}

	  	i++;
	  	coins++;
	  }
	  ll ans = 0;
	  for(ll i = 0; i < allFriendsSize.size(); i++){
	  	ans += allFriendsSize[i].first+allFriendsSize[i].second;
	  }
	  cout<<ans<<endl;
  }



}