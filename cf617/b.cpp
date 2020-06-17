//very very poor

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>


int answer(int a){
	int ans = 0;
	int spent = 0;
	int cbk = 0;

	while(a > 0){
		int q = a/10;
		if(q == 0) ans = a;
		else ans = (a - a%10);
		cbk = ans/10;
		spent += ans;
		a -= ans;
		a += cbk;

		// cout<<a<<" "<<cbk<<" "<<spent<<endl;
	}

	return spent;
}





int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		cout<<answer(a)<<endl;
	}
}














