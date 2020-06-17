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
	int c, d;
	cin>>c>>d;
	int a = min(c, d);
	int b = max(c, d);
	// cout<<a<<" "<<b<<endl;
	if(2*a > b){
		cout<<4*a*a<<endl;
	}else{
		cout<<b*b<<endl;
	}

  }

}