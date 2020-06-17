#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
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


bool check2(vi a){
	for(int i = 1; i < a.size(); i++){
		if(a[i] - a[i-1] == 1) continue;
		else return false;
	}
	return true;

}

bool check(vector<vi> a){
	for(int i = 0; i < a.size(); i++){
		if(check2(a[i])) continue;
		else return false;
	}
	return true;

}
int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
  vector<vi> p;

  int n;
  cin>>n;
  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];

  for(int i = 1; i <= n; i++){
  	vi b;
  	b.push_back(a[i-1]);
  	while(a[i]>a[i-1] && i < n){
  		b.push_back(a[i]);
  		i++;
  	}
  	p.push_back(b);
  }

  // for(int i = 0; i < p.size(); i++){
  // 	cout<<check2(p[i])<<" ";
  // 	show(p[i]);
  // }
  if(check(p)) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
  

}