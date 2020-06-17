#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}


int main(){
	int t;
	cin>>t;
	// vi a;
	while(t--){
		int n;
		cin>>n;
		vi a(n);
		for(int i = 0; i < n; i++){
			cin>>a[i];
		}

		sort(a.begin(), a.end());
		for(int i = a.size() - 1; i >= 0; i--){
			cout<<a[i]<<" ";
		}
		cout<<endl;


	}
  

}














