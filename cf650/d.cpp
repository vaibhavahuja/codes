#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<"";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
	  string s; cin>>s;
	  int n;
	  cin>>n;
	  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
	  sort(s.begin(), s.end());
	  reverse(s.begin(), s.end());

	  vi marked(s.length(), 0);
	  vector<char> ans(n, 'a'-1);

	  stack<int> lastSet;
	  lastSet.push(-1);
	  int x = 0;
	  while(x < s.length()){
		  char myChar = s[x];  	
	  	  int calc = 0;
	  	  vi bigger;
		  for(int i = 0; i < ans.size(); i++){
		  	if(ans[i] > myChar){
		  		bigger.push_back(i);
		  	} 	
		  }
		  
		  for(int k = 0; k < ans.size(); k++){
		  		int calc = 0;
		  		for(int j = 0; j < bigger.size(); j++){
		  			calc += abs(bigger[j]-k);
		  		}
		  		if(calc == a[k]){
		  			if(ans[k] == ('a'-1)) {lastSet.push(k); ans[k] = myChar;  x++; break;}
		  		}
		  		if(k == ans.size() - 1){
		  			if(lastSet.top() != -1){ 
		  				ans[lastSet.top()] = 'a'-1;
		  				lastSet.pop();
		  				
		  			}
		  			break;
		  		}
		   }
		   int p = 0;
		   for(int j = 0; j < ans.size(); j++){
		   	if(ans[j] != 'a'-1) p++;
		   }
		   if(p == ans.size()) break;
	    }
	    show(ans);
  }


}