#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>

void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  long long int n;
  cin>>n;
  vi a(n);
  long long int i;
  // long long int maxi = -1;
  for(i=0;i<n;i++)cin>>a[i];

  sort(a.begin(), a.end());
  if(a[a.size()-1] == 1) a[a.size()-1]++;
  else a[a.size() - 1] = 1;
  sort(a.begin(), a.end());
  show(a);


}