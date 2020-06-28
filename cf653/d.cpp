#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<"("<<a[i].first<<","<<a[i].second<<") ";}cout<<endl;}

bool sort2(pii a, pii b){
	return a.second < b.second;
}

int main(){
  ios_base::sync_with_stdio(false);

  int n, k;
  cin>>n>>k;
  vp a(n); 
  for(int i = 0; i < n; i++){
  	cin>>a[i].first;
  	if(a[i].first <= k){
  		a[i].second = k-a[i].first;
  	}else{
  		a[i].second = (a[i].first/k + 1)*k - a[i].first;
  	}
  }
  sort(a.begin(), a.end(), sort2);
  show(a);
  int ans = 0, x = 0, i = 0;
  while(i < a.size()){
  	if(i == 2){
  		
  	cout<<a[i].first <<' '<<a[i].second<<" "<<x<<endl;
  	}
  	if(a[i].second%k == 0){ 
  		a[i].second = -1;
  		i++;
  	}
  	else if(a[i].second > x){
  		ans += (a[i].second - x);
  		x += (a[i].second - x);
  		// i++;
  	}else if(a[i].second == x){
  		ans += 1;
  		x++;
  		a[i].second = -1;
  		i++;
  	}else{
  		a[i].second += k;
  		cout<<"reached here"<<endl;
  	}
  	cout<<x<<"   -> ";
  	show(a);
  	// cout<<x<<" ";
  	// cout<<"vals of ans "<<ans<<endl;
  }
  cout<<endl;
  cout<<ans<<endl;
}