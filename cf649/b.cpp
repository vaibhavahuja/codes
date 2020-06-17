#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int next_unmarked(vi marked, int i){
	for(int j = i+1; j < marked.size(); j++){
		if(marked[j] == 0) return j;
	}
	return marked.size();
}

int main(){
  ios_base::sync_with_stdio(false);
  int t; cin>>t;
  while(t--){
	  int n; cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i];

	  if(n == 2){
	  	cout<<2<<endl;
	  	show(a);
	  	continue;
	  }
	  vi marked(n, 0);
	  int i = 0, j = 1, k = 2;
	  while(k < n && j < n && i < n){
		  if(abs(a[j] - a[i]) + abs(a[k] - a[j]) <= abs(a[k] - a[i])){
		  	marked[j] = 1;
		  	j++;
		  	k++;
		  }else{
		  	j++;
		  	k++;
		  	i = j-1;
		  }
	  }
	  int ans = 0;
	  for(int i = 0; i < marked.size(); i++){
	  	if(marked[i] == 0)ans++;
	  }
	  cout<<ans<<endl;
	  for(int i = 0; i < marked.size(); i++){
	  	if(marked[i] == 0) cout<<a[i]<<" ";
	  }
	  cout<<endl;
  }


}