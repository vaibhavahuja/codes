
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vector<pair<int, int>> G[100005];
vi dist(100005, 1e9+5);
vector<bool> visited(100005, false);

void bfs(int src){
	deque<int> dq;
	dq.push_back(src);
	dist[src] = 0;
	while(!dq.empty()){
		int top = dq.front();
		dq.pop_front();
		visited[top] = true;
		for(auto v : G[top]){
			if(!visited[v.first]){
				if(v.second == 0){
					dq.push_front(v.first);
				}else dq.push_back(v.first);
				dist[v.first] = min(dist[v.first], dist[top] + v.second);
			}
			// if(dist[v.first] > v.second + dist[top]){
			// 	dist[v.first] = dist[top] + v.second;
			// 	if(v.second == 0){
			// 		dq.push_front(v.first);
			// 	}else dq.push_back(v.first);
			// }
		}
	}
}


int main(){
  ios_base::sync_with_stdio(false);
  int t; cin>>t;
  while(t--){

	  int n; cin>>n;
	  for(int i = 0; i < dist.size(); i++) dist[i] = 1e9+5;

	  for(int i = 0; i < 100005; i++){
	  	G[i].clear();
	  	visited[i] = false;
	  } 
	  for(int i = 1; i <= n; i++){
	  	int p; cin>>p;
	  	G[i].push_back(pii(p, 0));
	  }
	  for(int i = 1; i <= n; i++){
	  	if(i != n) G[i].push_back(pii(i+1, 1));
	  	if(i != 1) G[i].push_back(pii(i-1, 1));
	  }
	  // for(int i = 1; i <= n; i++){
	  // 	cout<<i<<" -> ";
	  // 	for(int j = 0; j < G[i].size(); j++){
	  // 		cout<<"( "<<G[i][j].first<<", "<<G[i][j].second<<" ), ";
	  // 	}
	  // 	cout<<endl;
	  // }
	  bfs(1);
	  // for(int i = 1; i<=n; i++){
	  // 	cout<<dist[i]<<endl;
	  // }
	  cout<<dist[n]<<endl;
  }
}