#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

long long int answer(vi a){
	long long int sum = 0;
	for(int i = 0; i < a.size(); i++){
		sum += a[i];
	}
	if(sum%3 != 0) return 0;
	long long int p = sum/3;
	vi t(a.size(), 0);
	long long int q = 0;
	for(int i = t.size() - 1; i >= 0; i--){
		q += a[i];
		if(q == p) t[i] += 1;
	}
	// show(t);
	for(int i = t.size() - 2; i >= 0; i--){
		t[i] += t[i+1];
	}
	// show(t);

	long long int ans = 0;
	q = 0;
	for(int i = 0; i < a.size() - 2; i++){
		q += a[i];
		if(q == p) ans += t[i+2];
	}
	return ans;
}




int main(){
	int t;
	cin>>t;
	vi a(t, 0);
	for(int i = 0; i < t; i++){
		cin>>a[i];
	}
	cout<<answer(a)<<endl;
}














