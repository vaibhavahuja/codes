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

int answer(int n, int s, vi a){
	mii table;

	for(int i = 0; i < a.size(); i++){
		table[a[i]] = 0;
	}

	int ans = 1e6;

	int stair = s;
	while(stair <= n){
		if(table.find(stair) != table.end()){
			stair++;
		}else{
			ans = min(ans, abs(stair-s));
			break;
		}
	}

	stair = s;

	while(stair >= 1){
		if(table.find(stair) != table.end()){
			stair--;
		}else{
			ans = min(ans, abs(stair-s));
			break;
		}
	}

	return ans;
}






int main(){
	int t;
	cin>>t;
	while(t--){
		int n, s, k;
		cin>>n>>s>>k;
		vi a;
		while(k--){
			int w;
			cin>>w;
			a.push_back(w);
		}

		cout<<answer(n, s, a)<<endl;

	}

	
}














