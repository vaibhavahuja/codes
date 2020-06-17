#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>

void show(auto a){
  long long int i = 0;
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
  	long long int x, y;
	  long long int a, b;
	  cin>>x>>y>>a>>b;
	  long long int ans = 0;
	  
	  if(2*a <= b){
	  	ans += 2*a*min(x, y);
	  }else ans += b*min(x, y);

	  ans += a*(max(x, y) - min(x, y));
	  cout<<ans<<endl;


  }
  

}