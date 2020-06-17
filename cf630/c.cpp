#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
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

int answer(string a){
	mii table;
	for(int i = 0; i < a.length(); i++){
		table[a[i]] += 1;
	}
	int maxi = -1;
	for(auto i = table.begin(); i != table.end(); i++){
		maxi = max(maxi, i->second);
	}
	return maxi;
}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  	  int n, k;
	  cin>>n>>k;
	  vs a;
	  string s;
	  cin>>s;
	  for(int i = 0; i < n; i+=k){
	  	string p = "";
	  	for(int j = i; j < i+k; j++){
	  		p += s[j];
	  	}
	  	a.push_back(p);
	  }
	  // show(a);
	  int ans = 0;
	  int i = 0, j = k-1;
	  while(i <= j){
	  	string temp = "";
	  	for(int k = 0; k < a.size(); k++){
	  		if(i != j){
	  			temp += a[k][i];
	  			temp += a[k][j];
	  		}else if(i == j) temp += a[k][j];
	  	}	
	  	i++;
	  	j--;
	  	ans +=(temp.length() - answer(temp));
	  }

	  cout<<ans<<endl;

  }
  
}