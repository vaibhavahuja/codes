#include <bits/stdc++.h>
using namespace std;
#define vi vector<float>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>

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
	  mii freq;
	  vector<bool> b(n+1, false);
	  vi a(n); for(int i =0; i < n; i++) cin>>a[i], freq[a[i]] += 1;;
	  // vi b = a;
	  vi c = a;

	  // for(int i = 1; i < n; i++) b[i] += b[i-1];
	  // sort(a.begin(), a.end());

	  int q = 0;
	  for(int l = 0; l < n; l++){
	  	int sum = a[l];
	  	for(int r = l+1; r < n; r++){
	  		sum += a[r];
	  		if(sum <= n){
	  			b[sum] = true;
	  		}
	  	}
	  }
	  	
	  for(int i = 0; i < n; i++){
	  	if(b[a[i]]) q++;
	  }
	  cout<<q<<endl;
	}
}