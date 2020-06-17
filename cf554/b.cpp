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

string toBin(int a){
	string s = "";
	while(a > 0){
		s += a%2 + '0';
		a/=2;
	}
	return s;
}

bool check(int t){
	if(t==0) return true;
	string a = toBin(t);
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '0') return false;
	}
	return true;
}
int pw = 0;
void solve(int x){
  vi a;
  while(!check(x)){
  	string s = toBin(x);
  	// cout<<s<<" ";
  	int q = pow(2, s.length()) - 1;
  	a.push_back(s.length());

  	x^=q;
  	if(check(x)) {pw = 1; break;}
  	x++;
  	  	// cout<<x<<endl;

  }
  cout<<a.size()*2 - pw<<endl;
  if(a.size()>0)show(a);

}

int main(){
  ios_base::sync_with_stdio(false);
  int x;
  cin>>x;
  solve(x);



}