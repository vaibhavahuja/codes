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
  int t;
  cin>>t;
  while(t--){
  	ll p; 
  	cin>>p;
  	ll n = p/2;
  	if(n%2==0 && p%2 == 0){
  		cout<<"YES"<<endl;
  	}else cout<<"NO"<<endl;
  }
}