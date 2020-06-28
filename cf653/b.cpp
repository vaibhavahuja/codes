#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

ll answer(ll n){
	ll ans = 0;
	while(n > 1){
		if(n%6==0){
			n/=6;
			ans++;
		}else if(n%3 == 0){
			n/=3;
			ans+=2;
		}else{
			if(n == 1) break;
			else{
				ans = -1;
				break;
			}
		}
	}
	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
  	ll n;
  	cin>>n;
  	cout<<answer(n)<<endl;
  }

}