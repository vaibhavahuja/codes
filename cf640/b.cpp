#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define pii pair<long long int, long long int>
#define vp vector<pii>
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

long long int answer(){
	long long int n, k;
  cin>>n>>k;
  if(n%2 == 0 && k%2 == 0){
  	if(n < k){
  		cout<<"NO"<<endl;
  	}else{
  		cout<<"YES"<<endl;
  		long long int p = k-1;
  		while(p--) cout<<1<<" ";
  		cout<<n-k+1<<endl;
  	}
  	return 0;
  }


  if(n%2 == 0 && k%2 != 0){
  	if(k > n/2) cout<<"NO"<<endl;
  	else{
  		cout<<"YES"<<endl;
  		long long int p = k-1;
  		while(p--) cout<<2<<" ";
  		cout<<n - 2*(k-1)<<endl;
  	}
  	return 0;
  }

  if(n%2 != 0 && k%2 != 0){
  	if(n < k){
  		cout<<"NO"<<endl;
  	}else{
  		cout<<"YES"<<endl;
  		long long int p = k-1;
  		while(p--) cout<<1<<" ";
  		cout<<n-k+1<<endl;
  	}
  	return 0;
  }

  if(n%2 != 0 && k%2 == 0){
  	cout<<"NO"<<endl;
  	return 0;
  }
 }
int main(){
  ios_base::sync_with_stdio(false);
  long long int t;
  cin >> t;
  while(t--){
  	answer();
  }
  
}