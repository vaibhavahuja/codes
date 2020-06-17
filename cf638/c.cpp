#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
  int n, k;
  cin>>n>>k;
  string s;
  cin>>s;
  sort(s.begin(), s.end());
  if(s[0] != s[k-1]){
  	cout<<s[k-1]<<endl;
  }else{
  	if(k == 1) cout<<s<<endl;
  	else{
  		string a = "";
	  	string b = "";

	  	a += s[0];
	  	b += s[1];
	  	if(s[2] != s[n-1]){
	  		for(int i = 2; i < n; i++) b += s[i];
	  		cout<<b<<endl;
	  	}else{
	  		int left = n-k;
	  		// if(left%2 == 0){
	  		// cout<<left<<endl;
	  			int e = left/2;
	  			while(e--) b += s[2];
	  			if(left%2 != 0) b += s[2];
	  			cout<<b<<endl;
	  		// }
	  	}
  	}

  }
  
}
  }
