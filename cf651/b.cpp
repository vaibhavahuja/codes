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

	  vp odd, even;
	  int n;
	  cin>>n; 
	  for(int i = 0; i < 2*n; i++){
	  	int p;
	  	cin>>p;
	  	if(p%2==0) even.push_back(pii(p, i+1));
	  	else odd.push_back(pii(p, i+1));
	  }

	  if(even.size() == 0){
	  	odd[odd.size()-1].second = 0;
	  	odd[odd.size()-2].second = 0;
	  	for(int i = 0; i < odd.size(); i+=2){
	  		if(odd[i].second != 0)cout<<odd[i].second<<" "<<odd[i+1].second<<endl;
	  	}
	  }else if(odd.size() == 0){
	  	even[even.size()-1].second = 0;
	  	even[even.size()-2].second = 0;
	  	for(int i = 0; i < even.size(); i+=2){
	  		if(even[i].second != 0) cout<<even[i].second<<" "<<even[i+1].second<<endl;
	  	}
	  }else if(odd.size()%2 != 0 && even.size()%2 != 0){
	  	odd[odd.size()-1].second = 0;
	  	even[even.size()-1].second = 0;

	  	for(int i = 0; i < odd.size(); i+=2){
	  		if(odd[i].second != 0)cout<<odd[i].second<<" "<<odd[i+1].second<<endl;
	  	}

	  	for(int i = 0; i < even.size(); i+=2){
	  		if(even[i].second != 0)cout<<even[i].second<<" "<<even[i+1].second<<endl;
	  	}
	  }else{
	  	odd[odd.size()-1].second = 0;
	  	odd[odd.size()-2].second = 0;

	  	for(int i = 0; i < odd.size(); i+=2){
	  		if(odd[i].second != 0)cout<<odd[i].second<<" "<<odd[i+1].second<<endl;
	  	}

	  	for(int i = 0; i < even.size(); i+=2){
	  		if(even[i].second != 0)cout<<even[i].second<<" "<<even[i+1].second<<endl;
	  	}


	  }
  }
}