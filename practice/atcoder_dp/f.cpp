#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>


int main(){
  ios_base::sync_with_stdio(false);

  string s, t;
  cin>>s>>t;
  int sl = s.length(), tl = t.length(); 
  int dp[sl+1][tl+1];
  for(int i = 0; i<= sl; i++){
  	for(int j = 0; j <= tl; j++){
  		dp[i][j] = 0;
  	}
  }

  for(int i = 1; i<= sl; i++){
  	for(int j = 1; j <= tl; j++){
  		if(s[i-1] == t[j-1]){
  			dp[i][j] = dp[i-1][j-1] + 1;
  		}else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
  	}
  }

  int i = sl, j = tl;
  string ans = "";
  while(i >= 1 && j >= 1){
  	if(s[i-1] == t[j-1]){
  		ans += s[i-1];
  		i--;
  		j--;
  	}else if(dp[i-1][j] > dp[i][j-1]) i--;
  	else j--;
  }
  reverse(ans.begin(), ans.end());
  cout<<ans<<endl;

}