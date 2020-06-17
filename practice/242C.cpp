#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>
#define pii pair<int, int>
#define mpi map<pii, int>
#define qp queue<pii>

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
  pii init, final;
  vi dirx = {0, 1, 1, 1, 0, -1, -1, -1};
  vi diry = {1, 1, 0, -1, -1, -1, 0, 1};

  cin>>init.first>>init.second>>final.first>>final.second;
  mpi table;
  int n;
  cin>>n;
  while(n--){
  	int r, a, b;
  	cin>>r>>a>>b;
  	for(int j = a; j<=b; j++) table[pii(r, j)] = -1;
  }
  
  qp q;
  q.push(init);
  table[init] = 0;

  while(!q.empty()){
  	pii point = q.front();
  	q.pop();
  	for(int i = 0; i < dirx.size(); i++){
  		pii v = pii(point.first + dirx[i], point.second+diry[i]);
  		if(table.count(v) && (table[v] == -1)){
  			q.push(v);
  			table[v] = table[point] + 1;
  		}
  	}
  }
  cout<<table[final]<<endl;

	


}