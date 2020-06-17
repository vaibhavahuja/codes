#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mis map<long long int, string>
#define MOD 1000000007


void show(vi a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

long long int calC(string s){
	sort(s.begin(), s.end());
	long long int ans = 0;
	long long int temp = 1;
	for(long long int i = 0; i < s.length(); i++){
		if(s[i] == s[i-1]) continue;
		else (ans=(ans+1)%MOD);
	}
	// cout<<ans<<endl;
	return ans%MOD;
}

void show(mis table){
	for(auto i = table.begin(); i != table.end(); i++){
		cout<<i->first<<" "<<i->second<<endl;
	}
}

void answer(mis table){
	long long int ans = 1;
	for(auto i = table.begin(); i != table.end(); i++){
		long long int p = calC(i->second);
		ans = (ans*p)%MOD;
		// cout<<ans<<endl;
	}
	cout<<ans<<endl;
}



int main(){
	long long int n, m;
	cin>>n>>m;
	mis table;
	while(n--){
		string s;
		cin>>s;
		for(long long int i = 0; i < s.length(); i++){
			table[i] += s[i];
		}
	}
	// show(table);
	answer(table);
  

}














