#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

vi primeFactors(int n)  
{  

	vi a;
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        a.push_back(2);
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            a.push_back(i);
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2) a.push_back(n);

    return a;
        
}  

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  map<int, vi> table;
  int q = t;

  while(t--){
  	  int n;
  	  
	  cin>>n;
	  vi a = primeFactors(n);

	  mii check;
	  for(int i = 0; i < a.size(); i++){
	  	check[a[i]]++;
	  }

	  for(auto i = check.begin(); i != check.end(); i++){
	  	table[i->first].push_back(i->second);
	  }

  }

 
    unsigned long long int ans = 1;
	for(auto i = table.begin(); i != table.end(); i++){
	  	
	  		sort(i->second.begin(), i->second.end());
	  		int w = 0;
	  		if(i->second.size() <= q-2);
	  		else{
	  			
	  			if(i->second.size() == q-1) w = i->second[0];
	  			else w = i->second[1];
	  		}	  		
	  		while(w--) ans*=i->first;
	  	
	  	// cout<<"ans is "<<ans;
	}
	cout<<ans<<endl;
 
  
}

