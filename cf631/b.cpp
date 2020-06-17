#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>

void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
  
}


int main(){
  ios_base::sync_with_stdio(false);
  long long int t;
  cin>>t;
  while(t--){
  	  mii table1;
	  long long int n;
	  cin>>n;
	  vi a(n);
	  for(long long int i = 0; i < n; i++){
	  	cin>>a[i];
	  }
	  vi b(n, 0);
	  long long int sum = 0;
	  for(long long int i = 0; i < n; i++){
	  	sum += a[i];
	  	table1[a[i]] += 1;
	  	if(sum == (i+1)*(i+2)/2 && table1.size() == (i+1)) b[i] = 1;
	  }


	  vi c(n, 0);
	  long long int sum2 = 0;
	  mii table2;
	  long long int q = 0;
	  for(long long int i = n-1; i>=0; i--){
	  	sum2 += a[i];
	  	table2[a[i]] += 1;
	  	q++;
	  	if(sum2 == (q)*(q+1)/2 && table2.size() == q) c[i] = 1;
	  }

	  // show(b);
	  // show(c);
	  long long int ctr = 0;
	  vector<pair<long long int, long long int>> v;
	  for(long long int i = 0; i < n-1; i++){
	  	if(b[i] == 1 && c[i+1] == 1) v.push_back(pair<long long int, long long int>(i+1, (n-i-1)));
	  }

	  cout<<v.size()<<endl;
	  show(v);
	
  }
  
}