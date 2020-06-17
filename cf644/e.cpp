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
	  vs a(n); for(int i = 0; i < n; i++) cin>>a[i];
	  bool check = true;
	  for(int i = 0; i < n; i++){
	  	for(int j = 0; j < n; j++){
	  		if(a[i][j] == '1'){
	  			if(i == n-1 || j == n-1){
	  				continue;
	  			}else{
	  				if(a[i+1][j] == '0' && a[i][j+1] == '0'){
	  					check = false;
	  				}
	  			}
	  		}
	  	}
	  	if(check == false){
	  		break;
	  	}
	  }

	  if(check) cout<<"YES"<<endl;
	  else cout<<"NO"<<endl;
  }

}