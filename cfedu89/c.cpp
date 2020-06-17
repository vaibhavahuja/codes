#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
// void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i].first<<" "<<a[i].second<<" , ";}cout<<endl;}

void show(set<pii> a){
	for(auto x : a){
		cout<<x.first<<" "<<x.second<<" ";
		
	}
	cout<<endl;
}
void show(int a[][100], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){

  int n, m;
  cin>>n>>m;
  int a[n][100];
  for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>a[i][j];
		}
  }

  //distance n from 0, 0
  map<int, set<pii>> init, init2;

  for(int i = 0; i < n; i++){
  	for(int j = 0; j < m; j++){
  		int dist = abs(j) + abs(i);
  		init[dist].insert(pii(i, j));
  	}
  }


  int ans = 0;
  for(int dist = 0; dist < (n+m-1)/2; dist++){
  	// cout<<dist<<" ";show(init[dist]);
  	int ones = 0, zeros = 0;
  	for(auto i : init[dist]){
  		if(a[i.first][i.second] == 0) zeros++;
  		else ones++;
  	}
  	for(auto i : init[n+m-2-dist]){
  		if(a[i.first][i.second] == 0) zeros++;
  		else ones++;
  	}

  	ans += min(ones, zeros);
  	// cout<<ans<<endl;
	}
  cout<<ans<<endl;



  // show(a, n, m);
  }


}