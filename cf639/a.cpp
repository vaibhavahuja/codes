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
  	  int n, m;
  	  cin>>n>>m;
	  if(n == 1 || m == 1){
	  	cout<<"YES"<<endl;
	  }else if(n > 2 || m > 2){
	  	cout<<"NO"<<endl;
	  }else cout<<"YES"<<endl;
  }
}