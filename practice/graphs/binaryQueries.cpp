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

  int n, q; cin>>n>>q;
  vi a(n); 
  for(int i = 0; i < n; i++) {cin>>a[i];}
  while(q--){
  	int p; cin>>p;
  	if(p == 0){
  		int l, r; cin>>l>>r;
  		l--; r--;
  		if(a[r] == 0){
  			cout<<"EVEN"<<endl;
  		}else cout<<"ODD"<<endl;
  	}else{
  		int m; cin>>m;
  		m--;
  		a[m] = 1 - a[m];

  	}
  }

}