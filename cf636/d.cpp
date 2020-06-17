#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define vp vector<pii>
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

void show(vp a){
	  int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  int n,k;
  cin>>n>>k; vi a(n);
  for(int i=0;i<n; i++)cin>>a[i];

  	vp zero;
	vp one;
 	vp two;

  for(int i = 0; i < n/2; i++){
  	zero.push_back(pii(a[i]+a[n-i-1], a[i]+a[n-i-1]));
  	int c = min(a[i], a[n-i-1]);
  	int d = max(a[i], a[n-i-1]);
  	one.push_back(pii(c+1, d+k));
  	two.push_back(pii(2, 2*k));
  }
  show(zero);
  show(one);
  show(two);
  int ans = 1e9;


  //will search for the answer
  for(int i = 0; i < n; i++){

  }

}