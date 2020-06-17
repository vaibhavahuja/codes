#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}
int cnt = 0;
void dfs(int start, vector<int> v[], vector<int> &visited){
	visited[start] = 1;
	cnt++;
	// cout<<"updating cnt"<<endl;
	// count++;
	for(int i = 0; i < v[start].size(); i++){
		if(visited[v[start][i]] == 0){
			dfs(v[start][i], v, visited);
		}
	}
}

int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){

	  int n, x;
	  cin>>n>>x;
	  
	  vector<int> G[n+1];
	  vi visited(n+1, 0);
	  for(int i = 0; i < n-1; i++){
	  	int a, b;
	  	cin>>a>>b;
	  	G[a].push_back(b);
	  	G[b].push_back(a);
	  }	
	  visited[x] = 1;
	  vi ans;
	  for(int i = 0; i < G[x].size(); i++){
	  	dfs(G[x][i], G, visited);
	  	ans.push_back(cnt);
	  	cnt = 0;
	  }
	  sort(ans.begin(), ans.end());

	  if(ans.size() == 1 || n == 1){
	  	cout<<"Ayush"<<endl;
	  }else{
	  	ll sum = 0;
	  	for(int i = 0; i < ans.size(); i++){
	  		sum += ans[i];
	  	}
	  	sum -= ans.size();
	  	int winner = 0;
	  	if(sum == 0){
	  		if(ans.size()%2 != 0){
	  			cout<<"Ayush"<<endl;
	  		}else cout<<"Ashish"<<endl;
	  	}else if(sum%2 == 0){
	  		//chance is of Ayush
	  		if((ans.size()-1)%2!=0){
	  			cout<<"Ashish"<<endl;
	  		}else{
	  			cout<<"Ayush"<<endl;
	  		}
	  	}else{ 
	  		//chance is of Ashish
	  		if((ans.size()-1)%2!=0){
	  			cout<<"Ayush"<<endl;
	  		}else{
	  			cout<<"Ashish"<<endl;
	  		}
	  	}
	  }
  }


  

}