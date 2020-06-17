#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int

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
  int t;
  cin>>t;
  while(t--){
	  int n;
	  cin>>n;
	  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
	  sort(a.begin(), a.end());

	  int inside = 1, ans = 0, buffer = -1;
	  for(int i = 0; i < a.size(); i++){
	  	if(a[i] <= inside) ans = inside;
  		inside++;
	  }
	  cout<<ans+1<<endl;
  }
}