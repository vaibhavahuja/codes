#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}
const int N = 2e5+5;
int n, k;
ll a[N];

bool solve(int x, int s){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(!s){
			cnt++;
			s^=1;
		}else{
			if(a[i] <= x){
				cnt++;
				s^=1;
			}
		}
	}
	return (cnt >= k); 
}


int main(){
  ios_base::sync_with_stdio(false);

  cin>>n>>k;
  for(int i = 0; i < n; i++) cin>>a[i];

  ll l = 1, r = 1e9;
  ll ans = 0;
  while(l<r){
  	ll mid = l + (r-l)/2;
  	if(solve(mid, 0) || solve(mid, 1)){
  		ans = mid;
  		r = mid;
  	}else l = mid+1;
  }

  cout<<ans<<endl;
}