#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}
string toBin(ll a){
	string s = "";
	while(a > 0){
		s += a%2 + '0';	
		a/=2;
	}
	reverse(s.begin(), s.end());
	return s;
}

ll ans(string a){
	reverse(a.begin(), a.end());
	ll an = 0;
	int i = 0;
	while(i < a.size()){
		an+=(a[i] - '0')*pow(2, i);
		i++;
	}
	return an;

}


int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
  	ll a;
  	cin>>a;
  	// cout<<toBin(a)<<endl;
  	string s1 = "1";
  	string s2 = "0";
  	int i = 1;
  	string p = toBin(a);
  	while(i < p.size()){
  		if(p[i] == '1'){
  			s1 += '0';
  			s2 += '1';
  		}else{
  			s1 += '1';
  			s2 += '1';
  		}
  		i++;
  	}

  	cout<<ans(s2)<<" "<<ans(s1)<<endl;
  }

}