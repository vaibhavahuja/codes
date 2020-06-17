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
  int n;
  cin>>n;
  vi h(n+1);
  for(int i = 1; i <= n; i++) cin>>h[i];
  vi dp(n+1, 0);
  dp[2] = abs(h[2] - h[1]);
  for(int i = 3; i <= n; i++){
  	dp[i] = min(dp[i-2] + abs(h[i]-h[i-2]), dp[i-1] + abs(h[i]-h[i-1]));
  }
  // show(dp);
  cout<<dp[n]<<endl;

  

	



}