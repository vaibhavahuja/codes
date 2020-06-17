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

unsigned long long int ans(unsigned long long int a){
	if(a < 10) return a;

	unsigned long long int p = a%10;
	unsigned long long int ld = 9 + (a-10)/10;
	while(a > 9){
		a/=10;
	}
	if(p >= a) ld++;
	return ld;
}

int main(){
  ios_base::sync_with_stdio(false);
  unsigned long long int l, r;
  cin>>l>>r;
  cout<<ans(r)-ans(l-1)<<endl;
  

}