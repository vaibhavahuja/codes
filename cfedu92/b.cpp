#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  int n, k, z; cin>>n>>k>>z;
  vi a(n); for(int i = 0;  i< n; i++) cin>>a[i];

  //l = 0;
  int ansSum = -1;
  int tempSum = 0;
  // z = 0
  for(int i = 0; i <= k; i++) tempSum += a[i];
  ansSum = max(tempSum, ansSum);
  cout<<ansSum<<endl;

  // z = 1
  show(a);
  for(int ew = 1; ew <= z; ew++){

	  int h = -1, maxL;
	  for(int i = 0; i < k-ew; i++){
	  	tempSum = a[i]+a[i+1];
	  	if(tempSum > h){ 
	  		maxL = i; 
	  		h = tempSum;
	  	}
	  }
	  if(maxL == k-ew-1){
	  	//RL
	  	tempSum=0;
	  	for(int i = 0; i < k-ew; i++) tempSum += a[i];
	  	tempSum += a[k-ew];
	  }else{
	  	//RLR
	  	tempSum = 0;
	  	for(int i = 0; i < k-ew-1; i++) tempSum += a[i];
	  	if(maxL == k-ew-1){
	  		tempSum += a[maxL+1]*(ew);
		  	tempSum += a[maxL]*(ew+1);
	  	}else{
		  	tempSum += a[maxL+1]*(ew+1);
		  	tempSum += a[maxL]*ew;

	  	}
	  }
	  cout<<tempSum<<endl;
	  ansSum = max(tempSum, ansSum);
  }
}