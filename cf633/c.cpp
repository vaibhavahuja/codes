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

long long int answer(long long int n){
	long long int p = 0;
	long long int ans = 1;
	while(ans < n){
		ans *= 2;
		p++;
		if(ans>=n) return p;
		
	}
	return p;

}


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  	  long long int n;
	  cin>>n;
	  vi a(n);
	  for(long long int i = 0; i < n; i++) cin>>a[i];

	  vi temp; 

	  long long int maxSoFar = a[0];
	  temp.push_back(0);
	  long long int mini = 0;
	  for(long long int i = 1; i < n; i++){
	  	if(a[i] > maxSoFar) maxSoFar = a[i];
	  	if(a[i] < maxSoFar){
	  		temp.push_back(maxSoFar - a[i]);
	  	}else temp.push_back(0);
	  }

	  // show(temp);
	  long long int getMax = 0;
	  for(long long int i = 0; i < temp.size(); i++){
	  	getMax = max(getMax, temp[i]);
	  }
	  // cout<<getMax<<endl;
	  cout<<answer(getMax+1)<<endl;


  }
  
  

}