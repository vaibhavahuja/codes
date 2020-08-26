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
vi colors(200005, -1);
vector<bool> visited(200005, false);


//dfs
bool bipartite(int v){
	for(int i = 0; i < G[v].size(); i++){
		if(!visited[G[v][i]]){
			visited[G[v][i]] = true;
			colors[G[v][i]] = 1 - colors[v];
			if(!bipartite(G[v][i])) return false;
		}else{
			if(colors[G[v][i]] == colors[v]) return false;
		}
	}
	return true;

}



//below is bfs
// bool bipartite(int v){
// 	queue<int> q;
// 	if(colors[v] != -1) return true;
//     q.push(v);
// 	colors[v] = 1;
// 	while(!q.empty()){
// 		int top = q.front();
// 		q.pop();
// 		for(int i = 0; i < G[top].size(); i++){
// 			if(colors[G[top][i]] == -1){
// 				//not yet visited;
// 				colors[G[top][i]] = 1 - colors[top];
// 				q.push(G[top][i]);
// 			}else if(colors[G[top][i]] == colors[top]){
// 				return false;
// 			}else if(colors[G[top][i]] == 1 - colors[top]){
// 				continue;
// 			}
// 		}
// 	}
// 	return true;
// }



int main(){
  ios_base::sync_with_stdio(false);

  int n, m; cin>>n>>m;
  for(int i = 0; i < m; i++){
  	int a, b; cin>>a>>b;
  	G[a].push_back(b);
  	G[b].push_back(a);
  }
  bool ans = true;
  for(int i = 1; i <= n; i++){
  	if(colors[i] == -1) colors[i] = 1;
  	ans &= bipartite(i);
  }

  if(!ans) cout<<-1<<endl;
  else{
  	vi first, second;
  	for(int i = 1; i <= n; i++){
  		if(colors[i] == 1) first.push_back(i);
  		else if(colors[i] == 0) second.push_back(i);
  	}

  	cout<<first.size()<<endl;
  	show(first);
  	cout<<second.size()<<endl;
  	show(second);
  	

  }



}