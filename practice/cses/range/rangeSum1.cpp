#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int
#define vi vector<ll>

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

  int n, q;
  cin>>n>>q;
  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
  for(int i = 1; i < n; i++) a[i] += a[i-1];

  while(q--){
  	int l, r;
  	cin>>l>>r;
  	l--; r--;
  	if(l == 0) cout<<a[r]<<endl;
  	else cout<<a[r] - a[l-1]<<endl;
  }
}