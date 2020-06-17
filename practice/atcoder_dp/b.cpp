#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
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

  int n, k;
  cin>>n>>k;
  vi a(n+1, 0);
  for(int i = 1; i<= n; i++) cin>>a[i];
  
  vi dp(n+1, 1e9);
  dp[1] = 0;
  for(int i = 2; i<=n; i++){
  	int j = max(1, i-k);
  	for(j; j<i; j++){
  		dp[i] = min(dp[i], dp[j] + abs(a[i] - a[j]));
  	}
  	// cout<<endl;

  }
  // show(dp);
  cout<<dp[n]<<endl;
}