// C++ program to print connected components in 
// an undirected graph 
#include<iostream> 
#include <list> 
#include <vector>
using namespace std; 
#define vi vector<int>
#define vvi vector<vi>

// Graph class represents a undirected graph 
// using adjacency list representation 

void show(vvi a){
	// cout<<"printing the ifnal answr"<<endl;
	for(int i = 0; i < a.size(); i++){

		for(int j = 0; j < a[i].size(); j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
vvi answer;
vi q;
class Graph 
{ 
	int V; // No. of vertices 

	// Pointer to an array containing adjacency lists 
	list<int> *adj; 

	// A function used by DFS 
	void DFSUtil(int v, bool visited[]); 
public: 
	Graph(int V); // Constructor 
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

			answer.push_back(q);
			q.clear();
		} 
	} 
	delete[] visited; 
} 

void Graph::DFSUtil(int v, bool visited[]) 
{ 
	// Mark the current node as visited and print it 
	visited[v] = true; 
	// vi q;
	q.push_back(v);
	// cout << v << " "; 

	// Recur for all the vertices 
	// adjacent to this vertex 
	list<int>::iterator i; 
	for(i = adj[v].begin(); i != adj[v].end(); ++i) 
		if(!visited[*i]) 
			DFSUtil(*i, visited); 
	// answer.push_back(q);
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

// Drive program to test above 
int main() 
{ 
	// Create a graph given in the above diagram 
	// Graph g(5); // 5 vertices numbered from 0 to 4 
	// g.addEdge(1, 0); 
	// g.addEdge(2, 3); 
	// g.addEdge(3, 4); 
	int n, m;
	cin>>n>>m;
	Graph g(n+1);
	while(m--){
		int a;
		cin>>a;
		if(a == 0) continue;
		int q;
		cin>>q;
		int e = a-1;
		// a--;
		while(e--){
			int p;
			cin>>p;
			g.addEdge(q, p);
			// cout<<"adding edge "<<q<<" "<<p<<endl;
		}
	}

	g.connectedComponents(); 
	// show(answer);
	vi finalAns(n+1, 0);
	for(int i = 0; i < answer.size(); i++){
		int qqq = answer[i].size();
		for(int j = 0; j < qqq; j++)
		finalAns[answer[i][j]] = qqq;
	}
	for(int i = 1; i <= n; i++){
		cout<<finalAns[i]<<" ";
	}
	cout<<endl;
} 
