#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define pii pair<long long int, long long int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<long long int, long long int>

void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

long long int modiss(long long int n,long long int  k){
	if(n == 0) return 0;
	if(n < 0){
		long long int ans = k - abs(n)%k;
		return ans;
	}else{
		return n%k;
	}

}


int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
  	// show(a);w
  	mii table;
  	int flag = 0;
  	for(int i = 0; i < n; i++){
  		long long int ew = ((a[i]+i)%n + n)%n;
  		// cout<<ew<<" ";
  		table[ew] += 1;
  		if(table[ew] > 1){
  			flag = 1;
  			break;
  		}
  	}

    if(table.size() != n) flag = 1;
  	if(flag == 1) cout<<"NO"<<endl;
  	else cout<<"YES"<<endl;


  }
  


}