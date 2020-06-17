#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>
#define M 10000005

int spf[M]; 

void sieve() 
{ 
    spf[1] = 1; 
    for (int i=2; i<M; i++) 
        // marking smallest prime factor for every 
        // number to be itself. 
        spf[i] = i; 
  
    // separately marking spf for every even 
    // number as 2 
    for (int i=4; i<M; i+=2) 
        spf[i] = 2; 
  
    for (int i=3; i*i<M; i++) 
    { 
        // checking if i is prime 
        if (spf[i] == i) 
        { 
            // marking SPF for all numbers divisible by i 
            for (int j=i*i; j<M; j+=i) 

                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
} 


void show(vi a){
	long long int i = 0;
	while(i < a.size()){
		cout<<a[i]<<" ";
		i++;
	}
}

void updatePrimes(long long int x, vi &arr){
	mii table;
    while (x != 1) 
    { 
    	table[spf[x]] += 1;
    	if(table[spf[x]] == 1){
    		arr[spf[x]] += 1;
    	}
        x = x / spf[x]; 
    } 

}


int main(){
	std::ios::sync_with_stdio(false);
	long long int n;
	cin>>n;
	vi x;
	long long int maxi = -1;
	while(n--){
		long long int xi;
		cin>>xi;
		maxi = max(maxi, xi);
		x.push_back(xi);
	}
	sieve();

	vi arr(maxi+1);

	for(long long int i = 0; i < x.size(); i++){
		updatePrimes(x[i], arr);
	}

	// show(arr);
	vi prefix;
	prefix.push_back(0);
	for(long long int i = 1; i < arr.size(); i++){
		prefix.push_back(prefix[i-1] + arr[i]);
	}

	// show(prefix);
	long long int m;
	cin>>m;

	vector<long long int> ans;
	while(m--){
		long long int l, r;
		cin>>l>>r;
		if(l > arr.size() && r > arr.size()){
			ans.push_back(0);
			// cout<<0<<"\n";
		}else{
			r = min((long long int)arr.size()-1, r);
			ans.push_back(prefix[r] - prefix[l-1]);
			// cout<<prefix[r] - prefix[l-1]<<"\n";
		}
		
	}

	show(ans);

}














