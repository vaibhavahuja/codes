#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
	  ll n, x; cin>>n>>x;
	  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];

	  ll i = 0, j = 0, sum = 0, ans = -1, pre = 1;
	  while(j < n && i < n){
	  	sum += a[j];
	  	j++;
	  	if(sum % x != 0){
	  		ans = max(ans, j-i);
	  	}else{
	  		j--;
	  	}
	  }
	  if(sum%x != 0) ans = max(ans, j-i);	  
	  cout<<ans<<endl;
  }
}