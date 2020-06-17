#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<"";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  	  int n = 9;
	  string t = "";
	  vs check;
	  while(n--){
	  	string s;
	  	cin>>s;
	  	check.push_back(s);
	  }
	  vector<vi> ans;
	  for(int i = 0; i < check.size(); i++){
	  	vi p;
	  	for(int j  = 0; j < 9; j++){
	  		p.push_back(check[i][j] - '0');
	  	}
	  	ans.push_back(p);
	  }

	   // for(int i= 0; i < ans.size(); i++) show(ans[i]);
	  vi first = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	  vi second = {0, 4, 8, 1, 3, 7, 2, 5, 6};

	  for(int i = 0; i < first.size(); i++){
	  	ans[first[i]][second[i]] += 1;
	  	if(ans[first[i]][second[i]] == 10) ans[first[i]][second[i]] = 1;
	  }

	  for(int i= 0; i < ans.size(); i++) show(ans[i]);


  }
  

}


