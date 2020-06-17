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
  int t;
  cin>>t;
  while(t--){

	  int n, k;
	  cin>>n>>k;
	  string s; cin>>s;
	  // vi a;
	  // for(int i = 0; i < n; i++){
	  // 	if(s[i]=='1') a.push_back(i+1);
	  // }

	  string ts = "1";
	  int numOne = 0;
	  for(int i = 0; i < s.length(); i++) if(s[i] == '1') numOne++;
	  ts += s;
	  int ans = 0, previousUno = -1e9;
	  for(int i = 1; i <= n; i++){
	  	// cout<<previousUno<<" "<<ts<<endl;
	  	if(ts[i] == '0' && i-previousUno >= k + 1){
	  		previousUno = i;
	  		ts[previousUno] = '1';
	  	}else if(ts[i] == '1'){
	  		if(i - previousUno < k + 1){
	  			ts[previousUno] = '0';
	  			previousUno = i;

	  		}else{
	  			previousUno = i;
	  		}
	  	}
	  }
	  ans -= numOne;
      for(int i = 1; i < ts.length(); i++) if(ts[i] == '1') ans++;
	  // cout<<ts<<endl;
	  cout<<ans<<endl; 	
	  // 
  }

}