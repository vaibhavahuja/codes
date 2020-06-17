#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>



int main(){
	float n;
	
	cin>>n;

	float ans = 0;

	while(n>0){
		ans += (1/n);
		n--;
	}

	cout<<ans;
  

}














