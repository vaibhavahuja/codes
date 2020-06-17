#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i].first<<" ";}cout<<endl;}
void show(vi a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


void mex(vi a){
	for(int i = 0; i < a.size(); i++){
		mii table;
		int w = 0;
		for(int j = 0; j <= i; j++){
			table[a[j]]++;
		}

		for(int j = 0; j < i+2; j++){
			if(table.find(j) == table.end()){
				cout<<j<<" ";
				break;
			}
		}
		
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  int n; cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
  // mex(a);
  //separate them
  vp b;
  b.push_back(pii(a[0], 0));
  for(int i= 0; i < n; i++){
  	if(b[b.size() - 1].first != a[i]) b.push_back(pii(a[i], i));
  }
  vi answer(n, -1);
  show(a);

  vi ans(n, -1);
  ans[0] = b[b.size()-1].first + 1;
  for(int i = 1; i < b.size(); i++){
  	ans[b[i].second] = b[i-1].first;
  }

  for(int i = 1; i < b.size(); i++){
  	ans[b[i].second - 1] = b[i].first - 1;
  	if(a[b[i].second - 1] == b[i].first - 1){
  		ans[b[i].second-1] = ans[b[i-1].second];
  	}
  }

  show(ans);



}