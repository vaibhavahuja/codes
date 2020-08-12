#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  int t; cin>>t;
  while(t--){
  	
	  ll r, g, b, w; cin>>r>>g>>b>>w;

	  int cnt = 0;
	  if(r%2==0) cnt++;
	  if(g%2==0) cnt++;
	  if(b%2==0) cnt++;
	  if(w%2==0) cnt++;

	  if(cnt >= 3){
	  	cout<<"Yes"<<endl;
	  	continue;
	  }

	  cnt = 0;
	  if(r > 0 && g > 0 && b > 0) r--, g--, b--, w+=3;
	  if(r%2==0) cnt++;
	  if(g%2==0) cnt++;
	  if(b%2==0) cnt++;
	  if(w%2==0) cnt++;
	  if(cnt >= 3){
	  	cout<<"Yes"<<endl;
	  	continue;
	  }


	  cnt = 0;
	  if(r > 0 && g > 0 && b > 0) r--, g--, b--, w+=3;
	  if(r%2==0) cnt++;
	  if(g%2==0) cnt++;
	  if(b%2==0) cnt++;
	  if(w%2==0) cnt++;
	  if(cnt >= 3){
	  	cout<<"Yes"<<endl;
	  	continue;
	  }

	  cout<<"No"<<endl;
  }


}