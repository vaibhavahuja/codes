#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
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

  int a, b, c;
  cin>>a>>b>>c;

  int ans = 0;
  ans = max(ans, a/3 + b/3 + c/3);
  
  int q = 0;
  if( a >= 1 && b >= 1 && c >= 1){
  	q += 1;
  	a -= 1;
  	b -= 1;
  	c -= 1;
  	q += (a/3 + b/3 + c/3);
  	ans = max(ans, q);
  	a+=1;
  	b+=1;
  	c += 1;
  }
  q = 0;
  if( a >= 2 && b >= 2 && c >= 2){
  	q += 2;
  	a -= 2;
  	b -= 2;
  	c -= 2;
  	q += (a/3 + b/3 + c/3);
  	ans = max(ans, q);

  }
  cout<<ans<<endl;

}