#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}
const ll M = 1000000007;

ll add2(ll a, ll b){
	return (a%M + b%M)%M;
}

ll mul2(ll a, ll b){
	return ((a%M)*(b%M))%M;
}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
	  ll n;
	  cin>>n;
	  ll m = (n*(n-1))/2;
	  ll ans2 = mul2(mul2(n, add2(mul2(2, m+1), (n-1))), 500000004);
	  cout<<ans2<<endl;
	}

}