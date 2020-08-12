#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=1;i<a.size();i++){cout<<a[i].first+1<<" "<<a[i].second+1<<endl;}}

int main(){
  ios_base::sync_with_stdio(false);

  int n, m, x, y;
  cin>>n>>m>>x>>y;

  int xx = x-1, yy = y-1;

  int arr[n][m]; for(int i = 0; i < n; i++){for(int j = 0; j < m; j++) arr[i][j] = 0;}
  
  vp ans;
  map<pii, int> table;
  ans.push_back(pii(xx, yy));
  while(yy>0){
    if(yy == 0) break;
    if(table.find(pii(xx, yy)) == table.end()){
      ans.push_back(pii(xx, yy));
      table[pii(xx, yy)]++;
    }
    yy--;
  }
  while(yy < m){
    if(table.find(pii(xx, yy)) == table.end()){
      ans.push_back(pii(xx, yy));
      table[pii(xx, yy)]++;
    }
    yy++;
  }
  
  int lastRow = ans[ans.size()-1].first;
  int lastCol = ans[ans.size()-1].second;
  bool right;
  if(lastCol == m-1) right = true;
  else right = false;

  //go up
  int we = xx;
  while(xx > 0){
    xx--;
    if(xx < 0) break;
    if(right){
      for(int i = m-1; i >= 0; i--){
      	if(table.find(pii(xx, i)) == table.end()){
	      ans.push_back(pii(xx, i));
	      table[pii(xx, i)]++;
	    }
      }
    }else{
      for(int i = 0; i < m; i++){
        if(table.find(pii(xx, i)) == table.end()){
	      ans.push_back(pii(xx, i));
	      table[pii(xx, i)]++;
	    }
      }
    }
    lastCol = ans[ans.size()-1].second;
    if(lastCol == m-1) right = true;
    else right = false;
  }
  xx = we;
  // cout<<we<<endl;
  while(xx < n-1){
    xx++;
    if(xx == n) break;
    if(right){
      for(int i = m-1; i >= 0; i--){
        if(table.find(pii(xx, i)) == table.end()){
	      ans.push_back(pii(xx, i));
	      table[pii(xx, i)]++;
	    }
      }
    }else{
      for(int i = 0; i < m; i++){
        if(table.find(pii(xx, i)) == table.end()){
	      ans.push_back(pii(xx, i));
	      table[pii(xx, i)]++;
	    }
      }
    }
    lastCol = ans[ans.size()-1].second;
    if(lastCol == m-1) right = true;
    else right = false;

  }
  show(ans);
}