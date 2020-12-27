#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi G[100005];
vector<bool> visited(100005, false);
int num = 0;

void dfs(int v){
	visited[v] = true;
	num++;
	for(auto u : G[v]){
		if(!visited[u]){
			dfs(u);
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
  int head; cin>>head;
  dfs(head);
  cout<<n-num<<endl;
}