#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

// int getFirstOneBit(int n){
// 	string s = ""; 
// 	while(n > 0){
// 		s += (n%2==0)?'0':'1';
// 		n/=2;
// 	}
// 	while(s.size() < 30) s+='0';
// 	reverse(s.begin(), s.end());
// 	return s;
// }

ll getFirstSetBitPos(ll n) 
{ 
    if (n == 0) 
        return 0; 
  
    ll msb = 0; 
    n = n / 2; 
    while (n != 0) { 
        n = n / 2; 
        msb++; 
    } 
  
    return msb; 
}

int main(){
  ios_base::sync_with_stdio(false);
  ll t; cin>>t;

  while(t--){
	  mii table; 	//first one bit

	  ll n; cin>>n; vi a(n); 
	  for(ll i = 0; i < n; i++){ 
	  	cin>>a[i];
	  	table[getFirstSetBitPos(a[i])] += 1;
	  }
	  // show(a);
	  ll ans = 0;
	  for(auto i:table){
	  	// cout<<i.first<<" "<<i.second<<endl;
	  	ans += ((i.second)*(i.second-1))/2;
	  }
	  cout<<ans<<endl;  	
  }

}