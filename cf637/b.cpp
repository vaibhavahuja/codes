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


int main(){
  ios_base::sync_with_stdio(false);
  long long int t;
  cin>>t;
  while(t--){


  long long int n, k;
  cin>>n>>k;
  vi a(n); for(long long int i = 0; i < n; i++) cin>>a[i];

  vi peaks(n, 0);
  
  for(long long int i = 1; i < n-1; i++){
  	if(a[i]>a[i-1] && a[i]>a[i+1]) peaks[i] = 1;	//for prefix sum
  }
  // show(peaks);
  vi prefixPeaks;
  // sum = 0;
  for(long long int i = 0; i < n; i++){
  	peaks[i] += peaks[i-1];
  }
  // show(peaks);

  long long int i = 0;
  long long int j = k-1;
  long long int maxPeaks = -1;
  long long int pos = -1;
  while(j < peaks.size()){
  	long long int ps = peaks[j-1] - peaks[i];
  	// cout<<i<<" "<<j<<" "<<ps<<endl;
  	if(maxPeaks < ps){
  		maxPeaks = ps;
  		pos = i;
  	}
  	j++;
  	i++;
  }

  cout<<maxPeaks+1<<" "<<pos+1<<endl;
  }

}