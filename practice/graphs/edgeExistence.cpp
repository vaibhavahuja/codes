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

  int n, m;
  cin>>n>>m;
  vi G[1001];
  while(m--){
  	int a, b;
  	cin>>a>>b;
  	G[a].push_back(b);
  	G[b].push_back(a);
  }
  int q; cin>>q;
  while(q--){
  	int a, b;
  	cin>>a>>b;
  	int m = 0;
  	for(auto i : G[a]){
  		if(i == b){
  			m = 1;
  			break;
  		}
  	}
  	if(m == 1){
  		cout<<"YES";
  	}else cout<<"NO";
  	cout<<endl;
  }

}