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
  ll t;
  cin>>t;
  while(t--){
	  ll c, d, n;

	  cin>>c>>d>>n;
	  ll a = min(c, d);
	  ll b = max(c, d);

	  ll cnt = 0;
	  while(a <= n && b <= n){
	  	a += b;
	  	cnt++;
	  	if(a > n || b > n) break;
	  	b += a;
	  	cnt++;
	  	if(a > n || b > n) break;
	  }
	  cout<<cnt<<endl;
  }
}