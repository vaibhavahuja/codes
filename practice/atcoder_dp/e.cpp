#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>

#define inf 1e18+5;


void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}




int main(){
  ios_base::sync_with_stdio(false);

  long long int n, W;
  cin>>n>>W;

  vi wt(n), val(n);
  long long int V = 0;
  for(long long int i = 0; i < n; i++) cin>>wt[i]>>val[i], V+=val[i];

  long long int dp[n+1][V+1];

  

  for(long long int j = 0; j <= V; j++)dp[0][j] = inf;
  dp[0][0] = 0;

  for(long long int i = 1; i <= n; i++){
  	for(long long int j = 0; j<=V; j++) dp[i][j] = inf;
  	for(long long int j = 0; j<=V; j++){
  		dp[i][j] = min(dp[i][j], dp[i-1][j]);
  		if(j >= val[i-1]) dp[i][j] = min(dp[i][j], wt[i-1] + dp[i-1][j-val[i-1]]);
  	}
  }
  long long int ans = -1;
  for(long long int i = 0; i <= V; i++){
  	if(dp[n][i] <= W) ans = max(ans, i);
  }


   cout<<ans<<endl;



  
}