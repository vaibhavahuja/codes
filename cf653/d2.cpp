#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define pq priority_queue<pii, vector<pii>, greater<pii> >
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void showpq( pq g) 
{ 
    // Loop to print the elements 
    // until the priority queue 
    // is not empty 
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
	  	
	  	if(t.second <= k){
	  		t.first = (k-t.second);
	  	}else{	  		
	  		t.first = ((t.second/k + 1)*k - t.second);
	  	}
	  	t.first += k*table[t.second];
  		table[t.second] += 1;

	  	a.push(t);
	  }
	  // showpq(a);
	  int x = 0, ans = 0;
	  while(!a.empty()){
	  	pii ew = a.top();
	  	if(ew.first%k == 0){ 
	  		a.pop();  		
	  	}else if(ew.first > x){
	  		ans += (ew.first - x);
	  		x += (ew.first - x);
	  	}else if(ew.first == x){
	  		ans += 1;
	  		x++;
	  		a.pop();
	  	}else{
	  		ew.first += k;
	  		a.pop();
	  		a.push(ew);
	  	}
	  }
	  cout<<ans<<endl;
  }
}