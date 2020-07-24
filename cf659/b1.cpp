#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vector<vi> a;
bool visited[205][205];
int n, l, k;
void dfs(int i, int j){
	visited[i][j] = true;
	int len = 2*k;
	if(!visited[(i+1)%len][j+1] && (j+1) <= n && a[(i+1)%len][j+1] <= l){
		dfs((i+1)%len, j+1);
	}
	if(!visited[(i+1)%len][j] && (j) <= n && a[(i+1)%len][j] <= l){
		dfs((i+1)%len, j);
	}
}

void solve(){
	  cin>>n>>k>>l;

	  vi d(n); for(int i = 0; i < n; i++) cin>>d[i];
	  vi p(2*k); for(int i = 0; i < 2*k; i++) p[i] = (i>=k)?-1:1;
	  a.clear();
	  a.push_back(d);
	  for(int t = 0; t < 2*k-1; t++){
	  	for(int j = 0; j < n; j++){
	  		d[j] += p[t];
	  	}
	  	a.push_back(d);
	  }
	  int f = -1;
	  for(int i = 0; i < n; i++){
	  	int cnt = 0;
	  	for(int j = 0; j < a.size(); j++){
	  		if(a[j][i] <= l) cnt++;
	  	}
	  	if(cnt == 0){
	  		cout<<"NO"<<endl;
	  		return;
	  	}
	  }

	  for(int i = 0; i < 2*k; i++){
	  	for(int j = 0; j < 205; j++){
		  	for(int k = 0; k < 205; k++){
		  		visited[j][k] = false;
		  	}
		  }
		 // cout<<a.size()<<endl;
	  	if(a[i][0] <= l){
	  		dfs(i, 0);
	  	}

	  	for(int j = 0; j < 2*k; j++){
	  		if(visited[j][n-1]){
	  			cout<<"YES"<<endl;
	  			return;
	  		}
	  	}
	  }
	  cout<<"NO"<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  int wq;
  cin>>wq;
  while(wq--){
  	solve();
  }

	  



}