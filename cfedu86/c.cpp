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

unsigned long long int answer(unsigned long long int x, unsigned long long int a, unsigned long long int b){
	unsigned long long int lcm = (a*b)/(__gcd(a, b));

	if(lcm == a || lcm == b) return 0;

	unsigned long long int ans = 0;
	unsigned long long int q = (lcm - max(a, b));	//since at lcm it is 0
	unsigned long long int times = x/lcm;
	ans += q*times;

	unsigned long long int left = x%lcm;
	
	if(left <= max(a, b) - 1) ans += 0;
	else ans += left - max(a, b) + 1;
	return ans;
}


int main(){
  ios_base::sync_with_stdio(false);
 //  int ans = 0;
 //  int a = 4, b = 6;
 //  int left = 19%12;
 //  for(int c = 1; c <= 100; c++){
 //  	int ans =0;
 //  	left = c%12;
 //  	for(unsigned long long int i = 0; i <= left; i++){
	// 	if((i%a)%b != (i%b)%a) ans++;
	// }
	// cout<<ans<<" ";
	// int p = 0;
	
	// cout<<p<<endl;
	// cout<<left - max(a, b) + 1<<endl;	
  // }
  
  unsigned long long int t;
  cin>>t;
  while(t--){
  	  unsigned long long int a, b, q;
	  cin>>a>>b>>q;
	  vi final;
	  while(q--){
	  	unsigned long long int l, r;
	  	cin>>l>>r;

	  	unsigned long long int ans = answer(r, a, b) - answer(l-1, a, b);
	  	final.push_back(ans);
	  }
	  show(final);

  }
}
  
 
