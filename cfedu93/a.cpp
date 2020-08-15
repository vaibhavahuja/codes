#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void solve(){
  int n; cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i];

  int x = a[0], y = a[1], z = a[a.size()-1];

  if(x + y > z){
  	cout<<-1<<endl;
  }else{
  	cout<<1<<" "<<2<<" "<<a.size()<<endl;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  int t; cin>>t; while(t--) solve();


}