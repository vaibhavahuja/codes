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

unsigned long long int answer(string s){
	unsigned long long int x = 0, j = 1, i = s.length()-1;

	while(i>=0){
		x += (j%M)*((s[i]=='1'?1:0)%M)%M;
		j *= 2;
		// j%=M;
		x%=M;
		i--;
	}
	return x;
}

unsigned long long int powerr(unsigned long long int n){
	unsigned long long int e = n, ans = 1;

	while(e--){
		ans*=2;
		ans%=M;
	}
	return ans;
}



int main(){
  ios_base::sync_with_stdio(false);

  string x;
  cin>>x;
  unsigned long long int asn = (answer(x)%M*powerr(x.length() - 1)%M)%M;
  cout<<asn<<endl;

}