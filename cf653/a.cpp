#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
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
	  ll x, y, n;
	  cin>>x>>y>>n;
	  ll ans;
	  if(n%x >= y){
	  	ans = n - (n%x-y);
	  }else{
	  	ans = n - (n%x) - (x-y);
	  }
	  if(ans < 0) ans = 0;
	  cout<<ans<<endl;
  }


}