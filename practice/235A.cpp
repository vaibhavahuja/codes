#include <bits/stdc++.h>
using namespace std;
#define vi vector<unsigned long long int>
#define vs vector<string>
#define mii map<unsigned long long int, unsigned long long int>

void show(auto a){
  unsigned long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

unsigned long long int gcd(unsigned long long int a, unsigned long long int b){
	if(a == 0) return b;
	if(b == 0) return a;
	if(a > b) return gcd(a - b, b);
	return gcd(a, b-a);
}

unsigned long long int lcm(unsigned long long int a, unsigned long long int b, unsigned long long int c){

}

int main(){
  ios_base::sync_with_stdio(false);
  unsigned long long int n;
  cin>>n;
  unsigned long long int m = 1;
  if(n > 3){
  	if(n%2 == 0){
  		if(n%3==0) m=(n-1)*(n-2)*(n-3);
    	else  m=n*(n-1)*(n-3);
  	}else{

  		m *= n;
  		m *= (n-1);
  		m *= (n-2);
  	}
  	cout<<m<<endl;
  }else if(n == 2){
  	cout<<2<<endl;
  }else if(n == 1){
  	cout<<1<<endl;
  }else if(n == 3){
  	cout<<6<<endl;
  }

}