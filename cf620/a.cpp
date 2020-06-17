#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>


int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int x, y, a, b;
		cin>>x>>y>>a>>b;

		long long int relSpeed = a+b;
		long long int dist = (y-x);
		if(dist%relSpeed != 0) cout<<-1<<endl;
		else cout<<(dist/relSpeed)<<endl;
	}
}














