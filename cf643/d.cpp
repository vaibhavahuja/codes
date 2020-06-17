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

  int n, s;
  cin>>n>>s;
  if(n == 1 && s == 1){
  	cout<<"NO"<<endl;
  	return 0;
  }
  if(n == 1){
  	cout<<"YES"<<endl;
  	cout<<s<<endl;
  	cout<<s/2<<endl;
  	return 0;
  }
  if(n > s/2){
  	cout<<"NO"<<endl;
  	return 0;
  }

  cout<<"YES"<<endl;
  int p = n-1;
  while(p--) cout<<1<<" ";
  cout<<s-n+1<<endl;
  cout<<s/2<<endl;



}