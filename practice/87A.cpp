#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>

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

  int a, b;
  cin>>a>>b;
  int d = __gcd(a, b);
  a/=d;
  b/=d;
  // cout<<a<<" "<<b<<endl;
  if(abs(a - b) == 1) cout<<"Equal"<<endl;
  else if(a > b) cout<<"Masha"<<endl;
  else cout<<"Dasha"<<endl;

}