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
  int t; cin>>t;
  while(t--){
	  string s; cin>>s;
	  int p = 0, r = 0, ss = 0;
	  for(int i = 0; i < s.length(); i++){
	  	if(s[i] == 'R') p++;
	  	else if(s[i] == 'S') r++;
	  	else ss++;
	  }
	  if(p >= r && p >= ss){
	  	for(int i = 0; i < s.length(); i++){
	  		cout<<'P';
	  	}
	  }else if(r >=p && r>=ss){
	  	for(int i = 0; i < s.length(); i++){
	  		cout<<'R';
	  	}
	  }else{
	  	for(int i = 0; i < s.length(); i++){
	  		cout<<'S';
	  	}
	  }
	  cout<<endl;
  }

}