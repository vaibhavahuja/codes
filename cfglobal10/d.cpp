#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(ll i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  ll t; cin>>t;
  while(t--){

	  ll n; cin>>n; string s; cin>>s;
	  string p = ""; p += s[n-1];
	  p += s;
	  p += s[0];
	  mii attacking;
	  map<ll, vi> attackedBy;
	  for(ll i = 1; i <= n; i++){
	  	ll ab = 0;
	  	if(p[i-1] == 'R') attackedBy[i].push_back((i == 1)?(n):(i-1));
	  	if(p[i+1] == 'L') attackedBy[i].push_back((i==n)?(1):(i+1));
	  	
	  	if(p[i] == 'L') attacking[i] = (i == 1)?(n):(i-1);
	  	else attacking[i] = (i==n)?(1):(i+1);
	  }

	  // cout<<"Below is attacked by Sheet"<<endl;
	  // for(auto i = attackedBy.begin(); i != attackedBy.end(); i++){
	  // 	cout<<i->first<<" -> "; 
	  // 	show(i->second);
	  // }

	  // cout<<endl;
	  // cout<<"Below is attacking sheet"<<endl;
	  // for(auto i = attacking.begin(); i != attacking.end(); i++){
	  // 	cout<<i->first<<" "<<i->second<<endl;
	  // }

	  //checking 
	  ll ans = 0;
	  for(ll i = 1; i <= n; i++){
	  	if(attackedBy[i].size() == 1){
	  		if(attacking[i] == attackedBy[i][0]){
	  			continue;
	  		}else{
	  			ans++;
	  			ll prevAttacking = attacking[i];
	  			vi c = attackedBy[prevAttacking];
	  			if(c.size()==1){attackedBy[prevAttacking].clear();}
	  			else if(c.size()==2){
	  				ll temp;
	  				if(c[0] == i) temp = c[1];
	  				else temp = c[2];
	  				attackedBy[prevAttacking].clear();
	  				attackedBy[prevAttacking].push_back(temp);
	  			}

	  			attacking[i] = attackedBy[i][0];
	  			attackedBy[attacking[i]].push_back(i);
	  		}
	  	}else{
	  		continue;
	  	}
	  }
	  cout<<ans<<endl;
	  //   cout<<"Below is attacked by Sheet"<<endl;
	  // for(auto i = attackedBy.begin(); i != attackedBy.end(); i++){
	  // 	cout<<i->first<<" -> "; 
	  // 	show(i->second);
	  // }

	  // cout<<endl;
	  // cout<<"Below is attacking sheet"<<endl;
	  // for(auto i = attacking.begin(); i != attacking.end(); i++){
	  // 	cout<<i->first<<" "<<i->second<<endl;
	  // }
  }
}