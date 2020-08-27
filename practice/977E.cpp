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
vector<bool> visited(200005, false);
vector<bool> visit2(200005, false);
mii degree;

vi val(200005, 0);

int neededcnt = 0;
bool check = true;
bool dfs(int v){
	visit2[v] = true;
	if(degree[v] != 2) check&=false;
	neededcnt++;
	for(auto u : G[v]){
		if(!visit2[u]) dfs(u);
	}
	return check;
}


int main(){
  ios_base::sync_with_stdio(false);
  int n, m; cin>>n>>m;
  while(m--){
  	int a, b; cin>>a>>b;
  	G[a].push_back(b);
  	G[b].push_back(a);
  	degree[a]++;
  	degree[b]++;
  }
  mii table;
  int ans = 0;
  for(int i = 1; i <= n; i++){
  	neededcnt = 0;
  	if(!visit2[i]){ 
  		// check = true;
  		if(dfs(i)) ans++; 
  	}
  }
  cout<<ans<<endl;
  
}