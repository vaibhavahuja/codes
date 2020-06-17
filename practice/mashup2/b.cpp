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


int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
  	int n, k;
  	cin>>n>>k;
  	vi a(k, 0); for(int i = 0; i < k; i++) cin>>a[i];

  	mii table;
  	for(int i = 0; i < a.size(); i++){
  		table[a[i]] += 1;
  	}
  	int ans = 0;
  	for(int i = 1; i<=k; i++){
  		if(table.find(i) != table.end()) ans++;
  	}
  	cout<<k - ans<<endl;
  }

}