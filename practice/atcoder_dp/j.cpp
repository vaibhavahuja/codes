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

  double dp[311][311][311];

int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;

  int a = 0, b = 0, c = 0;

  for(int i = 0; i < n; i++){
  	int x;
  	cin>>x;
  	if(x == 1) a++;
  	else if(x == 2) b++;
  	else if(x == 3) c++;
  }


  for(int i = 0; i <= 310; i++){
  	for(int j=0;j<=310;j++)for(int k=0;k<=310;k++) dp[i][j][k] = 0;
  }

  for(int k = 0; k < 310; k++){
  	for(int j = 0; j + k< 310; j++){
  		for(int i = 0; i + j + k < 310; i++){
  			if(i == 0 && j == 0 && k == 0) continue;

  			if(i + j + k > 305) continue;

  			double zeros = 1.0*n/(i+j+k);
  			double pi =1.0 * i/(i+j+k);
  			double pj =1.0 * j/(i+j+k);
  			double pk =1.0 * k/(i+j+k);

  			if(i) dp[i][j][k] += pi*dp[i-1][j][k];
  			if(j) dp[i][j][k] += pj*dp[i+1][j-1][k];
  			if(k) dp[i][j][k] += pk*dp[i][j+1][k-1];

  			dp[i][j][k] += zeros;
  		}
  	}
  }
  cout<<setprecision(10);
  cout<<fixed;
  cout<<dp[a][b][c]<<endl;;

}