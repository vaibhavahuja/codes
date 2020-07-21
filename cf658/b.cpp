#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  ll t;
  cin>>t;
  while(t--){

	  ll n; cin>>n; vi a(n); for(ll i = 0; i < n; i++) cin>>a[i];

	  //if combination of 1's and 2's
	  //who so every gets first number != 1 wins
	  ll flag = -1;
	  for(ll i = 0; i < n; i++){
	  	if(a[i] != 1){
	  		flag = i;
	  		break;
	  	}
	  }
	  if(flag == -1){
	  	if(n%2==0){
	  		cout<<"Second"<<endl;
	  	}else cout<<"First"<<endl;
	  }else{
	  	if(flag%2!=0){
	  		cout<<"Second"<<endl;
	  	}else cout<<"First"<<endl;
	  }
  }

}