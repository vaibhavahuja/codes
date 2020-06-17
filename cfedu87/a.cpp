#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double


int main(){
  ios_base::sync_with_stdio(false);
  long long int t;
  cin>>t;
  while(t--){

	  long double a, b, c, d;
	  cin>>a>>b>>c>>d;	

	  long double totalSlept = 0;
	  long double timeWaiting = 0;
	  long double ans = 0;

	  totalSlept += b;
	  if(totalSlept >= a){
	  	ans = totalSlept;
	  }else{
	  	if(c <= d) ans = -1;
	  	else{
	  		ans = (c)*ceil((a-b)/(c-d)) + b;
	  	}
	  }
  	long long int ans2 = ans;
  	cout<<ans2<<endl;

  }





}