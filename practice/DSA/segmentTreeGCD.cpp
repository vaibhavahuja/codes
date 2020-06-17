#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int


vi t(100);
// build
// getRange
// update

void build(vi a, int v, int tl, int tr){
	if(tl == tr){
		t[v] = a[tl];
		return;
	}
	int tm = (tl+tr)/2;

	build(a, v*2, tl, tm);
	build(a, v*2+1, tm+1, tr);

	t[v] = __gcd(t[v*2], t[v*2+1]);
}

int gcdRange(int v, int tl, int tr, int l, int r){
	if(l > r){
		return 1;
	}

	if(tl == l && tr == r){
		return t[v];
	}
	
	int tm = (tl+tr)/2;

	return __gcd(gcdRange(v*2, tl, tm, l, min(r, tm)), gcdRange(v*2+1, tm+1, tr, max(tm+1, l), r));
}

void update(int v, int tl, int tr, int pos, int new_val){
	if(tl == tr){
		t[v] = new_val; return;
	}
	int tm = (tl+tr)/2;
	if(pos <= tm){
		update(v*2, tl, tm, pos, new_val);
	}else{
		update(v*2+1, tm+1, tr, pos, new_val);
	}

	t[v] = __gcd(t[v*2],t[v*2+1]);
}






int main(){
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
  


}