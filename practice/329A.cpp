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
    cout<<a[i].first<<" "<<a[i].second<<endl;;
    i++;
  }
  // cout<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  int arr[n][200];
  for(int i = 0; i < n; i++){
  	string s;
  	cin>>s;
  	for(int j = 0; j < s.length(); j++){
  		arr[i][j] = (s[j] == 'E')?0:1;
  	}
  }

  vp rows;
  int rowC = 0;
  for(int i = 0; i < n; i++){
  	for(int j = 0; j < n; j++){
  		if(arr[i][j] == 1) {rowC++; rows.push_back(pii(i+1, j+1)); break;}
  	}
  }

  vp cols;
  int colC = 0;
  for(int i = 0; i < n; i++){
  	for(int j = 0; j < n; j++){
  		if(arr[j][i] == 1) {colC++; cols.push_back(pii(j+1, i+1)); break;}
  	}
  }

  if(rowC == n){
  	show(rows);
  }else if(colC == n){
  	show(cols);
  }else cout<<-1<<endl;
  // cout<<rowC<<" "<<colC<<endl;

}