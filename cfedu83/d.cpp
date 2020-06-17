// A Dynamic Programming based solution to compute nCr % p 
#include<bits/stdc++.h> 
using namespace std; 

unsigned long long int nCrModp(unsigned long long int n, unsigned long long int r, unsigned long long int p) 
{ 
    // The array C is going to store last row of 
    // pascal triangle at the end. And last entry 
    // of last row is nCr 
    unsigned long long int C[r+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; // Top row of Pascal Triangle 
  
    // One by constructs remaining rows of Pascal 
    // Triangle from top to bottom 
    for (unsigned long long int i = 1; i <= n; i++) 
    { 
        // Fill entries of current row using previous 
        // row values 
        for (unsigned long long int j = min(i, r); j > 0; j--) 
  
            // nCj = (n-1)Cj + (n-1)C(j-1); 
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
} 
  
unsigned long long int fact(unsigned long long int q, unsigned long long int n, unsigned long long int p){
	unsigned long long int i = 1;
	unsigned long long int ans = q;
	ans %= p;
	while(i <= n){
		ans=((ans%p)*(i%p))%p;
		ans%=p;
		i++;
	}
	return ans/2;
}  

  
// Driver program 
int main() 
{ 	
	unsigned long long int n = 1336, r = 40, p = 998244353; 

	unsigned long long int q = 39;
	unsigned long long int w = 1335;
	unsigned long long int sum2 = 0;
	
	// sum2 += (1335)*(1336)/2;
	// sum2 -= (39)*(20);
    for(int j = 39; j <= 1335; j++) sum2+=j;
	
	cout<<sum2<<endl;
    // cout << (((nCrModp(n, r, p) + sum2)%p)*(fact(42,p)%p))%p; 
    unsigned long long int qw = ((nCrModp(n, r, p) + sum2)%p);
    cout<<"arranging"<<fact(qw, 41, p)<<endl;
    return 0; 
} 