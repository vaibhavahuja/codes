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
  	int n;
  	cin>>n;
  	mii table;
  	while(n--){
  		int p;
  		cin>>p;
  		table[p] += 1;
  	}
  	int ans = 0, ans2 =0;
  	for(auto i = table.begin(); i != table.end(); i++){
  		ans += (i->second + ans2)/i->first;
  		ans2 = ((i->second+ans2)%i->first);

  	}
  	cout<<ans<<endl;
  }

}