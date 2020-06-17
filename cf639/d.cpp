// C++ Program to count islands in boolean 2D matrix 
#include <bits/stdc++.h> 
using namespace std; 
#define vs vector<string>
#define ROW 1002
#define COL 1002 

void show(vs a){
	int i = 0;
	while(i < a.size()){
		cout<<a[i]<<endl;
		i++;
	}
	cout<<endl;
}
// int ROW = 1000;
// int COL = 1000;
// A function to check if a given 
// cell (row, col) can be included in DFS 
int isSafe(int M[][COL], int row, int col, 
		bool visited[][COL], int tcol, int trow) 
{ 
	// row number is in range, column 
	// number is in range and value is 1 
	// and not yet visited 
	return (row >= 0) && (row < trow) && (col >= 0) && (col < tcol) && (M[row][col] && !visited[row][col]); 
} 

// A utility function to do DFS for a 
// 2D boolean matrix. It only considers 
// the 8 neighbours as adjacent vertices 
void DFS(int M[][COL], int row, int col, 
		bool visited[][COL], int tcol, int trow) 
{ 
	// These arrays are used to get 
	// row and column numbers of 8 
	// neighbours of a given cell 
	static int rowNbr[] = { 0, 1, 0, -1 }; 
	static int colNbr[] = { 1, 0, -1, 0 }; 

	// Mark this cell as visited 
	visited[row][col] = true; 

	// Recur for all connected neighbours 
	for (int k = 0; k < 4; ++k) 
		if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited, tcol, trow)) 
			DFS(M, row + rowNbr[k], col + colNbr[k], visited, tcol, trow); 
} 

// The main function that returns 
// count of islands in a given boolean 
// 2D matrix 
int countIslands(int M[][COL], int trow, int tcol) 
{ 
	// Make a bool array to mark visited cells. 
	// Initially all cells are unvisited 
	bool visited[ROW][COL]; 
	memset(visited, 0, sizeof(visited)); 

	// Initialize count as 0 and 
	// travese through the all cells of 
	// given matrix 
	int count = 0; 
	for (int i = 0; i < trow; ++i) 
		for (int j = 0; j < tcol; ++j) 

			// If a cell with value 1 is not 
			if (M[i][j] && !visited[i][j]) { 
				// visited yet, then new island found 
				// Visit all cells in this island. 
				DFS(M, i, j, visited, tcol, trow); 

				// and increment island count 
				++count; 
			} 

	return count; 
} 


bool correctString(string s){
	string t = "";
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '#'){
			t += '#';
			while(s[i] == '#') i++;
			if(i == s.length()) break;
			if(s[i] == '.') i--;

		}else if(s[i] == '.'){
			t += '.';
			while(s[i] == '.') i++;
			if(i == s.length()) break;

			if(s[i] == '#') i--;
		}
	}
	if(s.length() == 1 && s == ".") return false;
	// if(t.length() == 1 && t[0] == '.') return false;
	// if(s.length() >)
	for(int i = 1; i < t.length()-1; i++){
		if(t[i] == '.' && t[i-1] == '#' && t[i+1] == '#') return false;
	}

	return true;
	
}

bool correctGrid(vs a){
	for(int i = 0; i < a.size(); i++){
		if(!correctString(a[i])) return false;
	}
	return true;
}

int main() 
{ 	
	// string s;
	// cin>>s;
	// cout<<correctString(s)<<endl;
	int n, m;
	cin>>n>>m;
	int M[n][COL];

	int trow = n;
	int tcol = m;
	
	vs rotated;
	vs grid;

	for(int i = 0; i < n; i++){
		string s;
		cin>>s;
		grid.push_back(s);
		for(int j = 0; j < m; j++){
			M[i][j] = (s[j]=='#')?1:0;
		}
	}


	for(int i = 0; i < grid[0].size(); i++){
		string q = "";
		for(int j = 0; j < grid.size(); j++){
			q += grid[j][i];
		}
		rotated.push_back(q);
	}
	int countDots = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(M[i][j] == 0) countDots++;
		}
	}

	if(countDots == n*m){
		cout<<0<<endl;
	}
	else if(correctGrid(grid) && correctGrid(rotated)){
		cout <<countIslands(M, trow, tcol)<<endl; 
	}else{
		cout<<-1<<endl;
	}
	// show(grid);
	// cout<<"below is rotated"<<endl;
	// show(rotated);


	// cout <<countIslands(M, trow, tcol)<<endl; 
} 


