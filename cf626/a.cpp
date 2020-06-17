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
  int t;
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	int even = 0, odd = 0;
  	vi a(n); 
  	for(int i = 0; i < n; i++){ 
  		cin>>a[i];
  		if(a[i]%2 == 0) even = i+1;
  		else odd++;
  	}

  	if(even > 0){
  		cout<<1<<endl;
  		cout<<even<<endl;
  	}else{
  		if(odd > 1){
  			cout<<2<<endl;
  			int p = 0;
  			for(int i = 0; i < n; i++){
  				if(a[i]%2 != 0) cout<<i+1<<" ", p++;
  				if(p == 2){
  					cout<<endl;
  					break;
  				}
  			}
  		}else{
  			cout<<-1<<endl;
  		}
  	}

  }
  

}