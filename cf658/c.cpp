#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){
	for(int i=0;i<a.size();i++){
		if(a.size()==0) break;
		cout<<a[i]<<" ";
	}
}

string conv(string s, int n){
	string p = "";
	for(int i = 0; i < n; i++){
		if(s[i] == '0') p+='1';
		else p+='0';
	}
	reverse(p.begin(), p.end());
	for(int i = n; i < s.size(); i++) p += s[i];

	return p;
}


int main(){
  ios_base::sync_with_stdio(false);
  int t; cin>>t;
  while(t--){

	  int n; cin>>n;
	  string a, b; cin>>a>>b;
	  //my idea is to transform first to all 0's and then make the required string

	  vi v;
	  for(int i = 0; i < n-1; i++){
	  	if(a[i+1] != a[i]) v.push_back(i+1);
	  }
	  if(a[n-1] == '1') v.push_back(n);
	  string p = a;
	  // show(v);
	  vi c;
	  if(b[b.size()-1] == '1') c.push_back(n);
	  for(int i = n-1; i>0; i--){
	  	if(b[i-1] != b[i]) c.push_back(i);
	  }
	  
	  cout<<c.size() + v.size()<<" ";
	  show(v);
	  show(c);
	  cout<<endl;
  }





}