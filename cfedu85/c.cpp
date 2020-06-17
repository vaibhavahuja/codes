#include <bits/stdc++.h>
using namespace std;
#define vi vector<unsigned long long int>
#define pi pair<unsigned long long int, unsigned long long int>
#define vp vector<pi>

#define vs vector<string>
#define mii map<unsigned long long int, unsigned long long int>

void show(auto a){
  unsigned long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  unsigned long long int t;
  cin>>t;
  while(t--){
  	  mii table;
	  unsigned long long int n;
	  cin>>n;

	  vp a(n);
	  for(unsigned long long int i = 0; i < n; i++) cin>>a[i].first>>a[i].second;

	  vi check;
	  unsigned long long int sum = 0;
	  for(unsigned long long int i = 0; i < n-1; i++){
	  	if(a[i].second >= a[i+1].first){
	  		check.push_back(0);
	  	}
	  	else {
	  		check.push_back(a[i+1].first - a[i].second);
	  	}
	  	table[(i+1)] = check[check.size()-1];
	  	sum += table[(i+1)];
	  }
	  if(a[a.size()-1].second >= a[0].first){
	  		check.push_back(0);
	  	}
	  	else {
	  		check.push_back(a[0].first - a[a.size()-1].second);
	  }

	  table[0] = check[check.size()-1];
	  sum += table[0];
	  

	  unsigned long long int actualAnswer = 1e20;
	  for(unsigned long long int i = 0; i < a.size(); i++){
	  	actualAnswer = min(actualAnswer,(a[i].first + sum - table[i]));
	  }

	  cout<<actualAnswer<<endl;
	
  }
  

  

}