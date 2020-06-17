#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = a.size()-1;
  while(i >=0){
    cout<<a[i]<<" ";
    i--;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    int i = 0;
    int j = a.size()-1;
    vi b;
    while(i < j){
      b.push_back(a[i]);
      b.push_back(a[j]);
      i++;
      j--;
    }
    if(i == j) b.push_back(a[i]);
    show(b); 
  }
  
}