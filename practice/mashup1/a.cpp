//works now :)

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);


  int k;
  cin>>k;
  if(k == 0){
  	cout<<"ab"<<endl;
  	return 0;
  }
  int p = 0;
  vi a;
  int i = 0;
  while(p != k){
	p += (++i);
	if(p > k){
		p -= (i);
		a.push_back(i-1);
		i = 0;
	}
	if(p == k){
		a.push_back(i);
		break;
	}
  }
  // cout<<a.size()<<endl;
  char ab = 'a';
  for(int i = 0; i < a.size(); i++){
  	for(int j = 0; j < a[i]+1; j++){
  		cout<<ab;
  	}
  	ab++;
  }
  cout<<endl;
}