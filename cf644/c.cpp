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
  	int cnteven = 0, cntodd = 0;

	  int n;
	  cin>>n;
	  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];

	  for(int i = 0; i < n; i++){
	  	if(a[i]%2 == 0){
	  		cnteven++;
	  	}else cntodd++;
	  }
	  //n is even (even + even; odd + odd)
	  int x = 0;
	  if(cnteven%2 == 0 && cntodd%2 == 0){
	  	// cout<<"YES"<<endl;
	  	x = 1;
	  }else{
	  	sort(a.begin(), a.end());

	  	for(int i = 1; i < a.size(); i++){
	  		if(a[i] - a[i-1] == 1){
	  			x = 1;
	  			break;
	  		}
	  	}
	  }
	  if(x == 1) cout<<"YES"<<endl;
	  else cout<<"NO"<<endl;
  }

}