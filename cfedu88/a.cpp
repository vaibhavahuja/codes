#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int



int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){

	  double n, m, k;
	  cin>>n>>m>>k;

	  double jokersMax = n/k;
	  double iGet = min(n/k, m);

	  double playersLeft = k-1;
	  double jokersLeft = m - iGet;
	  // cout<<iGet<<" "<<playersLeft<<" "<<jokersLeft<<endl;
	  if(jokersLeft == 0){
	  	cout<<iGet<<endl;
	  }else{
	  	double ans = ceil(jokersLeft/playersLeft);
	  	cout<<iGet- ans<<endl;
	  }
  }



}