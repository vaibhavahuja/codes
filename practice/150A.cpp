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

vi primeFactors(long long int n)  
{ 	
	vi a; 
    while (n % 2 == 0)  
    {  
        a.push_back(2);
        n = n/2;  
    }  

    for (long long int i = 3; i*i <= n; i = i + 2)  
    { 
        while (n % i == 0)  
        {  
            a.push_back(i);
            n = n/i;  
        }  
    } 
    if (n > 2) a.push_back(n);
    
    return a; 
}  

int main(){
  ios_base::sync_with_stdio(false);

  long long int t;
  cin>>t;
  vi a = primeFactors(t);
  sort(a.begin(), a.end());
  if(a.size()<=1){
  	cout<<1<<endl;
  	cout<<0<<endl;
  }else if(a.size() == 2){
  	cout<<2<<endl;
  }else if(a.size() > 2){
  	cout<<1<<endl;
  	cout<<a[0]*a[1]<<endl;
  }


}