#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>
#define M 10000000000

void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

vi a;


void check(long long int r, long long int q){
	
	a.push_back(r);
	if(r<q){
		check(r*10+4, q);	
		check(r*10+7, q);
	}
	
}


int main(){
  ios_base::sync_with_stdio(false);

  long long int l, r;
  cin>>l>>r;
  check(0, M);
  
  sort(a.begin(), a.end());
  // show(a);
  
 // cout<<a[w]<<" "<<a[e]<<endl;

  long long int ans = 0;

  while(l<=r){
  	long long int next = a[(lower_bound(a.begin(), a.end(), l))-a.begin()];
  	ans += (min(r, next) - l+1)*next;
  	l = next+1;
  }

  cout<<ans<<endl;
  
}