//used graphs complcated it a lot

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int
#define vvi vector<vi>


void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

vvi check;
vi b;


class Graph 
{ 
    int V;    // No. of vertices 
  
    // Pointer to an array containing adjacency lists 
    list<int> *adj; 
  
    // A function used by DFS 
    void DFSUtil(int v, bool visited[]); 
public: 
    Graph(int V);   // Constructor 
    ~Graph(); 
    void addEdge(int v, int w); 
    void connectedComponents(); 
}; 
  
// Method to print connected components in an 
// undirected graph 
void Graph::connectedComponents() 
{ 
    // Mark all the vertices as not visited 
    bool *visited = new bool[V]; 
    for(int v = 0; v < V; v++) 
        visited[v] = false; 
  
    for (int v=0; v<V; v++) 
    { 
        if (visited[v] == false) 
        { 
            // print all reachable vertices 
            // from v 
            DFSUtil(v, visited); 
  
            // cout << "\n"; 
            check.push_back(b);
            b.clear();

        } 
    } 
    delete[] visited; 
} 
  
void Graph::DFSUtil(int v, bool visited[]) 
{ 
    // Mark the current node as visited and print it 
    visited[v] = true; 
    // cout << v << " "; 
    b.push_back(v);

  
    // Recur for all the vertices 
    // adjacent to this vertex 
    list<int>::iterator i; 
    for(i = adj[v].begin(); i != adj[v].end(); ++i) 
        if(!visited[*i]) 
            DFSUtil(*i, visited); 
} 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
Graph::~Graph() 
{ 
    delete[] adj; 
} 
  
// method to add an undirected edge 
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); 
    adj[w].push_back(v); 
} 


// vector<int> adj[1005];

bool comp(vi a, vi b){
	return (a.size() > b.size());
}

bool comp2(pair<char, int> a, pair<char, int> b){
	return a.second > b.second;
}

int main(){
  ios_base::sync_with_stdio(false);
  string c;
  cin>>c;
  int len = c.length();
  // int len = 7;
  vi primes(1005, 0);
  for(int i = 2; i*i<=1000; i++){
  	if(primes[i] == 0){
  		for(int j = i*i; j <= 1000; j+=i){
  			primes[j] = 1;
  		}
  	}
  }
  Graph adj(1005);

  for(int i = 2; i <= len; i++){
  	if(primes[i] == 0){
  		for(int j = i*2; j <= len; j+=i){
  			// cout<<"edge between "<<i<<" "<<j<<endl;
  			adj.addEdge(i, j);
  			adj.addEdge(j, i);
  		}
  	}
  }
  adj.connectedComponents();


  sort(check.begin(), check.end(), comp);
  vvi needed;
  for(int i = 0; i < check.size(); i++){
  	if(check[i][0] == 0) continue;
  	if(check[i][0] > len) continue;
  	vi ew;
  	for(int j = 0; j < check[i].size(); j++){
  		ew.push_back(check[i][j]);
  		// cout<<check[i][j]<<" ";
  	}
  	needed.push_back(ew);
  	// cout<<endl;
  }


  mii table;
  for(int i = 0; i < c.length(); i++){
  	table[c[i]] += 1;
  }
  vector<pair<char, int>> freq;
  for(auto i = table.begin(); i != table.end(); i++){
  	freq.push_back(pair<char, int>(i->first, i->second));
  }

  sort(freq.begin(), freq.end(), comp2);
  // for(int i=0; i < needed.size(); i++) show(needed[i]);
  // for(int i = 0; i < freq.size(); i++){
  // 	cout<<freq[i].first<<" "<<freq[i].second<<endl;
  // }  
  map<int, char> table2;
  for(int i = 0; i < needed.size(); i++){
  	for(int j = 0; j < freq.size(); j++){
  		// cout<<i<<" ";
  		// cout<<needed[i][0]<<" "<<freq[j].second<<endl;
  		if(freq[j].second >= needed[i].size()){
  			table2[i] = freq[j].first;
  			freq[j].second -= needed[i].size();
  			// continue;
  			break;
  		}
  	}
  }
  vector<char> ans(1005, '0');
  // cout<<"reached here"<<endl;
  for(auto i = table2.begin(); i != table2.end(); i++){
  	for(int j = 0; j < needed[i->first].size(); j++){
  		// cout<<needed[i->first][j]<<" ";
  		ans[needed[i->first][j]] = i->second;
  	}
  	// cout<<i->first<<" "<<i->second<<endl;
  }

  for(int i = 1; i <= len; i++){
  	if(ans[i] == '0'){
  		cout<<"NO"<<endl;
  		return 0;
  	}
  }
  cout<<"YES"<<endl;
  for(int i = 1; i <= len; i++){
  	cout<<ans[i];
  }
  cout<<endl;


}