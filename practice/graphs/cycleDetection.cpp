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

bool isCycle = false;

void dfs(int v, int parent){
	visited[v] = true;
	for(auto u : G[v]){
		if(!visited[u]){
			dfs(u, v);
		}else{
			if(u != parent){
				isCycle = true;
			}
		}
	}
}



int main(){
  ios_base::sync_with_stdio(false);
  int n, m; cin>>n>>m; 
  while(m--){
  	int a, b; cin>>a>>b;
  	G[a].push_back(b);
  	G[b].push_back(a);
  }
  dfs(0, -1);
  if(isCycle){
  	cout<<"Cycle exists"<<endl;
  }else cout<<"Does not exist"<<endl;


}