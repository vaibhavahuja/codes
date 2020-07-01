//Will solve this in a bit

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define pq priority_queue<pii, vector<pii>, greater<pii>>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

void show(pq a){
	pq b = a;
	while(!b.empty()){
		pii bb = b.top();
		b.pop();
		cout<<bb.first<<" "<<bb.second<<endl;
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){

    int n, k;
    cin>>n>>k;
    int arr[n][n];
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		arr[i][j] = 0;
    	}
    }
    int p = 0, q = 0;
    if(k%n == 0) cout<<0<<endl;
    else cout<<2<<endl;
    
    while(k--){
      arr[p][q] = 1;
      p = p+1, q = (q+1)%n;
      if(p == n) p = 0, q = (q+1)%n;
    }

    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		cout<<arr[i][j];
    	}
    	cout<<endl;
    }
  }

}