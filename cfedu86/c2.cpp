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
	
	
	return ans;
}


int main(){
  ios_base::sync_with_stdio(false);
 
  
  unsigned long long int t;
  cin>>t;
  while(t--){
  	  unsigned long long int a, b, q;
	  cin>>a>>b>>q;
	  vi final;
	  vi ok;
	  int lcm = a*b/__gcd(a, b);
	  for(int i = 0; i <= lcm; i++){
	  	if((i%a)%b != (i%b)%a) ok.push_back(1);
	  	else ok.push_back(0);
	  }

	  for(int i = 1; i <= lcm; i++){
	  	ok[i] += ok[i-1];
	  }
	  // show(ok);

	  while(q--){
	  	unsigned long long int l, r;
	  	cin>>l>>r;

	  	unsigned long long int ans = answer(r, a, b) - answer(l-1, a, b);
	  	ans += ok[r%lcm];
	  	ans -= ok[(l-1)%lcm];
	  	// cout<<ok[l-1]<<" "<<ok[l]<<" "<<ok[l+1]<<endl;
	  	final.push_back(ans);
	  }
	  show(final);

  }
}
  
 
