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
	  int n; cin>>n;
	  vi a(n); 
	  int c = 0, d = 0;
	  for(int i = 0; i < n; i++){ 
	  	cin>>a[i];
	  	if(i%2 == 0 && a[i]%2 != 0) c++;
	  	else if(i%2 != 0 && a[i]%2 == 0) d++;
	  }

	  if(c == d){
	  	cout<<c<<endl;
	  }else cout<<-1<<endl;
  	
  }


  

}