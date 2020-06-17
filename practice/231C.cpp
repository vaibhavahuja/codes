#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<int, int>

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

  long long int n, k;
  cin>>n>>k;
  vi a(n);
  for(long long int i = 0; i < n; i++) cin>>a[i];
  sort(a.begin(), a.end());
  long long int q = a[0];
  vi b;
  b.push_back(q);
  for(long long int i = 1; i < n; i++){
  	q += a[i];
  	b.push_back(q);
  }

  b.push_back(0);


  long long int maxOccur = 1, num = a[0];
  // show(a);
  // show(b);
  for(long long int i = 1; i < a.size(); i++){
  	long long int l = 0, r = i, cnt;
  	while(r > l){
  		long long int m = (l + (r-l)/2);
  		long long int cst = (i - m + 1)*a[i] - (b[i] - b[(m-1)>=0?(m-1):b.size()-1]);
  		if(cst <= k){
  			r = m;
  			if(maxOccur < (i-m+1)){
  				maxOccur = (i-m+1);
  				num = a[i];
  			}

  		}else l = m + 1;
  	}

  }

  cout<<maxOccur<<" "<<num<<endl;




}