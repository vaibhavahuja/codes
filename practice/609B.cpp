#include <bits/stdc++.h>
using namespace std;
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
#define ll long long

void show(auto a){
  ll i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  ll n,m;
  cin>>n>>m;
  vi a(n), b(n);
  for(ll i = 0; i < n; i++){
  	cin>>a[i];
  	// cin>>b[i];
  }

  for(ll i = 0; i < n; i++){
  	// cin>>a[i];
  	cin>>b[i];
  }
  vi answers;
  ll ans = 1e18+5;
  for(int i = 0; i < n; i++){
  	answers.push_back(abs((b[0] - a[i] + m))%m);
  }

  sort(b.begin(), b.end());
  // cout<<"b is "; show(b);
  for(int i = 0; i < answers.size(); i++){
  	vi d;
  	for(int j = 0; j < a.size(); j++){
  		d.push_back((a[j] + answers[i])%m);
  	}

  	sort(d.begin(), d.end());
  	// show(d);
  	// cout<<(b==d)<<endl;
  	if(b == d){
  		ans = min(ans, answers[i]);
  		// cout<<answers[i];
  		// return 0;
  	}
  }

  cout<<ans<<endl;
}