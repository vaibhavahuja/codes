#include <bits/stdc++.h>
using namespace std;
#define vi vector<unsigned long long int>
#define vs vector<string>
#define mii map<unsigned long long int, unsigned long long int>
#define M 1000000007

void show(auto a){
  unsigned long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

unsigned long long int answer(unsigned long long int x, unsigned long long int y){
	unsigned long long int p = 1;
	while(y>0){
		p *= x;
		p %= M;
		y--;
	}
	return p;
}

unsigned long long int p = M;

unsigned long long int power(unsigned long long int x, unsigned long long int y)  
{  
    unsigned long long int res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p 
   
    if (x == 0) return 0; // In case x is divisible by p; 
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  

unsigned long long int byX(unsigned long long int a, unsigned long long int x){
	unsigned long long int d = 0;
	while(a%x == 0){
		a/=x;
		d++;
	}
	return d;
}


int main(){
  ios_base::sync_with_stdio(false);
  
  unsigned long long int n, x;
  cin>>n>>x;
  vi a(n);
  unsigned long long int sum = 0;
  for(unsigned long long int i = 0; i < n; i++) cin>>a[i], sum += a[i];
   
  vi b;
  mii table;
  for(unsigned long long int j = 0; j < a.size(); j++){
  	table[sum-a[j]] += 1;
  }
  	
  unsigned long long int carry = 0, ans = 0;
  for(auto &it:table){
  	carry = it.second/x;
  	it.second%=x;
  	if(it.second != 0){
  		ans = it.first;
  		break;
  	}
  	if(carry>0) table[it.first+1]+=carry;

  }

  
  cout<<power(x, min(ans, sum))<<endl;


}
