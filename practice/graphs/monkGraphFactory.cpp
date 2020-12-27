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
  int sum = 0;
  int n; cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i], sum += a[i];
  bool check = (sum == 2*(n-1));


  if(!check) cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
  

}