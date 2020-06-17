#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i].first<<" "<<a[i].second<<endl;}cout<<endl;}
const int N = 1e6+7;


vi G[N], in[N];

int main(){
  ios_base::sync_with_stdio(false);

  int n, m;
  cin>>n>>m;
  while(m--){
  	int a, b;
  	cin>>a>>b;
  	G[a].push_back(b);
  	G[b].push_back(a);
  }

  for(int i = 1; i <= topics.size(); i++){
  	int color;
  	cin>>color;
  	in[color].push_back(i);
  }

  


}

