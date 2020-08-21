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
	  int mini = 1e9+5;
	  int n; cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i], mini = min(mini, a[i]);

	  vi b = a;
	  sort(b.begin(), b.end());
	  bool flag = false;
	  for(int i = 0; i < n; i++){
	  	if(b[i] == a[i]) continue;
	  	if(__gcd(a[i], mini) == mini) continue;
	  	cout<<"NO"<<endl;
	  	flag = true;
	  	break;
	  }

	  if(!flag){
	  	cout<<"YES"<<endl;
	  }
  }

}