#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(ll i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi G[100005];
vector<bool> visited(100005, false);
vi val(100005); 

ll k;
ll minNodes;

void dfs(ll x, ll sum, ll nodes){
	visited[x] = true;
	nodes++;
	sum += val[x];
	if(sum >= k){
		minNodes = min(minNodes, nodes);
	}
	for(auto u : G[x]){
		if(!visited[u]){
			dfs(u, sum, nodes);
		}
	}

	sum -= val[x];
	nodes--;
}

int main(){
  ios_base::sync_with_stdio(false);

  ll n, q;
  cin>>n>>q;
  for(ll i = 1; i <= n; i++) cin>>val[i];
  for(ll i = 1; i < n; i++){
  	ll a, b; cin>>a>>b; G[a].push_back(b); G[b].push_back(a);
  }
  for(ll i = 0; i < q; i++){
  	ll x;
  	cin>>x>>k;
  	for(ll i = 0; i < visited.size(); i++) visited[i] = false;
  	minNodes = 1e9+5;
  	dfs(x, 0, 0);
  	if(minNodes == 1e9+5) cout<<-1<<endl;
  	else cout<<minNodes<<endl;
  }

}