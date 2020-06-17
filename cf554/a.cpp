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
  int n, m;
  cin>>n>>m;
  int odd1=0, even1=0;
  int odd2=0, even2=0;

  while(n--){
  	int p;
  	cin>>p;
  	if(p%2 == 0) even1++;
  	else odd1++;
  }
  while(m--){
  	int p;
  	cin>>p;
  	if(p%2 == 0) even2++;
  	else odd2++;
  }

  cout<<min(odd1, even2) + min(odd2, even1)<<endl;
  

}