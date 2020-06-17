#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define miv map<int, vi>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(miv table){
	for(auto u = table.begin(); u != table.end(); u++){
		cout<<u->first<<" ";
		show(u->second);
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
      int n;
	  cin>>n;
	  vi a(n);
	  for(int i=0;i<n;i++)cin>>a[i];
	  miv table;
	  int e = 1;
	  // vi visited(n, 0);
	  vi m(n, 0);
	  vi q = {2,3,5,7,11,13,17,19,23,29,31};
	  for(int i = 0 ; i < n; i++){
	  	for(int j = 0; j < q.size(); j++){
	  		if(a[i]%q[j] == 0){
	  			table[q[j]].push_back(i);
	  			// m[i] = j+1;
	  			break;
	  		}
	  	}
	  }

	  // show(table); 
	  cout<<table.size()<<endl;
	  vi ans(n);
	  int ctr = 1;
	  for(auto i = table.begin(); i != table.end(); i++){
	  	for(int e = 0; e < i->second.size(); e++){
	  		ans[i->second[e]] = ctr;
	  	}
	  	ctr++;
	  }

	  show(ans);

  }
  


}