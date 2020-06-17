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


int main(){
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vi a(n);
  for(int i = 0; i<n; i++) cin>>a[i];

  for(int i=1; i<n ; i++){
  	if(n%i == 0 && n/i >= 3){
  		for(int j = 0; j < i; j++){
  			bool f = 1;
  			for(int k = 0; k < n/i; k++) f &= a[k*i+j];
  			if(f){
  				cout<<"YES"<<endl;
  				return 0;
  			}
  		}
  	}
  }
  cout<<"NO"<<endl;

}