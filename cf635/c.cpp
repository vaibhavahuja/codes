//correct answer now

#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define pii pair<long long int, long long int>
#define vp vector<pii>
#define mii map<long long int, long long int>

void show(vi a){
	long long int i = 0;
	while(i < a.size()){
		cout<<a[i]<<" ";
		i++;
	}
	cout<<endl;
}



const long long int N = 2e6;

vi adj[N];

vi count1(N);

void numberOfNodes(long long int s, long long int e){
	count1[s] = 1;
	for(auto u = adj[s].begin(); u != adj[s].end(); u++){
		if(*u == e) continue;
		numberOfNodes(*u, s);

		count1[s] += count1[*u];
	}
}

vi level(N);
vi visited(N, 0);
void levels(long long int s){
	queue<long long int> q;
	q.push(s);
	level[s] = 0;
	visited[s] = 1;

	while(!q.empty()){
		long long int top = q.front();
		q.pop();
		for(auto u = adj[top].begin(); u != adj[top].end(); u++){
			if(visited[*u] == 0){
				q.push(*u);
				visited[*u] = 1;
				level[*u] = level[top] + 1;
			}
		}
	}

}
mii table;
// vi 
void answer(long long int a){
	// long long int ans = 0;
	vi answer(a, 0);
	vi visited(a, 0);
	queue<long long int> q;
	q.push(1);
	visited[1] = 1;
	while(!q.empty()){
		long long int s = q.front();
		q.pop();
		for(auto u = adj[s].begin(); u != adj[s].end(); u++){
			if(visited[*u] == 0){
				q.push(*u);
				visited[*u] = 1;
				if(table[s] != 1) answer[*u] = answer[s] + 1;
				else answer[*u] = answer[s];
			}
			
		}
	}
	long long int ans = 0;
	for(auto i = table.begin(); i != table.end(); i++){
		if(i->second == 1) ans += answer[i->first];
	}
	cout<<ans<<endl;

	// show(answer);


}




void addEdge(long long int a, long long int b){
	adj[a].push_back(b);
	adj[b].push_back(a);
}


int main(){
  ios_base::sync_with_stdio(false);

  //sort on basis of (level - children)
  long long int n, k;
  cin>>n>>k;
  long long int edge = n-1;
  while(edge--){
  	long long int a, b;
  	cin>>a>>b;
  	addEdge(a, b);
  }
  numberOfNodes(1, 0);
  // cout<<"below are children"<<endl;
  // show(count1);
  levels(1);
  // cout<<"below are levels"<<endl;
  // show(level);
  vp needed;

  for(long long int i = 1; i <= n; i++){
  	// cout<<i<<" "<<count1[i] - level[i]<<endl;
  	needed.push_back(pii(level[i] - count1[i], i));
  }

  sort(needed.begin(), needed.end());
  // for(long long int i = 0; i < needed.size(); i++){
  // 	cout<<needed[i].second<<" "<<needed[i].first<<endl;
  // }
  reverse(needed.begin(), needed.end());
  // vi x;

  for(long long int i = 0; i < k; i++){
  	// x.push_back(needed[i].second);
  	table[needed[i].second] = 1;
  }
  // show(x);
  answer(n+1);


  //now that i have x; need to prepare answer;





}