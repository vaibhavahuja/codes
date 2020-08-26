#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vector<vi> G(100005);
vector<bool> visited(100005, false);
vi cats(100005, 0);
int n, m; 
vi leavesReached;
int ans = 0;

void dfs(int v, int cnt){
	visited[v] = true;
	int flag = 1;

	if(cats[v]) cnt++;
	else cnt = 0;

	if(cnt > m) return;

	for(int i = 0; i < G[v].size(); i++){
		if(!visited[G[v][i]]){
			flag = 0;
			dfs(G[v][i], cnt);
		}
	}
	if(flag == 1){
		ans++;
	}
}



int main(){
  ios_base::sync_with_stdio(false);
  cin>>n>>m;
  for(int i = 1; i <= n; i++){
  	int p; cin>>p;
  	if(p == 1){
  		cats[i] = 1;
  	} 
  }
  ans = 0;
  for(int i = 0; i < visited.size(); i++){
  	visited[i] = false;
  }
  for(int i = 0; i < G.size(); i++){
  	G[i].clear();
  }

  for(int i = 0; i < n-1; i++){
  	int a, b; cin>>a>>b;
  	G[a].push_back(b);
  	G[b].push_back(a);
  }
  dfs(1, 0);
  cout<<ans<<endl;
  
}