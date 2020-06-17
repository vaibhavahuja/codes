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
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  int n, p;
  cin>>n>>p;
  vp in, out;
  mii table1, table2;
  while(p--){
  	int a, b, c;
  	cin>>a>>b>>c;
  	table1[a] = c;
  	table2[b] = c;
  	if(table1.find(b) != table1.end()){
  		table1.erase(b);
  		table2.erase(b);
  	}
  	if(table2.find(a) != table2.end()){
  		table1.erase(a);
  		table2.erase(a);
  	}
  }
  for(auto i = table1.begin(); i != table1.end(); i++){
  	out.push_back(pii(i->second, i->first));
  }
  for(auto i = table2.begin(); i != table2.end(); i++){
  	in.push_back(pii(i->second, i->first));
  }
  
  sort(in.begin(), in.end());
  sort(out.begin(), out.end());

  show(in);
  show(out);
  cout<<in.size()<<endl;
  if(in.size()==0) return 0;
  mii table;
  vp out1, out2;
  for(int i=0; i<in.size();i++){
  	out1.push_back(pii(out[i].second, in[i].second));
  	table[out[i].second] = min(out[i].first, in[i].first);
  }

  sort(out1.begin(), out1.end());
  for(int i = 0; i < out1.size(); i++){
  	cout<<out1[i].first<<" "<<out1[i].second<<" "<<table[out1[i].first]<<endl;
  }
}