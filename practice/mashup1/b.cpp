#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define MOD 1000000007
void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

//dp[i][j] means the number of such pairs of arrays with max number i and length j which satisfy 
//figure out how this works 

int main(){
  ios_base::sync_with_stdio(false);
  long long int n, m;
  cin>>n>>m;
  long long int dp[n+1][m+1];
  for(int i = 0; i <= n; i++){
  	for(int j = 0; j <= m; j++){
  		if(i == 0 || j == 0) dp[i][j] = 0;
  		else if(i == 1) dp[i][j] = 1;
  		else if(j == 1) dp[i][j] = (i*(i+1))/2;
  		else {
  			dp[i][j] = (dp[i-1][j]%MOD + dp[i][j-1]%MOD + dp[i-1][j-1]%MOD)%MOD;
  			for(int k = 0; k < i-1; k++) dp[i][j] = (dp[i][j]%MOD + dp[k][j-1]%MOD)%MOD;
  		}
  		
  	}
  }

  // for(int i = 1; i <= n; i++){
  // 	for(int j = 1; j <= m; j++){
  // 		cout<<dp[i][j]<<" ";
  // 	}
  // 	cout<<endl;
  // }

  cout<<dp[n][m]<<endl;
  

  
  

}