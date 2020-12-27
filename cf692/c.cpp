#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi G[100005];
vector<bool> visited(100005, false);

bool isCycle = false;

void dfs(int v, int parent){
	visited[v] = true;
	for(auto u : G[v]){
		if(!visited[u]){
			dfs(u, v);
		}else{
			if(u != parent){
				isCycle = true;
			}
		}
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  int t; cin>>t;
  while(t--){
  	  for(int i = 0; i < visited.size(); i++) visited[i] = false;
  	  for(int i = 1; i < 100005; i++) G[i].clear();
	  int n, m; cin>>n>>m;
	  int ans = 0;
	  while(m--){
	  	int a, b;
	  	cin>>a>>b;
	  	if(a!=b){
	  		ans++;
		  	G[a].push_back(b);
		  	G[b].push_back(a);
	  	}
	  }
	  for(int i = 1; i <= n; i++){
	  	if(!visited[i]){
		  	isCycle = false;
		  	dfs(i, -1);
		  	if(isCycle) ans++;
	  	}
	  }
	  cout<<ans<<endl;
  }
}