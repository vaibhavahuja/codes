//got AC :)

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<(char)('a' + a[i].first)<<" "<<(char)(a[i].second + 'a')<<endl;
    i++;
  }
}

vi adj[1000];
bool visited[100] = {false};

void dfs(int a){
  visited[a] = true;
  for(int i = 0; i < adj[a].size(); i++){
		if(!visited[adj[a][i]]){
			dfs(adj[a][i]);
		}
	}

  
	// return false;
}
bool isPath(int a, int b){
  for(int i = 0; i < 100; i++) visited[i] = false;
  dfs(a);
  return visited[b];
}
void addEdge(int a, int b){
	adj[a].push_back(b);
	adj[b].push_back(a);
}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  string a, b;
  cin>>a>>b;
	
  int ans = 0;
  vp check;
  for(int i = 0; i < a.size(); i++){
    if(a[i] != b[i]){
      if(!isPath(a[i] - 'a', b[i] - 'a')){
        ans++;
        check.push_back(pii(a[i] - 'a', b[i] - 'a'));
        addEdge(a[i]-'a', b[i]-'a');
      }
    }
  }

  cout<<ans<<endl;
  show(check);
}