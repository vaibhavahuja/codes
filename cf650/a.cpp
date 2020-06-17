#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){

	  string s;
	  cin>>s;

	  int n = s.length();
	  if(n == 2) cout<<s<<endl;
	  else{
	  	cout<<s[0];
	  	for(int i = 1; i < n-1; i+=2){
	  		cout<<s[i];
	  	}
	  	cout<<s[n-1]<<endl;;
	  }
  	
  }

}