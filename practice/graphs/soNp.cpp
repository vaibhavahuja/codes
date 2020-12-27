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
queue<int> Q;
int t = 0;

void BFS(int i){
	t++;
	Q.push(i);
	while(!Q.empty()){
		int u = Q.front();
		Q.pop();
		for(auto v : G[u]){
			if(!visited[v]){
				visited[v] = true;
				Q.push(v);
			}
		}
	}
}

int main(){
  ios_base::sync_with_stdio(false);

  int n, m, k;
  cin>>n>>m>>k;
  int ew = m;
  while(m--){
  	int u, v; cin>>u>>v;
  	G[u].push_back(v);
  	G[v].push_back(u);
  }
  for(int i = 1; i <= n; i++){
  	if(!visited[i]){
  		BFS(i);
  	}
  }
  if(t > k){
  	cout<<-1<<endl;
  }else{
  	cout<<ew - n + k <<endl;
  }


}