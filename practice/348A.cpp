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

  vector<double> a;
  int n;
  cin>>n;
  double div = (n-1);
  double sum = 0;
  double maxi = 0;
  while(n--){
  	double p;
  	cin>>p;
  	sum += p;
  	a.push_back(p);
  	maxi = max(maxi, p);
  }
  
  double x = ceil(sum/div);
  // cout<<x<<endl;
  double ans = x;
  for(int i = 0; i < a.size(); i++){
  	if(a[i] >= x) ans = min(ans, a[i]);
  }
  if(ans > maxi) cout<<(int)ans<<endl;
  else cout<<(int)maxi<<endl;
  
  

  



}