#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}
typedef long double ld;
const int maxn = 2e5 + 17, maxv = 1e6 + 17, mod = 1e9 + 7;
 
int n;
vector<int> g[maxn];

ld dfs(int v = 0, int p = -1){
	ld sum = 0;
	for(auto u : g[v]){
		if(u != p){
			sum += dfs(u, v) + 1;
		}
	}
	return sum?sum/(g[v].size() - (p!=-1)):0;
}

int main(){
  ios_base::sync_with_stdio(false);
	cin >> n;
	for(int v, u, i = 1; i < n; i++){
		cin >> v >> u, v--, u--;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	cout << fixed << setprecision(7) << dfs() << '\n';
	return 0;
  

}