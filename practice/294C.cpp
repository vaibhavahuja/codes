#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
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

int C(int n, int r){
	int arr[n+1][r+1];
	for(int i = 0; i<=n; i++){
		for(int j = 0; j <= min(i, r);j++){
			if(j==0 || j==i) arr[i][j]  = 1;
			else{
				arr[i][j] = ((arr[i-1][j-1]%M)+(arr[i-1][j])%M)%M;
			}
		}
	}

	return arr[n][r];
}


int main(){
  ios_base::sync_with_stdio(false);
  int n, m;
  cin>>n>>m;
  vi a(m, 0);

  for(int i=0;i<m;i++)cin>>a[i];
  
  sort(a.begin(), a.end());
	int ans = 1;
  for(int i = 0; i < a.size(); i++){
  	
  }
}