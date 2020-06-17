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

  int n, m;
  cin>>n>>m;
  // cin>>m;
  vi a;
  int c;
  if(m%2 == 0){ 
  	c = m/2;
    while(c>0){
    	a.push_back(c);
    	a.push_back(m-c+1);
    	// cout<<c<<" ";
    	// cout<<m-c+1<<" ";
    	c--;
    }
   }
   if(m%2 != 0){
     c = m/2+1;
     while(c>0){
     	a.push_back(c);
     	if(c == m/2+1){
     		c--; 
     		continue;
     	}
    	a.push_back(m-c+1);
     	c--;
     }
   }

   //loop a until n >= 0;
   c = 0;
   while(1){
	  for(int i = 0; i < a.size(); i++){
	  	cout<<a[i]<<" ";
	  	c++;
	  	if(c == n) return 0;
	  }     
   }



}