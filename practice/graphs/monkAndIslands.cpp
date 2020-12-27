#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(ll i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  ll t; cin>>t;
  while(t--){

	  ll n, m; 
	  cin>>n>>m;
	  vi G[100005];
	  while(m--){
	  	ll a, b; cin>>a>>b;
	  	G[a].push_back(b);
	  	G[b].push_back(a);
	  }
	  vector<bool> visited(10000);
	  vector<ll> minDistance(10000, 1e9+5);

	  queue<ll> Q;
	  Q.push(1);
	  minDistance[1] = 0;
	  while(!Q.empty()){
	  	ll top = Q.front();
	  	visited[top] = true;
	  	Q.pop();
	  	for(auto i : G[top]){
	  		if(!visited[i]) {
	  			Q.push(i);
	  			minDistance[i] = min(1 + minDistance[top], minDistance[i]);
	  		}
	  	}
	  }
	  cout<<minDistance[n]<<endl;
  }
}