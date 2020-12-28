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
vi adj[1000]; //my graph
vi color(1000, 0); //0 means unvisited
vi parent(1000, -1); //will use it to back track the path
int cycle_starts, cycle_ends;

bool dfs(int v){
	color[v] = 1;	//visiting it for the first time

	for(auto u : adj[v]){
		if(color[u] == 0){	//not yet visited
			parent[u] = v;	//assigning the parent for u
			if(dfs(u)) return true;
		}else if(color[u] == 1){	//visited and visiting again so def a cycle
			cycle_starts = u;
			cycle_ends = v;
			return true;
		}
	}

	color[v] = 2;	//no more paths to explore
	return false;
}

void find_cycle(){
	cycle_starts = -1;
	for(int i = 1; i <= n; i++){
		if(color[i] == 0 && dfs(i)){
			break;
		}
	}
	if(cycle_starts == -1){
		cout<<"Acyclic"<<endl;
	}else{
		cout<<"Cycle exists"<<endl;
		//tracing the cycle
		vi cycle;
		cycle.push_back(cycle_starts);
		// for(int i = cycle_ends; i != cycle_starts; )
		while(cycle_starts != cycle_ends){
			cycle.push_back(cycle_ends);
			cycle_ends = parent[cycle_ends];
		}
		cycle.push_back(cycle_starts);
		reverse(cycle.begin(), cycle.end());
		show(cycle);
	}

}


int main(){
  ios_base::sync_with_stdio(false);
  cin>>n>>m;
  while(m--){
  	int a, b; cin>>a>>b; 
  	adj[a].push_back(b);
  }
  find_cycle();
  // dfs(1);
  // for(int i = 1; i <= n; i++) cout<<color[i]<<" ";
}