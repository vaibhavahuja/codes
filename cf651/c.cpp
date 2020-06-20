#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(ll i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi primeFactors(int n){
	vi primeOdd;
  	while(n%2==0) n/=2;

  	for(int i  = 3; i <= sqrt(n); i += 2){
  		while(n%i==0){
	  		primeOdd.push_back(i);
	  		n/=i;
  		}
  	}
  	if(n > 2 && n%2 != 0) primeOdd.push_back(n);
  	return primeOdd;
  }


int main(){
  ios_base::sync_with_stdio(false);
  ll t;
  cin>>t;
  while(t--){

	  ll n;
	  cin>>n;

	  vi a = primeFactors(n);


	  if(n == 1){
	  	cout<<"FastestFinger"<<endl;
	  }else if(n == 2){
	  	cout<<"Ashishgup"<<endl;
	  }else if(n%2!=0){
	  	cout<<"Ashishgup"<<endl;
	  }else if(n%2 == 0){
	  	ll p = n/2;
	  	if(a.size()==0){
	  		cout<<"FastestFinger"<<endl;
	  	}else if(p%2 == 0){
	  		//that means after odd number left > 2 and even
	  		cout<<"Ashishgup"<<endl;
	  	}else{
	  		//only even divisor was 2
	  		if(a.size()==1) cout<<"FastestFinger"<<endl;
	  		else cout<<"Ashishgup"<<endl;

	  	}

	  }
  }



}