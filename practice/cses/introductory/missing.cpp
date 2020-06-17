#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll unsigned long long int

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

  ll sum = 0;
  ll n;
  cin>>n;
  ll q= n-1;
  ll expected = (n)*(n+1)/2;

  // cout<<expected<<endl;
  while(q--){
  	int a;
  	cin>>a;
  	sum += a;
  }
  ll ans = expected - sum;

  cout<<ans<<endl;
}