#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<"\n";
    i++;
  }
  // cout<<"\n";
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<"\n";
  }
}


int main(){
  ios_base::sync_with_stdio(false);

  string s;
  cin>>s;
  vi a;
  vi b;
  for(int i = 0; i < s.length(); i++){
  	if(s[i] == 'l') a.push_back(i+1);
  	else b.push_back(i+1);
  }

  show(b);
  int i = a.size() - 1;
  while(i >= 0){
    cout<<a[i]<<"\n";
    i--;
  }
  // cout<<"\n";


}














