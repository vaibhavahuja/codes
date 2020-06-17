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
  	  int l, r, d, u;
	  cin>>l>>r>>d>>u;
	  int x, y, x1, y1, x2, y2;
	  cin>>x>>y>>x1>>y1>>x2>>y2;

	  int pR = 0, pU = 0;

	  if(r >= l){
	  	if(abs(x2-x) >= abs(r-l)) pR = 1;
	  }else if(r < l){
	  	if(abs(x-x1) >= abs(l-r)) pR = 1;
	  }
	  if(x2 == x1 && x1 == x && (l > 0||r>0)) pR = 0;

	  if(u>=d){
	  	if(abs(y2-y) >= abs(u-d)) pU = 1;
	  }else if(u < d){
	  	if(abs(y - y1) >= abs(d - u)) pU = 1;
	  }
	  if(y2 == y1 && y1 == y && (u > 0|| d>0)) pU = 0;
	  


	  if(pU == 1 && pR == 1) cout<<"YES"<<endl;
	  else cout<<"NO"<<endl;

  }
  
}