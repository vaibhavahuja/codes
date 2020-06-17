#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>
#define miv map<int, vi>
#define mib map<int, bool>
#define si stack<int>
#define vvi vector<vi>

mii values;
mib reverseVisited;
miv rev;
si lastVisited;
mib visited;
miv cities;

void dfs(int init){
	visited[init] = true;
	for(int i = 0; i < cities[init].size(); i++){
		if(!visited[cities[init][i]]){
			dfs(cities[init][i]);	
		}
	}
	lastVisited.push(init);
}

void dfs2(int init, long long int &mini, long long int &ww){
	reverseVisited[init] = true;
	if(mini > values[init]) mini = values[init], ww = 1;
	else if(mini == values[init]) ww++;

	for(int i = 0; i < rev[init].size(); i++){
		if(!reverseVisited[rev[init][i]]) dfs2(rev[init][i], mini, ww);
	}
}




int main(){
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;
	// mii values;
	for(int i = 1; i <= n; i++){
		int w;
		cin>>w;
		values[i] = w;
	}
	// miv cities;
	// mib visited;
	int m;
	cin>>m;
	while(m--){
		int u, v;
		cin>>u>>v;
		cities[u].push_back(v);
		rev[v].push_back(u);
		visited[u] = false;
		reverseVisited[v] = false;
	}
	// si lastVisited;

	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			dfs(i);
		}
	}

	long long int minMoney = 0, numWays = 1;

	while(!lastVisited.empty()){
		long long int po = 1000000007;
		int q = lastVisited.top();
		lastVisited.pop();
		if(!reverseVisited[q]){
			long long int ww = 0;
			dfs2(q, po, ww);
			minMoney += po;
			if(ww > 0) numWays *= ww;
			numWays %= 1000000007;
		}
	}

	cout<<minMoney<<" "<<numWays<<endl;
}
