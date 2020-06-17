
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define miv unordered_map<int, vi>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


void dfs(int a,  vector<int> table[], bool visited[], int dp[]){
	visited[a] = true;
	for(int i = 0; i<table[a].size(); i++){
		if(!visited[table[a][i]]) dfs(table[a][i], table, visited, dp);

		dp[a] = max(dp[table[a][i]] + 1, dp[a]);
	}

}

int main(){
  ios_base::sync_with_stdio(false);

  int n, m;
  cin>>n>>m;
  vector<int> table[n+1];

  while(m--){
  	int a, b;
  	cin>>a>>b;
  	table[a].push_back(b);
  }

  bool visited[n+1];
  int dp[n+1];

  for(int i = 0; i <= n; i++){
  	visited[i] = false;
  	dp[i] = 0;
  }


  for(int i = 1; i<=n; i++){
  	if(!visited[i])dfs(i, table, visited, dp);
  }
  int ans = 0;
  for(int i = 0; i < n+1; i++){
  	ans = max(dp[i], ans);
  }

  cout<<ans<<endl;

}