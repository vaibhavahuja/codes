#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  int n, e; cin>>n>>e;
  vi G[100005];
  while(e--){
  	int u, v; cin>>u>>v;
  	G[u].push_back(v);
  	G[v].push_back(u);
  }
  int m; cin>>m;
  while(m--){
  	int initNode, dista;
  	cin>>initNode>>dista;
  	//BFS -> from initNode and mark all distances and then for loop ok

  	queue<int> Q;
  	vector<bool> visited(100005, false);
  	vi dist(10005, 1e9+5);
  	Q.push(initNode);
  	dist[initNode] = 0;
  	while(!Q.empty()){
  		int p = Q.front();
  		Q.pop();
  		visited[p] = true;
  		for(auto g : G[p]){
  			if(!visited[g]) Q.push(g);
  			dist[g] = min(dist[g], 1 + dist[p]);
  		}
  	}
  	int cntr = 0;
  	for(int i = 0; i < dist.size(); i++){
  		if(dist[i] == dista) cntr++;
  	}
  	cout<<cntr<<endl;
  }
  

}