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
  int n;
  cin>>n;
  vi a(n+1, 0); for(int i = 1; i <= n; i++) cin>>a[i];


  vi diff; for(int i = 2; i <= n; i++) diff.push_back(a[i] - a[i-1]);
  show(diff);

  vi dp(n, 1);
  for(int i = 0; i < n; i++){
  	for(int j = 0; j < )
  }


 

}