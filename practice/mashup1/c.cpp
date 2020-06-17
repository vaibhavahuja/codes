#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void numFramed(vi a){
	for(int i = 0; i < a.size(); i++){
		// int sum = 0;
		for(int j = i; j < a.size(); j++){
			// sum += a[j];
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  vi a = {1, 2, 3};
  numFramed(a);
  // do{
  // 	show(a);
  // }while(next_permutation(a.begin(), a.end()));
}