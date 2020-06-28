#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
// void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void show(stack<char> a){
	stack<char> p = a;
	while(!p.empty()){
		char t = p.top();
		cout<<t<<" ";
		p.pop();
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
	  stack<char> st;
	  int n;
	  string s;
	  cin>>n>>s;
	  for(int i = 0; i < n; i++){
	  	char p = s[i];
	  	if(st.empty()){
	  		st.push(p);
	  	}else if(st.top() == '(' && p == ')') st.pop();
	  	else st.push(p);
	  }
	  cout<<st.size()/2<<endl;
  }
}