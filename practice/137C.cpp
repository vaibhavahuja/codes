#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>
#define pii pair<long long int, long long int>
#define vp vector<pii>

void show(vp a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
  cout<<endl;
}

int main(){
	long long int n;
	cin>>n;
	vp arr;
	while(n--){
		pii pair;
		cin>>pair.first>>pair.second;
		arr.push_back(pair);
	}

	sort(arr.begin(), arr.end());
	long long int ans = 0;
	long long int mini = arr[0].first;
	long long int maxi = arr[0].second;
	for(long long int i = 1; i < arr.size(); i++){
		maxi = max(maxi, arr[i].second);
		if(arr[i].second < maxi) ans++;
	}
	// show(arr);

	cout<<ans<<endl;

}














