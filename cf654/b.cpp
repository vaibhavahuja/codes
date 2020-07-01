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

	  ll ans;
	  ll n, r;
	  cin>>n>>r;
	  if(r >= n){
	  	ans = (n-1)*(n)/2 + 1;
	  }else{
	  	ans = (r)*(r+1)/2;
	  }

	  cout<<ans<<endl;
	  
  }

}