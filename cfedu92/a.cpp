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

  ll t; cin>>t; 
  while(t--){
  	ll l, r; cin>>l>>r;
  	if(r < 2*l){
  		cout<<-1<<" "<<-1<<endl;
  	}else{
  		cout<<l<<" "<<2*l<<endl;
  	}
  }

}