#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<char, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

int ans(string a){
	if(a.size() == 2){
		if(a[0] == a[1]) return 0;
		else return 1;
	}
	mii table;
	for(int i = 0; i < a.size(); i++){
		table[a[i]] += 1;
	}
	int q = table.size();
	if(q == 1){
		return 0;
	}else if(q == 2){
		auto i = table.begin();
		if(i->second == 2) return 0;
		else return 1;
	}else if(q == 4) return 2;
	else if(q == 3){
		if(a[0] == a[1]) return 2;
		else return 1;
	}
}


int main(){
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  string ac, bc;
  cin>>ac>>bc;
  vector<char> a, b;
  a.push_back('0');
  b.push_back('0');

  for(int i = 0; i < n; i++){
  	a.push_back(ac[i]);
  	b.push_back(bc[i]);
  }
  
  vs strings;
  int ew = (n%2 == 0)?n/2:n/2+1;
  for(int i = 1; i <= ew; i++){
  	string s = "";
  	if(n-i+1 == i){
  		s += a[i];
  		s += b[i];
	  	strings.push_back(s);

  		continue;

  	}
  	s += a[i];
  	s += a[n-i+1];
  	s+= b[n-i+1]; 
  	s+= b[i];
  	strings.push_back(s);
  }
  int finalAns = 0;
  for(int i =0 ; i < strings.size(); i++){
  	finalAns += ans(strings[i]);
  }
  // show(strings);
  cout<<finalAns<<endl;

}