#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}
ll a;
bool check(){
  vi k;
  ll b = a;
  while(b > 0){
  	k.push_back(b%10);
  	b/=10;
  }
  for(int i = 0; i < k.size(); i++){
  	if(k[i] != 0){
  		if(a%k[i] != 0) return false;
  	}
  }
  return true;

}
int main(){
  ios_base::sync_with_stdio(false);

  int t; cin>>t;
  while(t--){
  	  cin>>a;
	  while(!check()){
	  	a++;
	  }
	  cout<<a<<endl;
  }
}