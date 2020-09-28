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


  //will use binarySearch
  int t; cin>>t; 
  while(t--){
	  int sum; cin>>sum;
	  ll low = 0, high = 1e9+2;
	  ll answer = 1e9+2;
	  while(low <= high){
	  	ll n = (low + (high-low)/2);
	  	ll p = n/2;
	  	ll q = (n%2==0)?0:1;

	  	ll val = (p + 1)*(p+1 + q);
	  	// cout<<low<<" "<<high<<" "<<val<<endl;
	  	if(val >= sum){
	  		// cout<<n<<endl;
	  		answer = min(answer, n);
	  		high = n-1;
	  	}else{
	  		low = n+1;
	  	}
	  }
	  cout<<answer<<endl;  	
	  // cout<<endl;
  }

  

 }