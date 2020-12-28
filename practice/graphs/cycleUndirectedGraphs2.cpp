#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}
int n, m; 
vi adj[1000];
vi color(1000, 0);
vi parent(1000, -1);
int cycle_start, cycle_end;

bool dfs(int v, int par){	//passing vertex and its parent vertex
	color[v] = 1;
	for(auto u : adj[v]){
		if(u == par) continue;	//skipping edge to parent vertex
		if(color[u] == 0){
			parent[u] = v;
			if(dfs(u, parent[u])) return true;
		}else if(color[u] == 1){
			//cycle detected
			cycle_start = u;
			cycle_end = v;
			return true;
		}
	}

	color[v] = 2;
	return false;
}


void find_cycle(){
	cycle_start = -1;
	for(int i = 1; i <= n; i++){
		if(color[i] == 0 && dfs(i, -1)){
			break;
		}
	}

	if(cycle_start == -1){
		cout<<"Acyclic"<<endl;
	}else{
		cout<<"Cycle Found"<<endl;
		vi path; path.push_back(cycle_start);
		while(cycle_end != cycle_start){
			path.push_back(cycle_end);
			cycle_end = parent[cycle_end];
		}
		path.push_back(cycle_start);
		reverse(path.begin(), path.end());
		show(path);
	}

}



int main(){
  ios_base::sync_with_stdio(false);

  cin>>n>>m;
  while(m--){
  	int a, b; cin>>a>>b; 
  	adj[a].push_back(b);
  	adj[b].push_back(a);
  }
  find_cycle();

}