#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

//thing to be noted
//tin[v] entry time for node v
// p is every node connected to v via back edge
// to is every vertex which is descendant of v in DFS tree
// low[v] = min(tin[v], tin[p], low[to])
int n; //number of nodes
vector<vi> adj;	//adjacency list (graph)
vi tin, low; 	//time of in, and low
int timer;


void dfs(int v, int p = -1){
	visited[v] = true;
	tin[v] = low[v] = timer++;

	for(auto to : adj[v]){
		if(to == p) continue;
		if(visited[to]){
			//back edge
			low[v] = min(low[v], tin[to]);
		}else{
			dfs(to, v);
			low[v] min(low[v], low[to]);
			if(low[to] > tin[v]){
				// v to is a bridge
			}
		}
	}
}


void find_bridges(){
	timer = 0;
	visited.assign(n, false);
	tin.assign(n, -1);
	low.assign(n, -1);
	for(int i = 0; i < n; i++){
		if(!visited[i]) dfs(i);
	}
}


int main(){
  ios_base::sync_with_stdio(false);


  

}