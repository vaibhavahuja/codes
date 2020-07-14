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
  int n, m; ll x, k, y; cin>>n>>m>>x>>k>>y;
  vi a(n), b(m); for(int& i:a)cin>>i; for(int& i:b) cin>>i;
  int cnt = 0, mx = 0, prv = -1, us = 0; ll ans = 0;
  a.push_back(0), b.push_back(0);

  for(int i = 0; i <= n; i++){
  	if(us <= m && a[i] == b[us]){
  		ll now = 1e15;
  		if(mx < prv || mx < a[i]) now = y*cnt;
  		for (int j = k; j <= cnt; j += k) now = std::min(now, x * (j / k) + y * (cnt - j));
			if (now >= 1e15) { std::cout << "-1\n"; return 0; }
			ans += now;
			us++;
			prv = a[i];
			mx = 0;
			cnt = 0;
  	}else mx = max(mx, a[i]), cnt++;
  }
  cout<<(us==m+1?ans:-1)<<endl;


  

}