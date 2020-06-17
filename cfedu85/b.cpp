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
  	  long long int n, x;
	  cin>>n>>x;
	  vi a(n);
	  for(long long int i = 0 ;i < n; i++) cin>>a[i];
	  sort(a.begin(), a.end());
	  long long int i = a.size() - 1;
	  double sum = 0;
	  double avg = 0;
	  double soFar = 0;
	  long long int answer = -1;
	  while(i >= 0){
	  	sum += a[i];
	  	soFar++;
	  	avg = sum/(soFar);
	  	if(avg >= x) answer = max(answer, (long long int)soFar);
	  	i--;
	  } 

	  if(answer == -1) cout<<0<<endl;
	  else cout<<answer<<endl;


  }
  

}