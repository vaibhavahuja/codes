#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>
#define pii pair<int, int>
#define vp vector<pii>

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

  int n;
  cin>>n;
  vp a;
  for(int i = 0; i < n; i++){
  	pii e;
  	cin>>e.first;
  	e.second = (i+1);
  	a.push_back(e);
  }

  sort(a.begin(), a.end());
  vi c, d;
  int ew = a.size() - 1;

  while(ew>=0){
  	c.push_back(a[ew].second);
  	ew--;
  	if(ew < 0) break;
  	d.push_back(a[ew].second);
  	ew--;
  }

  cout<<c.size()<<endl;
  show(c);
  cout<<d.size()<<endl;
  show(d);
}