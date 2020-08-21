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
	int n; cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
	ll ans = 0;
	for(int i = 0; i < n-1; i++){
		ans += max(0, a[i]-a[i+1]);
	}
	cout<<ans<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);

  int t; cin>>t;
  while(t--){
  	solve();
  }

}