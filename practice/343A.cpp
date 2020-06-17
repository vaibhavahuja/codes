#include <bits/stdc++.h>
using namespace std;
#define vi vector<unsigned long long int>
#define vs vector<string>
#define mii map<unsigned long long int, unsigned long long int>

void show(auto a){
  unsigned long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}



int main(){
  ios_base::sync_with_stdio(false);

  unsigned long long int a, b;
  cin>>a>>b;
  unsigned long long int ans = 0;

  while(a>0 && b > 0){
  	ans += (a/b);
  	a %= b;
  	unsigned long long int c = a;
  	a = b;
  	b = c;
  }

  cout<<ans<<endl;
}