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

  ll n;
  cin>>n;
  while(n!=1){
  	cout<<n<<" ";
  	if(n%2==0) n/=2;
  	else n = n*3+1;
  }
  cout<<1<<endl;

}