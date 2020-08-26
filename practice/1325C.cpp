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
  int n; cin>>n;
  int l = 0, r = n-2;
  vi a(200005), b(200005), c(200005);
  for(int i = 0; i <= r; i++){
  	cin>>a[i]>>b[i];
  	c[a[i]]++;
  	c[b[i]]++;
  }

  for(int i = 0; i < n-1; i++){
  	if(c[a[i]] == 1 || c[b[i]] == 1) cout<<l++<<endl;
  	else cout<<r--<<endl;
  }
  

}