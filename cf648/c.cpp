#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>


int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  vi a(n), b(n);
  for(int i = 0; i < n; i++) cin>>a[i];
  for(int i = 0; i < n; i++) cin>>b[i];

  mii myTable, myIndex;
  for(int i = 0; i < n; i++){
  	myIndex[a[i]] = i;
  }

  for(int i = 0; i < n; i++){
  	//,making my b[i] as a[i];
  	int ib = myIndex[b[i]];
  	int ia = myIndex[a[i]];

  	if(ib <= ia){
  		myTable[ia-ib]++;
  	}else{
  		myTable[n-(ib-ia)]++;
  	}
  }
  // show(a);
  // show(b);
  int maxi = -1;
  for(auto i = myTable.begin(); i != myTable.end(); i++){
  	maxi = max(maxi, i->second);
  	// cout<<i->first<<" "<<i->second<<endl;
  }

  cout<<maxi<<endl;



}