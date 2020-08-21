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
  int t; cin>>t; 

  while(t--){
	  int n, k;
	  cin>>n>>k;
	  int ans;
	  if(n == k){
	  	ans = 0;
	  }if(n < k){
	  	ans = (k-n);
	  }else{
	  	int e = abs(k-n);
	  	if(e%2 == 0) ans = 0;
	  	else ans = 1;
	  }

	  cout<<ans<<endl;  	
  }

}