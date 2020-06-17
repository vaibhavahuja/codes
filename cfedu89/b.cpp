#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
	  int n, x, m;
	  cin>>n>>x>>m;

	  vp a(m);
	  for(int i = 0; i < m; i++){
	  	cin>>a[i].first>>a[i].second;
	  }

	  pii ans;
	  int index = -1;
	  for(int i = 0; i < a.size(); i++){
	  	if(a[i].first <= x && a[i].second >= x){
	  		index = i;
	  		ans.first = a[i].first;
	  		ans.second = a[i].second;
	  		break;
	  	}
	  }
	  if(index == -1){
	  	cout<<1<<endl;
	  }else{
	  	for(int i = index+1; i < a.size(); i++){
	  		if(a[i].first > ans.second || a[i].second < ans.first) continue;
	  		else{
	  			ans.first = min(a[i].first, ans.first);
	  			ans.second = max(a[i].second, ans.second);
	  		}
	  	}
	  	cout<<ans.second - ans.first + 1<<endl;
	  }
  }


}