#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>
#define M 1000000007


void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


bool justAB(long long int s, long long int a, long long int b){
	while(s>0){
		if(s%10 != a && s%10 != b) return false; 
		s/=10;
	}

	return true;
}

long long int binpow(long long int val, long long int deg, long long int mod) {
    if (!deg) return 1 % mod;
    if (deg & 1) return binpow(val, deg - 1, mod) * val % mod;
    long long int res = binpow(val ,deg >> 1, mod);
    return (res*res) % mod;
}
  
// Function to return gcd of a and b 
long long int gcd(long long int a, long long int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
}

long long int modInverse(long long int a, long long int m) 
{ 
   return binpow(a, m-2, m); 
} 



int main(){
  ios_base::sync_with_stdio(false);

  long long int a, b, n;
  cin>>a>>b>>n;
  long long int ans = 0;

  vi fact(n+1, 0);
  fact[0] = 1;
  for(long long int i = 1; i <= n; i++){
  	fact[i] = ((i%M)*(fact[i-1]%M))%M;
  }
  // show(fact);


  for(long long int i = 0; i <= n; i++){
  	long long int sum = a*i+b*(n-i);
  	if(justAB(sum, a, b)){
  		// cout<<n<<" "<<i<<endl;
  		long long int w = (fact[n-i]*fact[i]);
      w %= M;
      w = binpow(w, M-2, M);
  		ans += fact[n]*w;
  		
  		
  		ans %= M;
  	}
  }

  cout<<ans%M<<endl;
  

}