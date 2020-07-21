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

	  int n, m; cin>>n>>m;
	  vi a(n), b(m);
	  mii table;
	  for(int i = 0; i < n; i++) cin>>a[i], table[a[i]] += 1;
	  for(int i = 0; i < m; i++) cin>>b[i];

	  int flag = -1;
	  for(int i = 0; i < m; i++){
	  	if(table.find(b[i]) != table.end()){
	  		flag = b[i];
	  		break;
	  	}
	  }

	  if(flag == -1){
	  	cout<<"NO"<<endl;
	  }else{
	  	cout<<"YES"<<endl;
	  	cout<<1<<" "<<flag<<endl;
	  }
  }




}