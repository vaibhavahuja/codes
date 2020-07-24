#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<endl;}}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){

	  int n; cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
	  //all strings of maxi char
	  int maxi = -1;
	  for(int i = 0; i < n; i++) maxi = max(maxi, a[i]);

	  vs ans;
	  string c = "";
	  if(maxi == 0){
	  	int ew = n+1;
	  	while(ans.size()<n+1){
	  		ans.push_back("c");
	  		if(ans.size() == n+1) break;
	  		ans.push_back("a");
	  	}
	  	show(ans);
	  	continue;
	  }

	  for(int i = 0; i < maxi; i++){
	  	c += 'a';
	  }
	  ans.push_back(c);

	  for(int i = 0; i < n; i++){
	  	int j = 0;
	  	string d = "";
	  	while(j < a[i]){
	  		d += ans[ans.size()-1][j];
	  		j++;
	  	}
	  	while(j < maxi){
	  		if(ans[ans.size()-1][j] == 'z') d += 'a';
	  		else d += ans[ans.size()-1][j] + 1;
	  		j++;
	  	}
	  	ans.push_back(d);
	  }
	  show(ans);
  }



}