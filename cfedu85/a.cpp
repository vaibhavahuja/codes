#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<int, int>
#define vp vector<pi>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
  cout<<endl;
}


bool answer(vp a){
	if(a[0].second > a[0].first) return false;

	for(int i = 1; i < a.size(); i++){
		if(a[i].first == a[i-1].first && a[i].second != a[i-1].second) return false;
		if(a[i].first >= a[i-1].first && a[i].second >= a[i-1].second && a[i].second <= a[i].first && a[i].first - a[i-1].first >= a[i].second - a[i-1].second) continue;
		else return false;
	}
	return true;
}


int main(){
  ios_base::sync_with_stdio(false);

  // vp a;

  int t;
  cin>>t;
  while(t--){
	  int n;
	  cin>>n;
	  vp a(n);

	  for(int i = 0; i < n; i++){
	  	cin>>a[i].first>>a[i].second;
	  }

	  if(answer(a)) cout<<"YES"<<endl;
	  else cout<<"NO"<<endl;
  }
}