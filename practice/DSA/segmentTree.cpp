#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}
vi t(4*100);

//segment trees build; sum of range and update :)

void build(vi a, int v, int tl, int tr){
	if(tl == tr){
		t[v] = a[tl];
		return;
	}

	int tm = (tl + tr)/2;

	//recursively building left and right
	build(a, v*2, tl, tm);
	build(a, v*2+1, tm+1, tr);

	//vertex node is sum of left child and right child
	t[v] = t[v*2] + t[v*2+1];
}


int sum(int v, int tl, int tr, int l, int r){
	if(l > r) return 0;

	//if leaf node
	if(tl == l && tr == r) return t[v];

	int tm = (tl+tr)/2;
	return sum(v*2, tl, tm, l, min(r, tm)) + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}


void update(int v, int tl, int tr, int pos, int new_val){
	if(tl == tr) {t[v] = new_val; return;}
	int tm = (tl+tr)/2;
	if(pos <= tm){
		update(v*2, tl, tm, pos, new_val);
	}else {
		update(v*2+1, tm+1, tr, pos, new_val);
	}
	t[v] = t[v*2] + t[v*2+1];
}



int main(){
  ios_base::sync_with_stdio(false);
  //need to store at max 4n 
  int n;
  cin>>n;
  vi a(n); for(int i = 0; i < n; i++) cin>>a[i];
  build(a, 1, 0, n-1);
  for(int i = 0; i < 4*n; i++) cout<<t[i]<<" ";
  	
  cout<<endl;
  show(a);
  cout<<sum(1, 0, n-1, 2, 4)<<endl;;
  update(1, 0, n-1, 4, 8);
  cout<<sum(1, 0, n-1, 2, 4)<<endl;;

  for(int i = 0; i < 4*n; i++) cout<<t[i]<<" ";


}