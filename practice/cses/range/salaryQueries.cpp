#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}
const int MAXN = 2e5;

// vi t[4*MAXN];
vector<multiset<int>> t(4*MAXN);
vi a(MAXN);

void build(int v, int tl, int tr){
	if(tl == tr){
		// t[v] = vi(1, a[tl]);
		t[v].insert(a[tl]);
		return;
	}
	int tm = (tl+tr)/2;
	build(v*2, tl, tm);
	build(v*2+1, tm+1, tr);
	t[v].insert(t[v*2].begin(), t[v*2].end());
	t[v].insert(t[v*2+1].begin(), t[v*2+1].end());


	// merge(t[v*2].begin(), t[v*2].end(), t[v*2+1].begin(), t[v*2+1].end(),
              // back_inserter(t[v]));
}

void update(int v, int tl, int tr, int pos, int new_val){
	t[v].erase(t[v].find(a[pos]));
	t[v].insert(new_val);
	if(tl!=tr){
		int tm = (tl+tr);
		if(pos <= tm){
			update(v*2, tl, tm, pos, new_val);
		}else{
			update(v*2+1, tm+1, tr, pos, new_val);
		}
	}else{
		a[pos] = new_val;
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  for(int i = 0; i < n; i++) cin>>a[i];
  cout<<"Value of A is "<<endl;
  for(int i = 0; i < n; i++) cout<<a[i]<<" ";
  cout<<endl;

  build(1, 0, n-1);
  update(1, 0, n-1, 0, 4);
  // for(int i = 0; i < 4*n; i++){
  // 	for(int j = 0; j < n; j++){
  // 		if(t[i].size()>0)cout<<t[i][j]<<" ";
  // 	}
  // 	if(t[i].size() > 0) cout<<endl;
  // }


  

}