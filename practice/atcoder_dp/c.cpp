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
  int n;
  cin>>n;
  vi a(n+1), b(n+1), c(n+1);
  for(int i = 1; i <= n; i++) cin>>a[i]>>b[i]>>c[i];


  int dp[n+1][3];
  dp[1][0] = a[1];
  dp[1][1] = b[1];
  dp[1][2] = c[1];

  for(int i = 2; i <= n; i++){
  	for(int j = 0; j < 3; j++){
  		if(j == 0){
  			dp[i][j] = a[i] + max(dp[i-1][1], dp[i-1][2]);
  		}else if(j == 1){
  			dp[i][j] = b[i] + max(dp[i-1][0], dp[i-1][2]);
  		}else if(j == 2){
  			dp[i][j] = c[i] + max(dp[i-1][1], dp[i-1][0]);
  		}
  	}
  }

  // for(int i = 1; i<= n; i++){
  // 	for(int j = 0; j < 3; j++){
  // 		cout<<dp[i][j]<<" ";
  // 	}
  // 	cout<<endl;
  // }

  int finalAns = max(dp[n][0], dp[n][1]);
  finalAns = max(finalAns, dp[n][2]);

  cout<<finalAns<<endl;
}