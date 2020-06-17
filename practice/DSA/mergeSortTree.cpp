#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vector<int> t[4*100];

//we save the entire subarrays in each vertex



void build(vi a, int v, int tl, int tr){
	if(tl == tr){
		t[v] = vi(1, a[tl]);
		return;
	}

	int tm = (tl+tr)/2;
	build(a, v*2, tl, tm);
	build(a, v*2+1, tm+1, tr);
	merge(t[v*2].begin(), t[v*2].end(), t[v*2+1].begin(), t[v*2+1].end(), back_inserter(t[v]));
}

//query find the minimum number greater than or equal to x.

int query(int v, int tl, int tr, int l, int r, int x){
	if(l > r) return 1e9;
	if(l == tl && r == tr){
		auto pos = lower_bound(t[v].begin(), t[v].end(), x);
		if(pos != t[v].end()){
			return *pos;
		}
		return 1e9;
	}

	int tm = (tl + tr)/2;
	return min(query(v*2, tl, tm, l, min(r, tm), x), query(v*2+1, tm+1, tr, max(l, tm+1), r, x));
}


int main(){
  ios_base::sync_with_stdio(false);

  vi a = {6,2,4,5,3,1};
  build(a, 1, 0, a.size()-1);
  // for(int i = 0; i < 400; i++){
  // 	if(t[i].size() > 0){
  // 		show(t[i]);
  // 	}
  // }
  int ew = 5;
  while(ew--){
	  int p;
	  cin>>p;
	  cout<<query(1, 0, a.size() - 1, 4, 4, p)<<endl;
  }

}