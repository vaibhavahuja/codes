#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int
#define ld long double


void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

int brute(int a, int b){
	int ans = 1e6;
	int k;
	for(int i = 0; i <= 1000; i++){
		// if(__gcd(a+i, b+i) > 1){
		if(ans > (a+i)*(b+i)/__gcd(a+i, b+i)){
			ans = (a+i)*(b+i)/__gcd(a+i, b+i);
			k = i;
		}
		// }
	}
	return k;
	// cout<<k<<endl;
}

int normal(int c, int d){
  if(c==d){
  	cout<<0<<endl;
  	return 0;
  }
  if(min(c, d) == 1) return 0;
  if(c%d == 0 || d%c == 0) return 0;
  ld a = min(c, d);
  ld b = max(c, d);
 
  ld k = ceil(a/(b-a));
  ld k2 = ceil((b-a)/a);
  ld ans2 = a*k - (b-a);
  ld ans = (b-a)*k - a;
 
  if(ans <= 0) return ans2;
  else if(ans2 <= 0) return ans;
  else return min(ans, ans2);
}

int main(){
  ios_base::sync_with_stdio(false);

  int c, d;
  // cin>>c>>d;
  // cout<<normal(c, d)<<endl;
  for(int i = 1; i < 200; i++){
  	for(int j = 1; j < 200; j++){
  		if(normal(i, j) != brute(i, j)){
  			cout<<i<<" "<<j<<endl;
  			cout<<normal(i, j)<<endl;
  			cout<<brute(i, j)<<endl;
  			c = 1;
  			break;
  			// cout<<endl;
  		}
  	}
  	if(c == 1) break;
  }
  
}