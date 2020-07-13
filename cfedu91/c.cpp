#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
	  ll n,x;cin>>n>>x;vi a(n);for(int i=0;i<n;i++)cin>>a[i];
	  sort(a.begin(), a.end(), greater<ll>());
	  // show(a);
	  int teams = 0, size = 1;
	  for(int i = 0; i < a.size(); i++){
	  	if(a[i]*size >= x){
	  		teams++;
	  		size = 1;
	  	}else size++;
	  }  	
	  cout<<teams<<endl;
  }
}