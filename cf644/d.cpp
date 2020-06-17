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
  int t;
  cin>>t;
  while(t--){
  	
	  ll n, k;
	  cin>>n>>k;
	  vi a;

	  for(int i = 1; i*i <= n; i++){
	  	if(n%i == 0){
	  		a.push_back(i);
	  		a.push_back(n/i);
	  	}
	  }
	  sort(a.begin(), a.end());
	  // show(a);
	  int m = upper_bound(a.begin(), a.end(), k) - a.begin();
	  // cout<<m<<endl;
	  cout<<n/a[m-1]<<endl;
  }


}