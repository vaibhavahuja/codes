#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  int sum = 0;
  while(i < a.size()){
    // cout<<a[i]<<" ";
    sum += a[i];
    i++;
  }
  cout<<sum<<" ";
}


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
      wint n;
	  cin>>n;
	  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];

	  vi bob, alice;
	  bob.push_back(0);
	  alice.push_back(0);


	  int l = 0, r = a.size()-1;
	  int chance = 0;
	  while( l <= r){
	  	int bobLast = bob[bob.size() - 1];
	  	int aliceLast = alice[alice.size() - 1];
	  	if(chance == 0){
	  		int q = 0;
	  		while(q <= aliceLast){
	  			q += a[l];
	  			l++;
	  			if(l > r) break;
	  		}
	  		bob.push_back(q);
	  		chance = 1;
	  	}else if(chance == 1){
	  		int q = 0;
	  		while(q <= bobLast){
	  			q += a[r];
	  			r--;
	  			if(l > r) break;
	  		}
	  		alice.push_back(q);
	  		chance = 0;
	  	}
	  }

	  cout << bob.size() + alice.size() - 2<<" ";
	  show(bob);
	  show(alice);
	  cout<<endl;

  }
	  

}