#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}
vector<vi> G(200005);
vector<bool> visited(200005, false);
mii degree;

bool check;
int deg;
int elem = 0;
mii elements;
void dfs(int v){
	visited[v] = true;
	elem++;
	// if(degree[v] != deg) check &= false;
	for(auto u:G[v]){
		if(!visited[u]) dfs(u);
	}
}

bool dfs2(int v){
	visited[v] = true;
	if(degree[v] != deg) check &= false;
	// cout<<v<<" "<<degree[v]<<" "<<deg<<endl;
	for(auto u : G[v]){

		if(!visited[u]){
			dfs2(u);
		}
	}
	return check;
}


int main(){
  ios_base::sync_with_stdio(false);
  int n, m; cin>>n>>m;
  while(m--){
  	int a, b; cin>>a>>b;
  	G[a].push_back(b);
  	G[b].push_back(a);

  	degree[a]++;
  	degree[b]++;
  }

  for(int i = 1; i <= n; i++){
  	if(!visited[i]){
  		elem = 0;
  		dfs(i);
  		elements[i] = elem;
  	}
  }
  for(int i = 0; i < visited.size(); i++) visited[i] = false;
  bool ans = true;
  for(int i = 1; i<= n; i++){
  	if(!visited[i]){
  		if(elements[i] <= 2) continue;
	  	deg = elements[i]-1;
	  	check = true;
	  	ans &= dfs2(i);
  	}
  }

  cout<<((ans)?"YES":"NO")<<endl;

}