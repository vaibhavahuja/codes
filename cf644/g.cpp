#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>



bool check(int a[][100], int c, int d, int n, int m){
	vi rows(n, 0), cols(m, 0);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == 1) rows[i]++, cols[j]++;
		}
	}
	
	for(int i = 0; i < n; i++){
		if(rows[i] != c) return false;
	}
	for(int i = 0; i < m; i++){
		if(cols[i] != d) return false;
	}

	return true;
}

 int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){

	  int n, m, c, d;
	  cin>>n>>m>>c>>d;
	  int a[n][100];

	  mii rows, cols;

	  for(int i = 0; i < n; i++){
	  	for(int j = 0; j < m; j++){
	  		a[i][j] = 0;
	  	}
	  }
	  

	  for(int i = 0; i < n; i++){
	  	for(int j = 0; j < m; j++){
	  		if(rows[i] < c && cols[j] < d){ 
	  			a[i][j] = 1;
	  			rows[i] += 1;
	  			cols[j] += 1;
	  		}
	  	}
	  }



	  	for(int i = 0; i < n; i++){
	  		for(int j = 0; j < m; j++) cout<<a[i][j];
	  		cout<<endl;
	  	}
	  if(check(a, c, d, n, m)){
	  	cout<<"YES"<<endl;
	  }else cout<<"NO"<<endl;
  }

}