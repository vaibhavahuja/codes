#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}
 
int main(){
  	ios_base::sync_with_stdio(false);
  	ll t; cin>>t; 
  	while(t--){
 
	  	ll a; cin>>a;
	  	ll m = a; 
	  	mii table;
 
	  
		while(a%2==0){
			a/=2;
			table[2]++;
		}
		for(int i = 3; i <= sqrt(a); i+=2){
			while(a%i==0){
				a/=i;
				table[i]++;
			}
		}
		if(a > 2){
			table[a]++;
		}
		ll num = 0, maxi = 0;
		for(auto i : table){
			// cout<<i.first<<" "<<i.second<<endl;
			if(i.second > maxi){
				num = i.first;
				maxi = i.second;
			}
		}
		// cout<<num<<" "<<maxi<<endl;
		// ll we = 10000000000/(2)
		ll q = maxi - 1;
		cout<<q+1<<endl;
		if(q == 0){
			// cout<<1<<endl;
			cout<<m<<endl;
		}else{
			ll ew = 1;
			while(q--){
				cout<<num<<" ";
				m/=num;
			}
 
			// cout<<ew<<endl;
			// ll f = m/ew;
			cout<<m<<endl;
		}
  	}
 
}