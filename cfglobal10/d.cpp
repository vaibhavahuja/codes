#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


void solve(){
	int n; cin>>n; string s; cin>>s;
	int cnt = 0, ans = 0;
	while(s.size() && s[0] == s.back()){
		cnt++;
		s.pop_back();
	}
	if(s.empty()){
		if(cnt<=2) {
			cout<<0<<endl;
			return;
		}
		if(cnt == 3) {
			cout<<1<<endl;
			return;
		}
		cout<<(cnt+2)/3<<endl;
		return;
	}

	s.push_back('x');

	for(int i = 0; i < s.size()-1; i++){
		cnt++;
		if(s[i] != s[i+1]){
			ans += cnt/3;
			cnt = 0;
		}
	}
	cout<<ans<<endl;


}

int main(){
  ios_base::sync_with_stdio(false);

  int t; cin>>t; 
  while(t--) {solve();}


}