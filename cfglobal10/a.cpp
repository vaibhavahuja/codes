#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void solve(){
	mii table;
	int n; cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i], table[a[i]]++;

	if(table.size()==1) cout<<n<<endl;
	else cout<<1<<endl;

}
int main(){
  ios_base::sync_with_stdio(false);
  int t; cin>>t;
  while(t--) {solve();}  

}