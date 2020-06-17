#include <iostream>
using namespace std;
// #define vi vector<int>
// #define pii pair<int, int>
// #define vp vector<pii>
// #define vs vector<string>
// #define mii map<int, int>
#define ll unsigned long long int


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){

	  ll ce, de;
	  cin>>ce>>de;

	  ll a = min(ce, de);
	  ll b = max(ce, de);

	  if(a == b){
	  	cout<<0<<endl;
	  }else{
	  	ll ans = b/a;
	  	if(a*ans != b){
	  		cout<<-1<<endl;
	  		// break;
	  	}else{

		  	ll ans2 = 0;
		  	while(ans%8==0){
		  		ans/=8;
		  		ans2++;
		  	}
		  	while(ans%4==0){
		  		ans/=4;
		  		ans2++;
		  	}
		  	while(ans%2==0){
		  		ans/=2;
		  		ans2++;
		  	}
		  	// cout<<ans<<" "<<ans2<<endl;
	 	  	if(ans2 == 0 || ans != 1) cout<<-1<<endl;
		  	else cout<<ans2<<endl;
		  }
	  	}
  }

}