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
  int n;
  cin>>n;
  vi a, b;
  for(int i = 1; i <= n; i++){
  	a.push_back(i);
  }
  for(int i = n; i >= 1; i--){
  	b.push_back(i);
  }

  int q = 0;
  while(q<a.size()/2){
  	cout<<a[q]<<" "<<b[q]<<" ";
  	q++;
  }
  if(a.size()%2!=0) cout<<n/2+1;

  cout<<endl;
  

}