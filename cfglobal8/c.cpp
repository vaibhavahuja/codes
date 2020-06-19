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

  ll k;
  cin>>k;
  ll j;
  cout<<1+3*(k+1)<<endl;
  cout<<0<<" "<<0<<endl;
  for(j = 0; j < k; j++){
  	cout<<j+1<<" "<<j+1<<endl;
  	cout<<j<<" "<<j+1<<endl;
  	cout<<j+1<<" "<<j<<endl;
  }
  // cout<<"value of j is "<<j<<endl;
  cout<<j+1<<" "<<j+1<<endl;
  cout<<j<<" "<<j+1<<endl;
  cout<<j+1<<" "<<j<<endl;


  
  

}