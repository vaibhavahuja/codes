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
  	  int n, x;
	  cin>>n>>x;
	  mii table;
	  while(n--){
	  	int q;
	  	cin>>q;
	  	table[q] += 1;
	  }
	  int j = 0;
	  for(j = 1; j<=1000; j++){

	  	if(table.find(j) == table.end()){
	  		x--;
         	if(x == 0){ 
         		while(table.find(j+1) != table.end()) j++;
         		break;
         	}
	  	}
	  }
	  // if(table.find(j+1) != table.end()) cout<<j+1<<endl;
	  cout<<j<<endl;


  }  

}