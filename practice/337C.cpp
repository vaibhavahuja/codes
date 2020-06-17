#include <bits/stdc++.h>
using namespace std;
#define vi vector< long long int>
#define vs vector<string>
#define mii map< long long int,  long long int>
#define M 1000000009

void show(auto a){
   long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

 long long int calcScore(vi a,  long long int k){
	 long long int score = 0;
	 long long int count1 = 0;
	for( long long int i=0;i<a.size();i++){
		if(a[i]==1) count1++, score++, score%=M;
		if(count1==k) count1=0, score*=2, score%=M;
		if(a[i]==-1) count1=0;
	}
	return score%M;
}

long long  power(long long n , long long k){
	if (k==0)return 1;
 
		if (k%2!=0){
			return ( (n) * power (n , k-1) )%M;
		}
		else{
			return power (n*n%M , k/2);
		}}


 long long int score2( long long int n,  long long int k){
	 long long int w = n/k+1;
	 long long int e = 1;
	e = power(2, w);
	// cout<<e<<endl;
	e-=2;
	e+=M;
	e%=M;
	e*=k;
	e%=M;
	e+=n%k;
	e%=M;

	return e;
}


int main(){
  ios_base::sync_with_stdio(false);
   long long int n,m,k;
  cin>>n>>m>>k;
   long long int ans = 0;
  //  long long int q = n-n/k;
  if(m <= n-n/k) ans = m%M;
  else{
  	 long long int p = (m-(n-n/k))*k;
  	ans += score2(p, k);
  	// ans%=M;
  	ans += (n-p)-(n-p)/k;
  	ans%=M;
  }
  
  cout<<ans%M<<endl;
}




