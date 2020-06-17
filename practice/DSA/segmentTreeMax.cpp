#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int
void show(vi a){for(int i = 0; i < a.size(); i++) {cout<<a[i]<<" ";} cout<<endl;}
vp t(4*100);
//pairs will have number of occurences and maximum

pii combine(pii a, pii b){
	if(a.first > b.first){
		return a;
	}
	if(b.first > a.first) return b;

	return pii(a.first, a.second + b.second);
}

void build(vi a, int v, int tl, int tr){
	if(tl == tr){
		t[v] = pii(a[tl], 1);
		return;
	}
	int tm = (tl+tr)/2;
	build(a, v*2, tl, tm);
	build(a, v*2+1, tm+1, tr);

	t[v] = combine(t[v*2],t[v*2+1]);
}

pii getMax(int v, int tl, int tr, int l, int r){
	if(l > r) return pii(-1e9, 0);
	if(l == tl && r == tr) return t[v];
	int tm = (tl + tr)/2;
	return combine(getMax(v*2, tl, tm, l, min(r, tm)), getMax(v*2+1, tm+1, tr, max(l, tm+1), r));
}

void update(int v, int tl, int tr, int pos, int new_val){
	if(tl == tr){
		t[v] = pii(new_val, 1);
		return;
	}
	int tm = (tl+tr)/2;

	if(tm <= pos){
		update(v*2, tl, tm, pos, new_val);
	}else{
		update(v*2+1, tm+1, tr, pos, new_val);
	}
	t[v] = combine(t[v*2], t[v*2+1]);
}

int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];

  build(a, 1, 0, n-1);
  show(a);

  cout<<getMax(1, 0, n-1, 0, 2).first<<endl;
  update(1, 0, n-1, 2, 9);
  cout<<getMax(1, 0, n-1, 0, 2).first<<endl;

  

}