#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
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

  int m;
  cin>>m;
  vi discounts(m);
  for(int i=0;i<m;i++) cin>>discounts[i];

  int n;
  cin>>n;
  vi price(n);
  for(int i=0;i<n;i++) cin>>price[i];

  sort(price.begin(), price.end());
  sort(discounts.begin(), discounts.end());

  int cost = 0;

  int minim = discounts[0];

  int pos = price.size() - 1;
  while(pos >= 0){
  	// cout<<pos<<" "<<minim<<endl;
  	if(pos+1 > minim){
  		int d = minim;
  		while(d--){
  			cost += price[pos];
  			pos--;
  		}
  		// cout<<"cost till here is "<<cost<<endl;
  		if(pos+1 >= 2){
  			int d = 2;
  			while(d--){
  				pos--;
  			}
  		}else if(pos+1 == 1){
  			pos--;
  		}
  	}else{
  		cost += price[pos];
  		pos--;
  	}
  	// cout<<cost<<endl;
  }
  cout<<cost<<endl;




}