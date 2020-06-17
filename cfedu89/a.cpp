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
	  ll a, b;
	  cin>>a>>b;

	  ll c = min(a, b);
	  ll d = max(a, b);
	  ll ans = 0;
	  if(c == 0 || d == 0){
	  	ans = 0;
	  }else if(c == 1){
	  	if( d > 1) ans = 1;
	  	else ans = 0;
	  }else{
	  	if(c*2 <= d){
	  		ans = c;
	  	}else{
	  		ans = (c+d)/3;
	  	}
	  }
	  cout<<ans<<endl;
  }

}