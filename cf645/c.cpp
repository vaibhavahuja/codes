#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  ll t;
  cin>>t;
  while(t--){
	  ll a, b, c, d;
	  cin>>a>>b>>c>>d;
	  ll e = c-a;
	  ll f = d-b;
	  ll m = e*f;
	  ll pe = 0;
	  cout<<max(m, pe) + 1<<endl;


  }

}