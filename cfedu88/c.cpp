#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long int
#define ld long double


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

	  ld h, c, t;
	  cin>>h>>c>>t;
	  ll l = 1;
	  ll r = 1000000000;

	  ll mid = (l + (r-l)/2);
	  ld bestAns = 0;
	  ld chances = 0;
	  ld temp;
	  ld mini = LDBL_MAX;
	  ll midBest;
	  vector<pair<ld, ll>> midBests;
	  while(l <= r){
	  	chances++;
	  	mid = (l + (r-l)/2);
	  	temp = ((mid*h) + (mid-1)*c)/(2*mid - 1);

	  	if(abs(t-temp) <= mini){
	  		mini = abs(t-temp);
	  		bestAns = temp;
	  		midBests.push_back(pair<ld, ll>(abs(t-temp), mid));
	  		midBest = mid;
	  	}
	  	
	  	if(t > temp){
	  		r = mid - 1;
	  	}else{
	  		l = mid + 1;
	  	}
	  }
	  ld mean = c + (h-c)/2;
	  if(abs(mean - t) <= abs(bestAns - t) && abs(mean - t) <= abs(temp - t)){
	  	cout<<2<<endl;
	  }else if(abs(bestAns - t) <= abs(temp - t)){
	  	// midBests.push_back(midBest);
	  	sort(midBests.begin(), midBests.end());

	  	ll mid23 = midBests[0].second;
	  	// cout<<midBests[0].first<<endl;
	  	cout<<2*mid23 - 1<<endl;
	  }else cout<<(2*mid - 1)<<endl;
  }


}