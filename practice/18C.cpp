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
  vi v;
  int sum = 0;
  while(n--){
  	int a;
  	cin>>a;
  	sum += a;
  	v.push_back(a);
  }	
  int ans = 0, qw = 0;
  for(int i = 0; i < v.size()-1; i++){
  	qw += v[i];
  	sum -= v[i];
  	// cout<<qw<<" "<<sum<<endl;
  	if(qw == sum) ans++;
  }
  // if(v.size() == 2 && v[0] == v[1]) ans++; 
  cout<<ans<<endl;
  

}