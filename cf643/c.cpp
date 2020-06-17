#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define pii pair<long long int, long long int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<long long int, long long int>
#define ll long long long long int
#define N 1000000 + 66
void show(auto a){
  long long int i = 0;
  while(i < 10){
  	if(a[i] != 0) cout<<i<<" "<<a[i]<<endl;
    // cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  vi v(N, 0);
  long long int a, b, c, d;
  cin>>a>>b>>c>>d;
  
  for(long long int i = a; i <= b; i++){
  	v[i+b] += 1;
  	v[i+c+1] -= 1;
  }
  for(long long int i = 1; i < N; i++){
  	v[i] += v[i-1];
  }
  // show(v);
  for(long long int i = 1; i < N; i++){
  	v[i] += v[i-1];
  }

  // show(v);
  long long int ans = 0;
  for(long long int z = c; z <= d; z++){
  	ans += v[N - 1] - v[z];
  }

  cout<<ans<<endl;


}