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
  	int n, m; cin>>n>>m;
  	bool p = false;
  	for(int i = 0; i < n; i++){
  		int a, b; cin>>a>>b;
  		int c, d; cin>>c>>d;
  		if(b == c) p = true;
  		// cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
  	}
  	if((m%2==0) && p){
  		cout<<"YES"<<endl;
  	}else{
  		cout<<"NO"<<endl;
  	}
  	// cout<<endl;
  }

}