
//this is dp very poor attempt to solve it greedilyw
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
// #include <pair>
#include <map>

#define pii pair<int, int>
#define vi vector<int>
#define vp vector<pii>

#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<","<<a[i].second<<endl;
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  vp a;

  for(int i = 0; i < n; i++){
  	int e;
  	cin>>e;
  	a.push_back(pii(e, i+1));
  }
  sort(a.begin(), a.end());

  show(a);
  mii visited;

  // vp ans;

  for(int i = a.size() - 1; i>=0; i--){
	int elem = a[i].first;
	int curPos = a[i].second;


	int swapTo = -1, ans = -1; 
	for(int j = 0; j < a.size(); j++){
		if(ans < abs(j+1 - curPos) && visited[j+1] == 0){
			ans = abs(j+1 - curPos);
			swapTo = j+1;
		}
	}
	cout<<elem<<" "<<curPos<<" "<<swapTo<<endl;

	a[i].second = abs(a[i].second - swapTo);
	visited[swapTo] = 1;
  }

  show(a);
  int ans2 =0;
  for(int i = 0; i < a.size(); i++){
  	ans2 += a[i].first*a[i].second;
  }


  cout<<ans2<<endl;

}