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
  	  int n, a, b;
	  cin>>n>>a>>b;
	  string s = "";
	  int k = 0;
	  while(s.length() != n){
	  	s += 'a' + k;
	  	k++;
	  	if(k >= b) k = 0;
	  }

	  cout<<s<<endl;
	 

  }
  

}