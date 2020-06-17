#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vb vector<bool>
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
  int n, k;
  cin>>n>>k;
  vi stones(n); for(int i = 0; i < n; i++) cin>>stones[i];

  vb dp(k+1, false);
  //dp[i] => who will win if i stones are chosen
  for(int i = 0; i <= k; i++){
  	for(int j = 0; j < stones.size(); j++){
  		if(stones[j]<=i && !dp[i-stones[j]]){
  			dp[i] = true;
  		}
  	}
  }

  string ans = (dp[k])?"First":"Second";
  cout<<ans<<endl;
}