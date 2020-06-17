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
	  int p = 2;
	  for(int i = 0; i < n; i++){
	  	p *= 2;
	  	if(n%(p-1) == 0){
	  		ans = n/(p-1);
	  		
	  		break;
	  	}
	  }
	  cout<<ans<<endl;  
	  

	}


  }
  
