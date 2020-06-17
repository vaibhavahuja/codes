#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define pp pair<pii, pii>
#define mpi map<pp, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  mpi table;
  string s;
  cin>>s;
  pii init(0, 0);
  pii init2(0, 0);
  int ans = 0;
  pii pre;
  // table[init] = 1;
  for(int i = 0; i < s.length(); i++){

  	if(s[i] == 'N'){
  		init2.second += 1;
  	}else if(s[i] == 'S'){
  		init2.second -= 1;
  	}else if(s[i] == 'W'){
  		init2.first -= 1;
  	}else if(s[i] == 'E'){
  		init2.first += 1;
  	}
  	pp q;

  	if((table.find(pp(init, init2)) != table.end() )|| ((table.find(pp(init2, init)) != table.end()))){
		ans++;
	}else{
		table[pp(init, init2)] = 1;
		ans += 5;
	}
	// pre = init2;
	init = init2;
  }
  cout<<ans<<endl;
}
}