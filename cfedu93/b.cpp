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
	  s += '0';
	  vi a; int i = 0, p = 0;
	  while(i < s.size()){
	  	if(s[i] == '1') while(s[i] == '1') i++, p++;
	  	else{
	  		if(p != 0) a.push_back(p), p = 0, i++;
	  		else i++;
	  	}
	  }
	  sort(a.begin(), a.end(), greater<int>());
	  // show(a);
	  int ans = 0;
	  for(int i = 0; i < a.size(); i+=2){
	  	ans += a[i];
	  }
	  cout<<ans<<endl;
  }

}