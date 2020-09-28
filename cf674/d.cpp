#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define pii pair<ll, ll>
#define vp vector<pii>
#define vs vector<string>
#define mii map<ll, ll>
void show(auto a){for(ll i=0;i<a.size();i++){cout<<a[i].first<<" "<<a[i].second<<endl;}cout<<endl;}


vp finalArray;
ll findSubarraySum(vi arr, ll sum) 
{ 
	ll n = arr.size();

    unordered_map<ll, ll> prevSum; 
    map<ll, vi> extra;
  
    ll res = 0; 
    ll currsum = 0; 
  
    for (ll i = 0; i < n; i++) { 
        currsum += arr[i]; 
        if (currsum == sum) {
                    res++; 
                    finalArray.push_back(pii(0, i));
                    // cout<<0<<" "<<i<<endl;
            }
        if (prevSum.find(currsum - sum) != prevSum.end()){
            res += (prevSum[currsum - sum]); 
            for(ll j = 0; j < extra[currsum-sum].size();j++){
                finalArray.push_back(pii(extra[currsum][j], i));

            }
        } 

        prevSum[currsum]++;
        extra[currsum].push_back(i+1); 
    } 
  
    return res; 
} 

int main(){
  ios_base::sync_with_stdio(false);
  ll n; cin>>n; vi a(n); for(ll i = 0; i < n; i++) cin>>a[i];

  findSubarraySum(a, 0);
  sort(finalArray.begin(), finalArray.end());
  // show(finalArray);
  ll ans = 0;
  ll i = 1;
  ll cur = 0;
  while(i < finalArray.size()){
  	if(finalArray[i].first >= finalArray[cur].second){ 
  		ans++;
  		cur = i;
  	}
  	i++;
  }
  if(finalArray.size() >= 1)ans++;
  cout<<ans<<endl;
}