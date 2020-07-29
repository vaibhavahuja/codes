#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int mini(string s, int l, int r){
	int i = 0, c = 0;
	while(i < s.length()){
		if(c%2==0){
			if(s[i] - '0' == l) c++;
		}else{
			if(s[i] - '0' == r) c++;
		}
		i++;
	}
	if(l != r){
		if(c%2 != 0) c--;		
	}

	return s.length()-c;
}


int main(){
  ios_base::sync_with_stdio(false);
  int t; cin>>t;
  while(t--){
  	
	  int ans = 1e9+5;
	  string s; cin>>s;
	  for(int i = 0; i <= 9; i++){
	  	for(int j = 0; j <= 9; j++){
	  		if(ans > mini(s, i, j)){
	  			ans = mini(s, i, j);
	  			// cout<<ans<<endl;
	  			// cout<<i<<" "<<j<<endl;
	  		}
	  	}
	  }
	  cout<<ans<<endl;
  }

  

}