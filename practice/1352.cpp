#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<"";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  int a, b, c;
  cin>>a>>b>>c;
  string s = "";
  for(int i = 0; i <= a; i++){
  	s += '0';
  }
  while(b > 2){
  	s += "10";
  	b--;
  }

  while(c > 0){
  	s += '1';
  	c--;
  }
  show(s);

  
}