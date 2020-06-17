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


vi split(string s){
	vi a;
	int q = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '*' && q != 0){
			a.push_back(q);
			q = 0;
		}else if(s[i] == '.'){
			q++;
		}
	}
	if(q != 0) a.push_back(q);
	// show(a);
	return a;
}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
	  vector<vi> a;
	  int n, m, x, y;

	  cin>>n>>m>>x>>y;
	  
	  for(int i = 0; i < n; i++){
	  	string s;
	  	cin>>s;
	  	a.push_back(split(s));
	  }
	  int ans = 0;
	  for(int i = 0; i < a.size(); i++){
	  	for(int j = 0; j < a[i].size(); j++){
	  		if(2*x <= y){
	  			ans += a[i][j]*x;
	  		}else{
	  			ans += (a[i][j]/2)*y;
	  			ans += (a[i][j]%2)*x;
	  		}
	  	}
	  }

	  cout<<ans<<endl;
  	
  }
}