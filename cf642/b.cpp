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
	  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
	  vi b(n); for(int i = 0; i < n; i++) cin>>b[i];

	  sort(a.begin(), a.end());
	  sort(b.begin(), b.end());
	  int j = b.size() - 1;
	  int i = 0;
	  while(k--){
	  	if(a[i] < b[j]){
	  		a[i] = b[j];
	  	}else break;
	  	j--;
	  	i++;
	  }
	  // show(a);

	  int ans = 0;
	  for(int i = 0; i < a.size(); i++) ans+=a[i];
	  cout<<ans<<endl;

  }
	  


  

}
