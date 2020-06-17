#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>
#define pi 3.1415
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
  double ans = 2*pi*n;
  cout<<setprecision(15);
  cout<<fixed;
  cout<<ans<<endl;
  

}