#include <bits/stdc++.h>
using namespace std;
#define vd vector<double>
#define vs vector<string>
#define mii map<int, int>

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

  int n;
  cin>>n;
  vd a(n, 0);
  for(int i = 0; i < n; i++) cin>>a[i];

  double dp[n+1][n+1];
   for(int i = 0; i <= n; i++){
  	for(int j = 0; j <= n; j++){
  		dp[i][j] = 0;
  	}
  	
  }
	
  dp[1][0] = 1-a[0];
  dp[1][1] = a[0];
	// dp[i][j] means the total probability
	// of getting j heads in i items
  for(int i = 2; i <= n; i++){
  	for(int j = 0; j <= i; j++){
  		if(i == j) dp[i][j] = dp[i-1][j-1]*a[i-1];
  		else if(j == 0) dp[i][j] = dp[i-1][j]*(1-a[i-1]);
  		else dp[i][j] = (dp[i-1][j]*(1-a[i-1]) + dp[i-1][j-1]*(a[i-1]));
  	}
  }


  double ans = 0;
  
  for(int j = n/2+1; j <= n; j++){
  	ans += dp[n][j];
  }
  cout<<setprecision(10);
  cout<<fixed;

  cout<<ans<<endl;

  



}