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
  	long long int n, a, b, c, d;
	  cin>>n>>a>>b>>c>>d;

	  long long int mini = (a-b)*n;
	  long long int maxi = (a+b)*n;
	  string ans = "NO";
	  for(long long int j = c-d; j <= c+d; j++){
	  	if(j >= mini && j <= maxi) {ans = "YES"; break;}
	  }
	  cout<<ans<<endl;



  }
  
}