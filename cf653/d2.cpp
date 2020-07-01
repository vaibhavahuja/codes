#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
#define pq priority_queue<pii, vector<pii>, greater<pii> >
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void showt(mii a){
	for(auto i = a.begin(); i != a.end(); i++){
		cout<<i->first<<" "<<i->second<<endl;
	}
}

void showpq(pq g) 
{ 
    while (!g.empty()) { 
        cout << g.top().first 
             << " " << g.top().second 
             << endl; 
        g.pop(); 
    } 
    cout << endl; 
} 
  

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
	  int n, k;
	  cin>>n>>k;
	  mii table;
	  // vp a(n); 
	  pq a;
	  int p;
  	  pii prev;
	  for(int i = 0; i < n; i++){
	  	pii t;
	  	cin>>t.second;
	  	if(t.second%k == 0){
	  		continue;
	  	}else if(t.second <= k){
	  		t.first = (k-t.second);
	  	}else{	  		
	  		t.first = ((t.second/k + 1)*k - t.second);
	  	}
	  	while(table.find(t.first)!=table.end()){
	  		table
	  	}
  		
	  }
	  // showt(table);
	  ll mx = -1;
	  for(auto i = table.begin(); i != table.end(); i++){
	  	mx = max(i->first, mx);
	  }
	  cout<<mx+1<<endl;
  }
}