#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>

void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  long long int t;
  cin>>t;
  while(t--){
  	  long long int n, k;
	  cin>>n>>k;

	  long long int p = k-1;

	  n -= (p);
	  if(n < 0 || n%2 == 0) cout<<"NO"<<endl;
	  else cout<<"YES"<<endl;


  }
  

}