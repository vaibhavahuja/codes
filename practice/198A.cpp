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

  int n, t, k, b, j = 0;
  cin>>k>>b>>n>>t;
  long long l = 1;
  while(l<=t){
  	l*=k;
  	l+=b;
  	j++;
  }
  j--;
  if(n>j) cout<<n-j;else cout<<0<<endl;

}