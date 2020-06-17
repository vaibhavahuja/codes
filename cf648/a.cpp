#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

bool canClaim(int a[][100], int n, int m, int c, int d){
	if(a[c][d] == 1) return false;
	for(int i = 0; i < n; i++){
		if(a[i][d] == 1) return false;
	}
	for(int j = 0; j < m; j++){
		if(a[c][j] == 1) return false;
	}
	return true;
}


int main(){
  ios_base::sync_with_stdio(false);


  int t;
  cin>>t;
  while(t--){

	  int a[100][100];

	  int n, m;
	  cin>>n>>m;
	  for(int i = 0; i < n; i++){
	  	for(int j = 0; j < m; j++){
	  		cin>>a[i][j];
	  	}
	  }
	  int chance = 0;	//ashish chance
	  for(int i = 0; i < n; i++){
	  	for(int j = 0; j < m; j++){
	  		if(canClaim(a, n, m, i, j)){
	  			a[i][j] = 1;
	  			chance = 1-chance;
	  		}
	  	}
	  }
	  if(chance == 0) cout<<"Vivek"<<endl;
	  else cout<<"Ashish"<<endl;
	  // cout<<chance<<endl;
  }



}