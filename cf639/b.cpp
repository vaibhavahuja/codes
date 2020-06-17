#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int
void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);

  vi a;
  ll p = 0;
  while(1){
  	ll ans = (p*(3*p + 1))/2;
  	a.push_back(ans);
  	p++;
  	if(a[a.size() - 1] >= 1e9) break;
  }
  // cout<<p<<endl;
  int t;
  cin>>t;

  // cout<<pw<<endl;
  while(t--){
  	ll n;
  	cin>>n;
  	ll q = 0;
  	while(n >= 2){
  		ll pq;
  		pq = a[lower_bound(a.begin(), a.end(), n) - a.begin()];
  		if(pq != n) pq = a[lower_bound(a.begin(), a.end(), n) - a.begin() - 1];
  		// cout<<n<<" "<<pq<<endl;
  		if(pq >= 2){
  			n -= pq;
  			q++;
  		}else{
  			break;
  		}

  	}
  	cout<<q<<endl;
  }
  // show(a);

}