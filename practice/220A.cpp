#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

void show(vi a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

bool answer(vi a){
	vi b = a;
	sort(a.begin(), a.end());
	long long int i = 0, j = 0;

	for(i = 0; i < a.size(); i++){
		if(a[i] != b[i]) j++;
	}

	return (j <= 2);
}


int main(){

  long long int n;
  cin>>n;
  vi a(n);
  for(long long int i = 0; i < n; i++){
  	cin>>a[i];
  }

  string ans = (answer(a))?"YES":"NO";
  cout<<ans<<endl;

}














