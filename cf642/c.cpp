#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>


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
	  if(n == 1) cout<<0<<endl;
	  else{
	  	vi a;
	  	int p = 8;
	  	for(int i = 1; i < n; i+=2){
	  		a.push_back(p);
	  		p += 8;
	  	}
	  	ll ans = 0;
	  	for(int i = 1; i <= a.size(); i++){
	  		ans += i*a[i-1];
	  	}
	  	cout<<ans<<endl;

	  }

  }
	  

}