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
	  int n; cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
	  vi b(n);
	  for(int i = 0; i < n;	i++){
	  	if(a[i] == i+1) b[i] = 1;
	  	else b[i] = 0;
	  }
	  int cnt = 0;
	  b.push_back(3);
	  for(int i = 0; i < b.size(); i++){
	  	if(b[i]==0){
	  		while(b[i] == 0) i++;
	  		cnt++;
	  		i--;
	  	}
	  }
	  if(cnt > 2){
	  	cout<<2<<endl;
	  }else cout<<cnt<<endl;
  }
  

}