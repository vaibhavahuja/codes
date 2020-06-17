#include <bits/stdc++.h>
using namespace std;

#define ll long long int



int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  	  string s;
	  cin>>s;
	  int lastOne = -1, lastTwo = -1, lastThree = -1;
	  int ans = 1e9+5;
	  for(int i = 0; i < s.length(); i++){
	  	if(s[i] == '1') lastOne = i;
	  	else if(s[i] == '2') lastTwo = i;
	  	else if(s[i] == '3') lastThree = i;

	  	if(lastOne != -1 && lastTwo != -1 && lastThree != -1){
	  		int maxi = max(max(lastOne, lastTwo), lastThree);
	  		int mini = min(min(lastOne, lastTwo), lastThree);
	  		ans = min(ans, maxi-mini+1);
	  	}
	  }
	  if(ans == 1e9+5) ans = 0;
	  
	  cout<<ans<<endl;

  }
  

}