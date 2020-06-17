#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>

void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

long long int calcTime(long long int n){
	long long int t = 0;
	for(long long int i = 0; i<n; i++){
		for(long long int j = i+1; j < n; j++) t++;
	}
	return t;
	// return n/

}

int main(){
  ios_base::sync_with_stdio(false);

  long long int n, k;
  cin>>n>>k;

  // cout<<calcTime(n);
  if(calcTime(n) <= k ) cout<<"no solution"<<endl;
  else{
  	for(long long int i = 0; i < n; i++){
  		cout<<0<<" "<<i+1<<endl;
  	}
  }
}