#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
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
  	  unsigned long long int n, k;
	  cin>>n>>k;
	  int firstDiv = -1;
	  unsigned long long int ans = 0;
	  if(n%2 == 0){
	  	ans = n + k*2;
	  }else{
	  	for(int i = 2; i*i<=n; i++){
	  		if(n%i == 0) {firstDiv = i; break;}
	  	}
	  	if(firstDiv == -1) firstDiv = n;

	  	ans = n + firstDiv;
	  	ans += (k-1)*2;
	  }
	  cout<<ans<<endl;

  }
  

}