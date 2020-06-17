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
    cout<<"("<<a[i].first<<","<<a[i].second<<"), ";
    i++;
  }
  cout<<endl;
}


int check(string before, string to){
	int ans = 0;
	int i = 0;
	while(i < before.size()){
		if(before[i] != to[i]) ans++;
		i++;
	}
	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);

  int n, k;
  cin>>n>>k;
  vs a(n); for(int i = 0; i < n; i++) cin>>a[i];

  vs needed = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
  vector<vp> number;
  for(int i = 0; i < a.size(); i++){
  	string m = a[i];
  	vp p;
  	for(int j = 0; j < needed.size(); j++){
  		p.push_back(pii(j, check(m, needed[j])));
  	}
  	number.push_back(p);
  }

  for(int i = 0; i < number.size(); i++){
  	show(number[i]);
  }

  int dp[n+1][k+1];
  for(int i = 0; i <= n; i++){
  	for(int j = 0; j <=k; j++) dp[i][j] = 0;
  }
  //dp[i][j] - signifies the maximum number after j changes on i vals
  for(int i = 1; i < number.size(); i++){
  	for(int j = 1; j < k; j++){
  		for(int q = 0; q < number[i].size(); q++){
  			if(j >= number[i][q].second){
  				dp[i][j] = max(dp[i][j], dp[i-1][j-number[i][q].second]*10 + number[i][q].first);
  			}

  		}
  	}
  }

  for(int i = 0; i <= n; i++){
  	for(int j=0; j <= k; j++) cout<<dp[i][j]<<" ";
  	cout<<endl;
  }
}