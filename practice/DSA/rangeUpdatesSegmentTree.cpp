#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

vi t(100);

void build(vi a, int v, int tl, int tr){
	if(tl == tr){
		t[v] = a[tl];
		return;
	}

	int tm = (tl+tr)/2;
	build(a, v*2, tl, tm);
	build(a, v*2+1, tm+1, tr);
	t[v] = 0;
}


void update(int v, int tl, int tr, int l, int r, int add){
	if(l > r) return;

	if(l == tl && r == tr){
		t[v] += add;
		return;
	}

	int tm = (tl + tr)/2;
	update(v*2, tl, tm, l, min(r, tm), add);
	update(v*2+1, tm+1, tr, max(l, tm+1), r, add);
}


int get(int v, int tl, int tr, int pos){
	if(tl == tr) return t[v];
	int tm = (tl+tr)/2;

	if(pos <= tm){
		return t[v] + get(v*2, tl, tm, pos);
	}else return t[v] + get(v*2+1, tm+1, tr, pos);
}



int main(){
  ios_base::sync_with_stdio(false);

  vi a = {1, 1, 3, 4, 5};
  build(a, 1, 0, a.size()-1);

  update(1, 0, a.size()-1, 1, 4, 4);
  update(1, 0, a.size()-1, 1, 4, 2);
  update(1, 0, a.size()-1, 2, 4, 2);



  for(int i = 0; i < 20; i++){
  	cout<<t[i]<<" ";
  }
  cout<<endl;
  cout<<get(1, 0, a.size()-1, 3)<<endl;
  cout<<get(1, 0, a.size()-1, 1)<<endl;

  

}