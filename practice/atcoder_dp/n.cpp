#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
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

long long dp[410][410];
//think of this problem like a tree
int main(){
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vi a(n); for(int i =0; i < n; i++) cin>>a[i];

  for(int l = n; l >= 0; l--){
  	for(int r = 0; r <= n; r++){
  		if(l == r) dp[l][r] = 0;
  		else{
  			dp[l][r] = 1e18;
  			long long int s = 0;
  			for(int i = l; i <= r; i++){
  				s += a[i];
  			}
  			for(int i = l; i <= r; i++){
  				dp[l][r] = min(dp[l][r], dp[l][i] + dp[i+1][r] + s);
  			}
  		}
  	}
  }

  cout<<dp[0][n-1]<<endl;


  

}