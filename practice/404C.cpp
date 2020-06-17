#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define ld long double
#define mii map<int, int>
#define ull long long

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

  ull n, m;
  cin>>n>>m;
  ull y = n+m+1;
  
  ld p = (-1 + sqrt(1 + 8*y))/2;
  ull ans = ceil(p);
  if(ans == p) ans++;
  cout<<ans<<endl;
}