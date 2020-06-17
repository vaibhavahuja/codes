#include <bits/stdc++.h>
using namespace std;
#define vi vector<unsigned long long int>
#define pii pair<unsigned long long int, unsigned long long int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<unsigned long long int, unsigned long long int>
#define ll long long unsigned long long int

void show(auto a){
  unsigned long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

unsigned long long int getMin(unsigned long long int a){
	string s = to_string(a);
	char mini = '9';
	for(unsigned long long int o = 0; o < s.length(); o++){
		mini = min(mini, s[o]);
	}
	return (mini - '0');
}

unsigned long long int getMax(unsigned long long int a){
	string s = to_string(a);
	char mini = '1';
	for(unsigned long long int o = 0; o < s.length(); o++){
		mini = max(mini, s[o]);
	}
	return (mini - '0');
}


int main(){
  ios_base::sync_with_stdio(false);
  unsigned long long int t;
  cin>>t;
  while(t--){
    unsigned long long int n, k;
    cin>>n>>k;
    unsigned long long int p = n;
    while(k>1){
      // cout<<getMin(p)<<" "<<getMax(p)<<endl;
      if(getMin(p) == 0 || getMin(p) == 0){
        // cout<<p<<endl;
        break;
      }
      p += getMin(p)*getMax(p);
      k--;
    }

    cout<<p<<endl;
  }
  

}