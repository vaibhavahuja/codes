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
	  int n;
	  cin>>n;
	  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
	  sort(a.begin(), a.end());
	  int mini = 1e9;
	  for(int i = 1; i < n; i++){
	  	mini = min(a[i] - a[i-1], mini);
	  }
	  if(mini == 1e9) cout<<a[1] - a[0]<<endl;
	  else cout<<mini<<endl;
  }

}