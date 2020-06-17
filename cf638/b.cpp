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
  // cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  int tes;
  cin>>tes;
  while(tes--){
  	  int n, k;
	  cin>>n>>k;
	  int maxi = 0;
	  mii table;
	  vi a(n);
	  for(int i = 0; i < n; i++){
	  	cin>>a[i];
	  	table[a[i]] += 1;
	  	maxi = max(maxi, a[i]);
	  }
	  int numDistinct = table.size();
	  if(numDistinct > k){
	  	cout<<-1<<endl;
	  }else{
	  	  vi distinct;
	  	  for(auto i = table.begin(); i != table.end(); i++){
	  	  	distinct.push_back(i->first);
	  	  }
	  	  vi d2;
	  	  for(int i = 1; i<= n; i++){
	  	  	if(table.find(i) == table.end()) d2.push_back(i);
	  	  }
	  	  // show(d2);
	  	  // int q = 0;
	  	  while(distinct.size() < k){
	  	  	distinct.push_back(1);
	  	  }
	  	  // show(distinct);
	  	  cout<<n*distinct.size()<<endl;
	  	  for(int j = 0; j < n; j++){
	  	  	show(distinct);
	  	  }
	  	  cout<<endl;
	  }


  }
  

}