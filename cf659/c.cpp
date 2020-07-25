#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vector<bool> visited(20, false);
vector<vi> adj(20);


void dfs(int u){
	visited[u] = true;
	for(auto v:adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}


void solve(){
  for(int i = 0; i < 20; i++) visited[i] = false, adj[i].clear();
  int n; string a, b; cin>>n>>a>>b;
  for(int i = 0; i < n; i++){
  	if(a[i] != b[i]){
  		if(a[i] > b[i]){
  			cout<<-1<<endl;
  			return;
  		}
  		adj[a[i]-'a'].push_back(b[i]-'a');
  		adj[b[i]-'a'].push_back(a[i]-'a');
  	}
  }

  int ans = 0;
  for(int i = 0; i < 20; i++){
  	if(!visited[i]){
  		dfs(i);
  		ans++;
  	}
  }
  cout<<20- ans<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);

  int t; cin>>t; while(t--) solve();

}