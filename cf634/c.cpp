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
  	  mii table;
	  int n;
	  cin>>n;
	  vi a(n);
	  for(int i = 0; i < n; i++) cin>>a[i];

	  for(int i = 0; i < n; i++){
	  	table[a[i]] += 1;
	  }

	  int maxF = -1;
	  int maxStudent = -1;
	  for(auto i = table.begin(); i != table.end(); i++){
	  	if(i->second >= maxF){
	  		maxF = i->second;
	  		maxStudent = i->first;
	  	}
	  }

	  int cntOthers = table.size() - 1;
	  int ans = 0;


	  if(maxF <= cntOthers) ans = maxF;
	  else if(maxF > cntOthers) ans = cntOthers;

	  if(maxF - cntOthers >= 2) ans++;

	  cout<<ans<<endl;
	  

  }
  


  

}