#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int

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

	  int n, x;
	  cin>>n>>x;
	  int numOdd = 0, numEven = 0;
	  vi a(n); 
	  for(int i = 0; i < n; i++) {
	  	cin>>a[i];
	  	if(a[i]%2!=0)numOdd++;
	  	else numEven++;
	  }
	  int p = 0;
	  if(numOdd == 0){
	  	p = 0;
	  }else{
	  	x--;
	  	numOdd--;
	  	if(x <= 0) p = 1;
	  	else{
			if(numOdd%2 != 0) numOdd--;
			if(x >= numOdd){
				x -= numOdd;
				x -= numEven;
				if( x <= 0) p = 1;
			}else{
				if(x%2 == 0){
					x = 0;
					p = 1;
				}else{
					x = 1;
					if(numEven > 0) p = 1;
				}
			}
	  	}
	  }

	  	if(p == 1) cout<<"Yes"<<endl;
	  	else cout<<"No"<<endl;
	  
  }


}