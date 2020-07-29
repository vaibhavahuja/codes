#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vector<bool> visited;
vi tin, low;
int timer;

void dfs(int v, int p = -1){
	visited[v] = true;
	tin[v] = low[v] = timer++;

	for(int to : adj[v]){
		if(to == p) continue;	//back edge?
		if(visited[to]){
			low[v] = min(low[v], tin[to]);
		}else{
			dfs(to, v);
			low[v] = min(low[v], low[to]);
			if(low[to] > tin[v]){
				cout<<"bridge"<<v<<" "<<to<<endl;
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