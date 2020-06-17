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

  long long int n, d;
  cin>>n>>d;
  vi a(n);
  for(long long int i=0;i<n;i++) cin>>a[i];

  long long int cnt=0;
	long long int j = 0;
	for(long long int i = 2; i < n; i++){
		while(a[i]-a[j]>d)j++;
		if(i > j+1) cnt += (i-j)*(i-j-1)/2;
	}

	cout<<cnt<<endl;

}