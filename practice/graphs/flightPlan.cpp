//got WA on 2 cases idk why 

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<15;i++){cout<<a[i]<<" ";}cout<<endl;}

//Node value, parent it is coming from
vector<int> G[1005];
vi parent(1005, 1e9+5);
vi minTime(1005, 1e9+5);
vector<bool> visited(1005, false);
int main(){
  ios_base::sync_with_stdio(false);
  int n, m, t, c; cin>>n>>m>>t>>c;
  while(m--){
  	int u, v; cin>>u>>v;
  	G[u].push_back(v);
  	G[v].push_back(u);
  }
  int x, y; cin>>x>>y;
  int timer = 0;
  
  //I start at x 
  parent[x] = 0; //will trackback until parent 0 is found
  minTime[x] = 0; //since i am starting at x
  visited[x] = true;
  queue<int> Q;
  Q.push(x);
  int re = 0;
  while(!Q.empty()){

  	int top = Q.front();
  	// cout<<top<<" timer -> "<<timer<<endl;
  	Q.pop();
  	int temp = timer/t;
	if(temp%2!=0){
		//can not fly so increment
		// cout<<"can not fly at time "<<timer<<endl;
		re = ((temp + 1)*t - timer);
		// cout<<"incrementing by "<<re<<endl;
		timer += re;
	}
	//all Can fly
	// timer += c;
  	for(auto v : G[top]){
  		// I can fly so fly everyone
  		if(minTime[top] + c + re < minTime[v] && !visited[v]){
  			visited[v] = true;
  			minTime[v] = minTime[top] + c + re;
  			parent[v] = top;
  			Q.push(v);
  		}else if(minTime[top] + c + re == minTime[v] && !visited[v]){
  			parent[v] = min(parent[v], top);
  		}
  	}
  	timer += c;
  	re = 0;
  }
  // show(minTime);
  // show(parent);
  vi answer;
  answer.push_back(y);
  while(parent[y] != 0){
  	y = parent[y];
  	answer.push_back(y);
  }
  reverse(answer.begin(), answer.end());
  cout<<answer.size()<<endl;
  for(int i = 0; i < answer.size(); i++) cout<<answer[i]<<" ";
  cout<<endl;

}