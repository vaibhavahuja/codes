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

	  int x1, y1, z1;
	  int x2, y2, z2;

	  cin>>x1>>y1>>z1;
	  cin>>x2>>y2>>z2;

	  //going to z1 first;
	  int ans = 0;
	  
	  while(z1 > 0){
	  	if(y2 >= z1){
	  		ans += z1*2;
	  		y2 -= z1;
	  		z1 = 0;
	  	}else{
	  		ans += y2*2;
	  		z1 -= y2;
	  		y2 = 0;
	  	}
	  	if(z1 == 0) break;

	  	if(z2 >= z1){
	  		ans += z1*0;
	  		z2 -= z1;
	  		z1 = 0;
	  	}else{
	  		ans += z2*0;
	  		z1 -= z2;
	  		z2 = 0;
	  	}
	  	if(z1 == 0) break;

	  	if(x2 >= z1){
	  		ans += z1*0;
	  		x2 -= z1;
	  		z1 = 0;
	  	}else{
	  		ans += x2*0;
	  		z1 -= x2;
	  		x2 = 0;
	  	}
	  	if(z1 == 0) break;
	  }
	  // cout<<x1<<" "<<y1<<" "<<z1<<endl;
	  // cout<<x2<<" "<<y2<<" "<<z2<<endl;

	  while(y1 > 0){
	  	if(y2 >= y1){
	  		ans += y1*0;
	  		y2 -= y1;
	  		y1 = 0;
	  	}else{
	  		ans += y2*0;
	  		y1 -= y2;
	  		y2 = 0;
	  	}
	  	if(y1 == 0) break;

	  	if(x2 >= y1){
	  		ans += y1*0;
	  		x2 -= y1;
	  		y1 = 0;
	  	}else{
	  		ans += x2*0;
	  		y1 -= x2;
	  		x2 = 0;
	  	}
	  	if(y1 == 0) break;

	  	if(z2 >= y1){
	  		ans += (y1)*(-2);
	  		z2 -= y1;
	  		y1 = 0;
	  	}else{
	  		ans += z2*(-2);
	  		y1 -= z2;
	  		z2 = 0;
	  	}
	  	if(y1 == 0) break;
	  }

	  cout<<ans<<endl;
  }


}