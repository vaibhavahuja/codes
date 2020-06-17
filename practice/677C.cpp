//always read the problem properly

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int
#define M 1000000007

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

string toBin(int a){
	string s = "";
	while(a > 0){
		s += a%2 + '0';
		a/=2;
	}

	while(s.length() < 6) s +='0';

	reverse(s.begin(), s.end());
	return s;
}

int main(){
  ios_base::sync_with_stdio(false);
  string s;
  cin>>s;
  vs a;
  int m = 63;
  int q=0;
  ll ans = 1;
  for(int i = 0; i < s.length(); i++){
  	int p;
  	if(s[i] == '-') p = 62;
  	else if(s[i] == '_') p = 63;
  	else if((s[i] - '0' <= 9) && (s[i] - '0' >= 0)) p = (s[i]-'0');
  	else if((s[i] - 'A' <= 26) && (s[i] - 'A' >= 0)) p = (s[i]-'A'+10);
  	else if((s[i] - 'a' <= 26) && (s[i] - 'a' >= 0)) p = (s[i]-'a'+36);
  	// m &= p;
  	// ans += p*pow(2, q);
  	q++; 
  
  	// cout<<p<<" ";
  	a.push_back(toBin(p));
  }
  
  for(int i = 0; i < a.size(); i++){
  	for(int j = 0; j < 6; j++){
  		if(a[i][j] == '0'){ ans*=3; ans%=M;};
  	}
  }
  cout<<ans<<endl;

	  

}


