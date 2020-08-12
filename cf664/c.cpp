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
  int n, m; cin>>n>>m; vi a(n), b(m); for(int i = 0; i < n; i++) cin>>a[i]; for(int i = 0; i < m; i++) cin>>b[i];
  vi c;
  for(int i = 0; i < n; i++){
  	int mini = 1e8;
  	for(int j = 0; j < m; j++){
  		int q = a[i]&b[j];
  		mini = min(q, mini);
  	}
  	c.push_back(mini);
  }
  int ans = 0;
  for(int i = 0; i < c.size(); i++){
  	ans |= c[i];
  }
  
  
}