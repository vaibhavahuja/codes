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
	  cin>>n;
	  string s; cin>>s;
	  int zeros = 0, ones = 0;
	  int i = 0;
	  for(i; i < n; i++){
	  	if(s[i] == '0') zeros++;
	  	else break;
	  }
	  if(i == n){
	  	//no ones exist
	  	for(int i = 0; i < n; i++) cout<<0;
	  	cout<<endl;
	  	continue;
	  }
	  int lastZero = n-1;
	  while(lastZero > 0){
	  	if(s[lastZero] == '0') break;
	  	lastZero--;
	  }
	  if(lastZero == 0){
	  	//no zeros exist
	  	for(int i = 0; i < n; i++) cout<<1;
	  	cout<<endl;
	  	continue;
	  }
	  if(lastZero+1 == zeros){
	  	//0's and 1's
	  	for(int i = 0; i < zeros; i++) cout<<0;
	  	for(int i = zeros; i < n; i++) cout<<1;
	  	cout<<endl;
	    continue;
	  }

	  if(lastZero == n-1){
	  	for(int i = 0; i < zeros; i++) cout<<0;
	  	cout<<0<<endl;
	  	continue;
	  }else{
	  	for(int i = 0; i < zeros; i++) cout<<0;
	  	cout<<"01"<<endl;
	    continue;
	  }
  }
	  
  



}