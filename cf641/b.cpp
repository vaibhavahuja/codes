#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 1;
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
  	int n; cin>>n;
	  vi a(n+1, 0); for(int i = 1; i <= n; i++) cin>>a[i];
	  vi dp(n+1, 1);
	  // show(a);
	  for(int i = 1; i <= n; i++){
	  	for(int j = i; j<=n; j+=i){
	  		if(a[j] > a[i]){
	  			dp[j] = max(dp[j], dp[i]+1);
	  		}
	  	}
	  }	
	  int ans = 0;
	  for(int i = 0; i < n+1; i++){
	  	ans = max(ans, dp[i]);
	  }
	  cout<<ans<<endl;

  }

	  
  


}