#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>

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

  for(long long int i = 0; i < n; i++) cin>>wt[i]>>val[i];


  long long int dp[n+1][W+1];

  for(long long int i = 0; i <= n; i++){
  	for(long long int j = 0; j<= W; j++){
  		if( i == 0 || j == 0) dp[i][j] = 0;
  		else{
  			dp[i][j] = dp[i-1][j];
  			if(wt[i-1] <= j) dp[i][j] = max(dp[i][j], val[i-1] + dp[i-1][j-wt[i-1]]);
  		} 
  	}
  }


  cout<<dp[n][W]<<endl;
  
}