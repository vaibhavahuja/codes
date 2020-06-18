#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

//segment tree that stores maximum of a range
vi a(1e6+5), t(4e6+5);

void build(int v, int tl, int tr){
	if(tl == tr) t[v] = a[tl];
	else{
		int tm = (tl+tr)/2;
		build(v*2, tl, tm);
		build(v*2+1, tm+1, tr);
		t[v] = max(t[v*2], t[v*2+1]);
	}
}

int get_first(int v, int l, int r, int x){
	if(t[v] < x) return -1;
	if(l == r) return l;
	int tm = (l+r)/2;
	if(t[v*2] >= x){
		return get_first(v*2, l, tm, x);
	}else if(t[v*2+1] >= x){
		return get_first(v*2+1, tm+1, r, x);
	}
}


void update(int v, int tl, int tr, int pos, int val){
	if(tl == tr){
		t[v] -= val;
	}else{
		int tm = (tl+tr)/2;
		if(pos <= tm){
			update(v*2, tl, tm, pos, val);
		}else{
			update(v*2+1, tm+1, tr, pos, val);
		}
		t[v] = max(t[v*2+1], t[v*2]);
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  int n, m;
  cin>>n>>m; for(int i = 0; i < n; i++) cin>>a[i];
  //queries below
  vi rooms(m);
  for(int i = 0; i < m; i++){
  	cin>>rooms[i];
  }

  build(1, 0, n-1);
  // for(int i = 0; i < 4*n; i++){ cout<<t[i]<<" ";}
  // cout<<endl;
  // cout<<"Below answer"<<endl;
  for(int i = 0; i < m; i++){
  	int pos = get_first(1, 0, n-1, rooms[i]);
  	cout<<pos+1<<" ";
  	if(pos != -1) update(1, 0, n-1, pos, rooms[i]);
  }
  cout<<endl;
}