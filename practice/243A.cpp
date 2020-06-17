#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<endl;
    i++;
  }
  cout<<endl;
}

string convertBinary(int s){
	string p = "";
	while(s > 0){
		p += (s%2==0)?'0':'1';
		s/=2;
	}
	reverse(p.begin(), p.end());
	return p;
}

string makeLen(int needed, string s){
	int e = needed - s.length();
	string d = "";
	while(e--) d += '0';
	d += s;
	return d;
}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  vs a;
  while(t--){
  	int e;
  	cin>>e;
  	a.push_back(convertBinary(e));
  }
  int maxLen = -1;
  for(int i =0; i < a.size(); i++) maxLen = max(maxLen, (int)a[i].length());

  vs actual;	
  for(int j = 0; j < a.size(); j++) actual.push_back(makeLen(maxLen, a[j]));


  vi zeros(maxLen), ones(maxLen);

  for(int j = 0; j < maxLen; j++){
  	for(int i = 0; i < actual.size(); i++){
  		if(actual[i][j] == '0') zeros[j] = 1;
  		else if(actual[i][j] == '1') ones[j] = 1;
  	}	
  }
  show(actual);

  show(zeros);
  show(ones);
  

  int ans = 0;
  int ew = 0;
  for(int i = maxLen - 1; i>=0; i--){
  	ans += pow(2, ew)*(zeros[i]&ones[i]);
  	ew++;
  }
  cout<<ans<<endl;
}