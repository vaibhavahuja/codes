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

  int r, c, x, y; cin>>r>>c>>x>>y;

  int m[r][c];
  for(int i = 0; i < r; i++){
  	for(int j = 0; j < c; j++){
  		m[i][j] = 1e9+5;
  	}
  }
  queue<pii> Q;
  map<pii, bool> table;
  Q.push(pii(x, y));
  table[pii(x, y)] += 1;
  while(!Q.empty()){
  	for()
  		// do this tomorrow

  }

  

}