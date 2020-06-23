#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

struct FenwickTree{
	vi bit; 	//binary indexed tree
	int n;
	FenwickTree(int n){
		this->n = n;
		bit.assign(n, 0);
	}
	FenwickTree(vi a) : FenwickTree(a.size()){
		for(auto i = 0; i < a.size(); i++){
			add(i, a[i]);
		}
	}

	void showVec(){
		show(bit);
	}

	int sum(int r){
		int ret = 0;
		for(;r>=0;r=(r&(r+1)) - 1){
			ret += bit[r];
		}
		return ret;
	}

	int sum(int l, int r){
		return sum(r) - sum(l-1);
	}

	void add(int idx, int delta){
		for(; idx<n; idx=(idx|(idx+1))){
			bit[idx] += delta;
		}
	}
};



int main(){
  ios_base::sync_with_stdio(false);
  vi a = {3, 6, 3, -12, 1};

  FenwickTree x(a);
  cout<<x.sum(0, 2)<<endl;
  x.add(1, 5-a[1]);

  cout<<x.sum(0, 2)<<endl;

  x.showVec();
}

//I think I understand fenwick tree