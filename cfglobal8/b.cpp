#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  ll k;
  cin>>k;
  vi a = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  ll q = 1;

  while(q < k){
  	for(ll i = 0; i < 10; i++){
	  	q/=a[i];
	  	a[i]++;
	  	q*=a[i];
	  	if(q >= k) break;
  	}
  }
  string ans = "codeforces";
  ll m = 0;
  for(ll i = 0; i < a.size(); i++){
  	for(ll j = 0; j < a[i]; j++){
  		cout<<ans[m];
  	}
  	m++;
  }
  cout<<endl;
}