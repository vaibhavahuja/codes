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
  	ll n;
  	cin>>n;
  	if(n&1){
  		cout<<n/2+1<<endl;
  	}else cout<<n/2<<endl;
  }

}