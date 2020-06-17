#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
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
	  int ans = -1;
	  if(n%2==0) ans = n/2 - 1;
	  else ans = n/2;

	  cout<<ans<<endl;

  }
  

}