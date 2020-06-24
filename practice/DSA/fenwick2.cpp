#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

struct fenwick{
	int n;
	vi bit;

	fenwick(int n){
		this->n = n;
		bit.assign(n, 0);
	}

	fenwick(vi a):fenwick(a.size()){
		for(int i = 0; i < a.size(); i++){
			add(i, a[i]);
		}
	}

	//add means to get all j such that g(j)<=i<=j 

	void add(int j, int delta){
		for(;j<n;j=(j|(j+1))){
			bit[j] += delta;
		}
	}

	int sum(int r){
		int res = 0;
		for(;r>=0;r=(r&(r+1)) - 1){
			res += bit[r];
		}
		return res;
	}
	int sum(int l, int r){
		return(sum(r) - sum(l-1));
	}


};


int main(){
  ios_base::sync_with_stdio(false);
  vi a = {1, 2, 3, 4};
  fenwick x(a);
  cout<<x.sum(1, 2)<<endl;
  x.add(1, 1);
  cout<<x.sum(1, 2)<<endl;



}