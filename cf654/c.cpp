#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  ll t;
  cin>>t;
  while(t--){

	ll v, c, t1, t2;
	cin>>v>>c>>t1>>t2;

	if(v + c < t1+t2){
		cout<<"NO"<<endl;
	}else{
		if(t2 > min(v, c)) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}

  }
}