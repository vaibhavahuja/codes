#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>
#define M 1000000007

void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);


  long long int h, w;
  cin>>h>>w;

  char in[h+1][w+1];
  long long int dp[h+1][w+1];

  for(long long int i = 1; i <= h; i++){
  	string s;
  	cin>>s;
  	for(long long int j = 0; j < s.length(); j++){
  		in[i][j+1] = s[j];

  	}
  }

  for(long long int i = 0; i <= h; i++){
  	for(long long int j = 0; j <= w; j++){
  		dp[i][j] = 0;
  	}
  }

  for(long long int i = 1; i <= h; i++){
  	if(in[i][1] == '#') break;
  	  	dp[i][1] = 1;

  }

  for(long long int i = 1; i <= w; i++){
  	if(in[1][i] == '#') break;
  	dp[1][i] = 1;

  }

  for(long long int i = 2; i <= h; i++){
  	for(long long int j = 2; j <= w; j++){
		if(in[i][j] == '.') dp[i][j] = (dp[i-1][j]%M + dp[i][j-1]%M)%M;
		else dp[i][j] = 0;
  	}
  }
  

  cout<<dp[h][w]%M<<endl;

  // for(long long int i = 1; i <= h; i++){
  // 	for(long long int j = 1; j <= w; j++){
  // 		cout<<dp[i][j]<<" ";
  // 	}
  // 	cout<<endl;
  // }
  
}

