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
    cout<<a[i].first<<" "<<a[i].second<<",";
    i++;
  }
  cout<<endl;
}

vp findSubArrays(vi a, int n) 
{ 
    unordered_map<int, vector<int> > table; 
    vp out; 
    int S = 0;    
    for (int i = 0; i < n; i++) 
    { 
        S += a[i]; 
    	 if (S == 0) 
   	         out.push_back(make_pair(0, i)); 
   
        if (table.find(S) != table.end()) 
        { 
   
            vector<int> vc = table[S]; 
            for (auto it = vc.begin(); it != vc.end(); it++) 
                out.push_back(make_pair(*it + 1, i)); 
        } 
        table[S].push_back(i); 
    } 
    return out; 
} 

int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  vi a(n);
  for(int i = 0; i < n; i++) cin>>a[i];

  vp out = findSubArrays(a, n);
  // cout<<out.size()<<endl;
  show(out);

  // mii table;
  // for(int i = 0; i < out.size(); i++){
  // 	table[out[i].second-out[i].first+1] += 1;
  // }

  // for(auto i = table.begin(); i != table.end(); i++) cout<<i->first<<" "<<i->second<<endl;




}