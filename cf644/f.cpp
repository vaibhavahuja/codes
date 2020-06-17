// Accepted

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
    cout<<a[i]<<endl;
    i++;
  }
}

//this function generates all 

vs genall(string s){
	vs ans;
	for(int i = 0; i < s.length(); i++){
		string p = s;
		for(int j = 0; j < 26; j++){
			p[i] = 'a' + j;
			ans.push_back(p);
		}
	}
	return ans;
}

int diff(string a, string b){
	int p = 0;
	for(int i = 0; i < a.size(); i++){
		if(a[i] != b[i]) p++;
	}
	return p;
}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
	  int a, b;
	  cin>>a>>b;
	  vs input;
	  while(a--){
	  	string s;
	  	cin>>s;
	  	input.push_back(s);
	  }

	  vs p = genall(input[0]);
	  string ans;
	  int ta = 0, tb = 0, br = 0;
	  for(int i = 0; i < p.size(); i++){
	  	for(int j = 1; j < input.size(); j++){
	  		if(diff(p[i], input[j]) > 1) tb++;
	  		else ta++;
	  	}
	  	if(tb == 0){
	  		br = 1;
	  		ans = p[i];
	  		break;
	  	}
	  	ta = 0, tb = 0;
	  }
	  if(br == 0) cout<<-1<<endl;
	  else{
	  	cout<<ans<<endl;
	  }
  }
}