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
  	  int a, b;
	  cin>>a>>b;

	  char arr[101][101];

	  // cout<<"W/";
	  for(int i = 0; i < a; i++){
	  	for(int j = 0; j < b; j++){
	  		arr[i][j] = 'B';
	  	}
	  }

	  arr[0][0] = 'W';
	  
	  for(int i = 0; i < a; i++){
	  	for(int j = 0; j < b; j++){
	  		cout<<arr[i][j];
	  	}
	  	cout<<endl;
	  }


  }
  
}