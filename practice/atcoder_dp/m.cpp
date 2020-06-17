#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
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
  // dp[i][j]-> no. of ways by using i items making k
  int n, k;
  cin>>n>>k;
  vi a(n);for(int i = 0; i < n; i++) cin>>a[i];

  int dp[n+1][k+1];

  for(int i = 0; i <= n; i++){
  	for(int j = 0; j <= k; j++){
  		if( i == 0 && j == 0) dp[i][j] = 1;
  		else dp[i][j] = 0;

  		if(j == 0) dp[i][j] = 1;

  	}
  }

  for(int i = 1; i <= n; i++){
  	for(int j = 1; j <= k; j++){
  		for(int m = 0; m <= a[i-1]; m++){
  			if(j >= m) dp[i][j] += dp[i-1][j-m];
  		}
  	}
  }


  cout<<dp[n][k]<<endl;

}
