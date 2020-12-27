#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi G[1000];
vector<bool> visited(1000, false);


void dfs_iterative(int v){
	stack<int> S;
	S.push(v);
	visited[v] = true;
	while(!S.empty()){
		int top = S.top();
		S.pop();
		cout<<top<<" ";
		for(auto u : G[top]){
			if(!visited[u]){
				S.push(u);
				visited[u] = true;
			}
		}
	}
}

void dfs_recursive(int v){
	visited[v] = true;
	cout<<v<<" ";
	for(auto u : G[v]){
		if(!visited[u]){
			dfs_recursive(u);
		}
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  int n, m; cin>>n>>m; 
  //n is nodes and m are edges

  while(m--){
  	int a, b; cin>>a>>b;
  	G[a].push_back(b);
  	G[b].push_back(a);
  }

  dfs_recursive(1);
  cout<<endl;
  for(int i = 0; i < visited.size(); i++) visited[i] = false;
  dfs_iterative(1);
  

}