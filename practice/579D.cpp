#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>


void show(auto a){
  int i = 1;
  while(i < 4){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


const int SIZE = 2e5+2;
long long a[SIZE],prefix[SIZE],suffix[SIZE];
int main(){
  ios_base::sync_with_stdio(false);

  int n, k, x;
  cin>>n>>k>>x;
  ll sum = 0;
  for(int i = 1; i <= n; i++) cin>>a[i];

  // sort(a.begin(), a.end());
  ll p = pow(x, k);
  ll ans = 0;
  // show(a);
  // vi prefix(200005, 0), suffix(200005, 0);
  // prefix[1] = a[1];
  // suffix[n] = a[n];
  for(int i = 1; i <= n; i++){
  	prefix[i] = prefix[i-1]|a[i];
  }

  for(int j = n; j > 0; j--){
  	suffix[j] = suffix[j+1]|a[j];
  }
  // show(prefix);
  // show(suffix);
  
  for(int i = 1; i <= n; i++){
  	ans = max(prefix[i-1]|(a[i]*p)|suffix[i+1], ans);
  }

  cout<<ans<<endl;

}