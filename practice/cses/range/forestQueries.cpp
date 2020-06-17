#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  ll n, m;
  cin>>n>>m;
  ll dp[n+1][n+1];

  for(int i = 0; i <= n; i++){
  	for(int j = 0; j <=n; j++){
  		dp[i][j] = 0;
  	}
  }

  for(int i = 1; i <= n; i++){
  	string s;
  	cin>>s;
  	for(int j = 1; j <=n; j++){
  		char p = s[j-1];
  		// cin>>p;
  		dp[i][j] = (p=='*')?1:0;
  	}
  }  

  // for(int i = 0; i <= n; i++){
  // 	for(int j = 0; j <= n; j++){
  // 		cout<<dp[i][j]<<" ";
  // 	}
  // 	cout<<endl;
  // }

  for(int i = 1; i <= n; i++){
  	for(int j = 1; j <= n; j++){
  		dp[i][j] += dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
  	}
  }

  // cout<<"processed now"<<endl;

  while(m--){
  	int x1, y1, x2, y2;
  	cin>>x1>>y1>>x2>>y2;
  	cout<<dp[x2][y2] - dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1]<<endl;
  }

  // for(int i = 1; i <= n; i++){
  // 	for(int j = 1; j <= n; j++){
  // 		cout<<dp[i][j]<<" ";
  // 	}
  // 	cout<<endl;
  // }


}