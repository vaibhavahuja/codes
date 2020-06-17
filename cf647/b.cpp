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
	  int n;
	  cin>>n;
	  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
	  int ans = -1;
	  sort(a.begin(), a.end());
	  for(int i = 1; i < 1025; i++){
	  	vi b = a;
	  	for(int j = 0; j < b.size(); j++){
	  		b[j] ^= i;
	  	}
	  	sort(b.begin(), b.end());
	  	if(a == b){
	  		ans = i;
	  		break;
	  	}
	  }
	  cout<<ans<<endl;
  	
  }

}