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
	  int n; cin>>n;
	  string s; cin>>s;
	  int p = n-1, cnt = 0;
	  while(s[p] == ')' && p >= 0){
	  	// cout<<s[p]<<endl;
	  	cnt++;
	  	p--;
	  }
	  int remaining = n-cnt;
	  // cout<<cnt<<" "<<n<<endl;
	  if(cnt > remaining){
	  	cout<<"Yes"<<endl;
	  }else{
	  	cout<<"No"<<endl;
	  }
  }
}