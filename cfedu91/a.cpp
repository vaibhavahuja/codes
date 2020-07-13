#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){

	  int n;
	  cin>>n; vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
	  int first = -1, second = -1, third = -1;
	  for(int i = 1; i < n-1; i++){
	  	for(int j = 0; j < i; j++){
	  		if(a[i] > a[j]) first = j+1;
	  	}
	  	for(int j = i+1; j < n; j++){
	  		if(a[j] < a[i]) third = j+1;
	  	}
	  	if(first != -1 && third != -1){
	  		second = i+1;
	  		break;
	  	}else{
	  		first = -1;
	  		third = -1;
	  	}
	  }
	  if(first != second && second != third && first != third){
	  	cout<<"YES"<<endl;
	  	cout<<first<<" "<<second<<" "<<third<<endl;
	  }else{
	  	cout<<"NO"<<endl;
	  }
  }

}	