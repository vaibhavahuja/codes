#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int



int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
	  ll n;
	  cin>>n;
	  cout<<n*2 - __builtin_popcountll(n)<<endl;
  }

}