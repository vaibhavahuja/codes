#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  	  ll n, k;
	  cin>>n>>k;
	  ll ans;
	  if(k%(n-1) == 0){
	  	ll p = (k/(n-1));
	  	ans = p*n - 1;
	  }else{
	  	ll p = (k/(n-1));
	  	ans = p*n + k%(n-1);
	  }
	  cout<<ans<<endl;
  
  }


}