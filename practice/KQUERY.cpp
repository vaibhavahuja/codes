#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi t[4*1000000], a(1e6);


//building a merge sort tree

void build(int v, int tl, int tr){
	if(tl == tr){
		t[v] = vi(1, a[tl]);
		return;
	}
	int tm = (tl+tr)/2;
	build(v*2, tl, tm);
	build(v*2+1, tm+1, tr);
	merge(t[v*2].begin(), t[v*2].end(), t[v*2+1].begin(), t[v*2+1].end(), back_inserter(t[v]));
}


//returns position of k;
int get(int v, int tl, int tr, int l, int r, int k){
	if(l > r){
		return 1e9;
	}
	if(l == tl && r == tr){
		int pos = lower_bound(t[v].begin(), t[v].end(), k) - t[v].begin();
		if(pos != t[v].size()) return pos;
		return 1e9;
	}

	int tm = (tl+tr)/2;

	return min(get(v*2, tl, tm, l, min(r, tm), k),  get(v*2+1, tm+1, tr, max(l, tm+1), r, k));
}



int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n; for(int i = 0; i < n; i++) cin>>a[i];
  build(1, 0, n-1);

  // for(int i = 0; i < 20; i++){
  // 	if(t[i].size() > 0) show(t[i]);
  // }
  // for(int i = 0; i < n; i++) cout<<a[i]<<" ";
  int m;
  cin>>m;
  while(m--){
  	int l, r, k;
  	cin>>l>>r>>k;
  	// // if(get)
  	// if(r-l-get
  	// 	)
  	cout<<max(0, r-l-get(1, 0, n-1, l-1, r-1, k))<<endl;
  }
  // cout<<get(1, 0, n-1, 1, 3, 1);
  

}