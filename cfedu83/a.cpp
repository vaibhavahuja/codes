#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		if(n%m == 0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

  

}














